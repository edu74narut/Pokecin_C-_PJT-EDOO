#include "Vitoria.hpp"
#include <iostream>
#include <string>

bool Vitoria::exibir() {
    std::cout << "\n\n\n";
    std::cout << "======================================================\n";
    std::cout << "                     V I T O R I A                    \n";
    std::cout << "======================================================\n";
    std::cout << "\n";
    std::cout << "             O Professor foi derrotado!               \n";
    std::cout << "        Voce conquistou a Insignia do CIn!            \n";
    std::cout << "\n";
    std::cout << "======================================================\n\n";
    
    std::cout << "[ Pressione ENTER para voltar ao menu ou digite 'S' para sair ]: ";
    
    std::string input;
    // Aguarda o jogador digitar algo e apertar ENTER
    std::getline(std::cin, input);
    
    if (input == "s" || input == "S") {
        return false; 
    }
    
    return true; 
}