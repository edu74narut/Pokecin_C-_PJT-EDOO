#include "jogo.hpp"

int main(){
    std::string nome_treinador;
    std::string pokemon = introPokemonEscolher(nome_treinador);

    std::cout << "Deu tudo certo, seu nome é: " << nome_treinador;
    std::cout << "\nPressione ENTER para encerrar o jogo...";
    std::cin.get();
    return 0;
}