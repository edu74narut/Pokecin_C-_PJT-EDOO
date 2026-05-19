#include "inventario.hpp"
#include <iostream>

// Construindo a mochila com os itens iniciais (O prof EDOO deu 1 poção e 3 pokébolas)
Inventario::Inventario(int qtdPocoes, int qtdPokebolas) 
{
    pocoes = qtdPocoes;
    pokebolas = qtdPokebolas;
}

// Retorna quantas poções eu tenho pra exibir no menu da batalha
int Inventario::getPocoes() { return pocoes; }

// verifica se tem item antes de tentar usar
bool Inventario::usarPocao() 
{
    if (pocoes > 0) 
    {
        pocoes--; // Gasta 1 poção 
        return true; // pode curar 
    } 
    else 
    {
        std::cout << "\n[Aviso] Você não tem mais poções na mochila!\n";
        return false; // Falhou, não tem item.
    }
}

// Mesma lógica para a pokébola
bool Inventario::usarPokebola() {
    if (pokebolas > 0) 
    {
        pokebolas--;
        return true;
    } 
    else 
    {
        std::cout << "\n[Aviso] Suas Pokébolas acabaram!\n";
        return false;
    }
}