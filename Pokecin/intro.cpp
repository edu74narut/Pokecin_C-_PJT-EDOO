#include "intro.hpp"
#include <iostream>
#include <vector>

void pausarParaEnter() {
    std::cout << " [Aperte ENTER]";
    std::cin.get(); // Espera o usuário apertar Enter
}

std::string introPokemonEscolher(std::string& nome){
    std::string pokemon;
    // Roteiro
    std::vector<std::string> falas_intro = {
        "Olá! Bem-vindo ao fantástico mundo de Pokémon.",
        "Esse mundo é habitado por diversas criaturas misteriosas.",
        "Meu nome é Gustavo Carvalho.",
        "As pessoas me chamam de Professor EDOO.",
        "Estamos precisando de ajuda aqui no CIn.",
        "A Equipe Manga Rosa quer usar seus pokémons para destruir nossos computadores!",
        "Precisamos de alguém para derrotá-los!",
        "Será que você é o candidato ideal?",
        "Vamos fazer um teste para ver sua competência.",
        "Mas primeiro, diga-me algo sobre você."
    };

    for (const auto& fala : falas_intro) {
        std::cout << "Prof. EDOO: " << fala;
        pausarParaEnter();
    }

    // Pegando nome
    std::cout << "\nQual o seu nome?" << "\n";
    std::getline(std::cin, nome);

    // Roteiro pós pegar nome
    std::vector<std::string> falas_posPokemon = {
        "Ah, certo! Então seu nome é "+nome+"?", 
        "Forme uma equipe de até 6 pokémons e me desafie numa batalha.", 
        "Se você me vencer, será destinado a enfrentar a Equipe Manga Rosa!!", 
        "Sua jornada começa agora!", 
        "Escolha um dos 3 Pokémons na mesa.", 
        "Após isso, sinta-se à vontade para capturar mais alguns no mato.", 
        "Te dei três Pokébolas e uma Poção de Vida para começar, boa sorte!", 
        "Estarei esperando por você!"
    };

    for(const auto& fala: falas_posPokemon){
        std::cout<<"Prof. EDOO: " << fala;
        pausarParaEnter();
    }

    // Escolhendo o pokemon
    while(pokemon != "soim" && pokemon != "flamare" && pokemon != "caprio"){
        std::cout << "\nEscolher Pokémon" << "\n";
        std::cout << "soim - flamare - caprio" << "\n";
        std::cin >> pokemon;
        std::cin.ignore();

        // Garantindo que a string esteja igual no dicionário, toda em minúscula
        for(char &letra:pokemon){
            letra=std::tolower(letra);
        }

        // Verificação pra não colocar pokémon inválido
        if (pokemon != "soim" && pokemon != "flamare" && pokemon != "caprio") {
            std::cout << "\n[ERRO] Esse Pokémon não está na mesa do Prof. EDOO! Tente novamente.\n\n";
        }
    }

    return pokemon;
}