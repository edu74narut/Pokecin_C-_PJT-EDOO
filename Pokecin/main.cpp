#include "jogo.hpp"
#include <iostream>
#include <clocale>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    std::string nome_treinador;

    // intro
    std::string escolha = introPokemonEscolher(nome_treinador);
    //cria um pokemon vazi opor causa do escopo, mas ele vai ser substituido pelo pokemon escolhido
    Pokemon meuPokemon("Erro", "Normal", 1, {"Investida", "Investida", "Investida", "Investida"});

    // Substituímos pelo Pokémon que o jogador escolheu, com os golpes reais do ataques.cpp!
    if (escolha == "flamare") {
        meuPokemon = Pokemon("Flamare", "Fogo", 50, {"Brasas", "Lanca-Chamas", "Investida", "Arranhao"});
    } else if (escolha == "caprio") {
        meuPokemon = Pokemon("Caprio", "Agua", 50, {"Bolhas", "Jato D'Agua", "Investida", "Tapa"});
    } else if (escolha == "soim") {
        meuPokemon = Pokemon("Soim", "Grama", 50, {"Chicote de Vinha", "Folha Navalha", "Investida", "Encarar"});
    }

    Pokemon profPokemon("Pikachu do Prof", "Eletrico", 60, {"Choque do Trovao", "Trovao", "Ataque Rapido", "Investida"});

    // começa com 3 Poções
    Inventario minhaMochila(3, 0); 

    std::cout << "\n=======================================================\n";
    std::cout << "O Professor EDOO quer testar suas habilidades em batalha!\n";
    std::cout << "=======================================================\n";

    iniciarBatalha(meuPokemon, profPokemon, minhaMochila);

    // fim
    std::cout << "\nSua jornada está apenas começando, " << nome_treinador << "!\n";
    std::cout << "Pressione ENTER para fechar o jogo...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}