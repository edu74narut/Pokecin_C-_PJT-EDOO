#include "coletavel.hpp"
#include "player.hpp" 
#include <iostream>

// === Implementação da Classe Base ===

Coletavel::Coletavel() : nome_item("item_desconhecido"), quantidade(1), ativo(true) {
    // Construtor limpo, sem coordenadas ou imagens
}

Coletavel::Coletavel() : nome_item("item_desconhecido"), quantidade(1), ativo(true) {}

void Coletavel::coletar(Player& player) {
    std::cout << "[!] Voce encontrou: " << nome_item << "!\n";
    
    player.getInventario().adicionarItem(nome_item, quantidade);
    
    kill(); // Desativa o item no mapa
}
bool Coletavel::isAtivo() const { 
    return ativo; 
}

void Coletavel::kill() { 
    ativo = false; 
}

std::string Coletavel::getNomeItem() const { 
    return nome_item; 
}

Pokebola::Pokebola() { 
    nome_item = "Pokebola"; 
}
void Pokebola::coletar(Player& player) { 
    Coletavel::coletar(player); 
}

GreatBall::GreatBall() { 
    nome_item = "Grande Bola"; 
}
void GreatBall::coletar(Player& player) { 
    Coletavel::coletar(player); 
}

Ultraball::Ultraball() { 
    nome_item = "Ultra Bola"; 
}
void Ultraball::coletar(Player& player) { 
    Coletavel::coletar(player); 
}

Pocao::Pocao() { 
    nome_item = "Poção de Vida"; 
}

Insignia::Insignia() { 
    nome_item = "Insígnia do Professor"; 
}
void Insignia::coletar(Player& player) { 
    Coletavel::coletar(player); 
}