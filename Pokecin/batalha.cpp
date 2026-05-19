#include "batalha.hpp"
#include "ataques.hpp" 
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include "cores.hpp"

// TABELA DE FRAQUEZAS E VANTAGENS
// devolve o multiplicador de dano (0.5, 1.0 ou 2.0)
float calcularFraqueza(std::string tipoAtaque, std::string tipoDefensor) 
{
    if (tipoAtaque == "Fogo" && tipoDefensor == "Grama") return 2.0f;
    if (tipoAtaque == "Agua" && tipoDefensor == "Fogo") return 2.0f;
    if (tipoAtaque == "Grama" && tipoDefensor == "Agua") return 2.0f;
    if (tipoAtaque == "Eletrico" && tipoDefensor == "Agua") return 2.0f;
    if (tipoAtaque == "Gelo" && tipoDefensor == "Grama") return 2.0f;

    // Casos de fraqueza (Pouco efetivo)
    if (tipoAtaque == "Fogo" && tipoDefensor == "Agua") return 0.5f;
    if (tipoAtaque == "Agua" && tipoDefensor == "Grama") return 0.5f;
    if (tipoAtaque == "Grama" && tipoDefensor == "Fogo") return 0.5f;
    if (tipoAtaque == "Eletrico" && tipoDefensor == "Grama") return 0.5f;

    return 1.0f; // Dano normal se não tiver vantagem nem desvantagem
}

void iniciarBatalha(Pokemon& meuPokemon, Pokemon& inimigo, Inventario& minhaMochila) 
{
    // Carrega o mapa com todos os ataques
    std::map<std::string, Ataque> dicionarioAtaques = inicializarAtaques();

    std::cout << "\n" << RED << " !!! UM " << inimigo.getNome() << " SELVAGEM APARECEU !!!" << RESET << "\n";

    while (meuPokemon.getVidaAtual() > 0 && inimigo.getVidaAtual() > 0) 
    {
        
        // DESENHANDO A HUD
        std::cout << CYAN << "===========================================" << RESET << "\n";
        std::string hpStr = std::to_string(meuPokemon.getVidaAtual()) + "/" + std::to_string(meuPokemon.getVidaMax());
        std::cout << CYAN << "|| " << YELLOW << std::left << std::setw(15) << meuPokemon.getNome() << RESET 
                  << "HP: " << GREEN << std::left << std::setw(19) << hpStr << CYAN << "||\n" << RESET;
        std::cout << CYAN << "|| " << RED << std::left << std::setw(15) << inimigo.getNome() << RESET 
                  << "HP: " << RED << std::left << std::setw(19) << inimigo.getVidaAtual() << CYAN << "||\n" << RESET;
        std::cout << CYAN << "===========================================" << RESET << "\n";
        std::cout << CYAN << "|| " << RESET << std::left << std::setw(15) << "1. Atacar" << std::left << std::setw(23) << "|  3. Fugir" << CYAN << "||\n" << RESET;
        std::cout << CYAN << "|| " << RESET << "2. Pocao (" << YELLOW << minhaMochila.getPocoes() << RESET << ")   " << std::left << std::setw(23) << "|" << CYAN << "||\n" << RESET;
        std::cout << CYAN << "===========================================" << RESET << "\n";
        std::cout << "* O que voce vai fazer? => ";

        int escolha;
        std::cin >> escolha;
        std::cout << "\n";

        // SE O JOGADOR ESCOLHER ATACAR
        if (escolha == 1) {
            // Abre o SUBMENU de ataques mostrando os 4 golpes reais do bicho
            std::cout << CYAN << "=== ESCOLHA O GOLPE ===" << RESET << "\n";
            std::cout << "1. " << meuPokemon.getGolpe(0) << "\t2. " << meuPokemon.getGolpe(1) << "\n";
            std::cout << "3. " << meuPokemon.getGolpe(2) << "\t4. " << meuPokemon.getGolpe(3) << "\n";
            std::cout << "Escolha o ataque (1-4): ";
            int numGolpe;
            std::cin >> numGolpe;

            // ajustando o índice de 1-4 para 0-3
            std::string nomeGolpe = meuPokemon.getGolpe(numGolpe - 1);
            
            // Busca os dados reais do golpe 
            Ataque dadosGolpe = dicionarioAtaques[nomeGolpe];

            // Calcula o multiplicador de fraqueza/vantagem
            float mult = calcularFraqueza(dadosGolpe.tipo, inimigo.getTipo());
            int danoFinal = dadosGolpe.poder * mult;

            std::cout << "\n> " << YELLOW << meuPokemon.getNome() << RESET << " usou " << GREEN << nomeGolpe << RESET << "!\n";
            if (mult > 1.0f) std::cout << YELLOW << "> Foi super efetivo! " << RESET << "\n";
            if (mult < 1.0f) std::cout << CYAN << "> Não foi muito efetivo... " << RESET << "\n";

            std::cout << "> Causou " << RED << danoFinal << " de dano!" << RESET << "\n";
            inimigo.receberDano(danoFinal);
            
        } 
        else if (escolha == 2) 
        {
            if (minhaMochila.usarPocao()) 
            {
                std::cout << "> Voce usou uma " << GREEN << "Pocao" << RESET << "!\n";
                meuPokemon.curarVida(20);
                std::cout << "> " << YELLOW << meuPokemon.getNome() << RESET << " curou " << GREEN << "20 HP!" << RESET << "\n";
            } 
            else 
            {
                continue; 
            }
        }
        else if (escolha == 3) 
        {
            std::cout << "> Voce " << MAGENTA << "fugiu" << RESET << " da batalha!\n";
            return; 
        } 
        else 
        {
            std::cout << "> Opcao invalida.\n";
            continue; 
        }

        std::cout << CYAN << "\n[Aperte ENTER para continuar]" << RESET;
        std::cin.ignore(); 
        std::cin.get();    

        if (inimigo.getVidaAtual() <= 0) 
        {
            std::cout << "\n*** O " << RED << inimigo.getNome() << RESET << " inimigo desmaiou! " << YELLOW << "VOCE VENCEU!" << RESET << " ***\n";
            break; 
        }

        // TURNO DO INIMIGO (Ele usa o primeiro golpe dele por enqt)
        std::string golpeInimigo = inimigo.getGolpe(0);
        Ataque dadosGolpeInimigo = dicionarioAtaques[golpeInimigo];
        
        float multInimigo = calcularFraqueza(dadosGolpeInimigo.tipo, meuPokemon.getTipo());
        int danoInimigoFinal = dadosGolpeInimigo.poder * multInimigo;

        std::cout << "> O " << RED << inimigo.getNome() << RESET << " selvagem atacou de volta usando " << RED << golpeInimigo << RESET << "!\n";
        if (multInimigo > 1.0f) std::cout << YELLOW << "> Foi super efetivo no seu Pokémon! ⚠️" << RESET << "\n";
        std::cout << "> Voce sofreu " << RED << danoInimigoFinal << " de dano!" << RESET << "\n";
        meuPokemon.receberDano(danoInimigoFinal);

        std::cout << CYAN << "\n[Aperte ENTER para continuar]" << RESET;
        std::cin.get();

        if (meuPokemon.getVidaAtual() <= 0) 
        {
            std::cout << "\n*** Seu " << YELLOW << meuPokemon.getNome() << RESET << " desmaiou... " << RED << "VOCE PERDEU!" << RESET << " ***\n";
            break;
        }
    }
}