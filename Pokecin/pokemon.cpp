#include "pokemon.hpp"

// Construtor 
Pokemon::Pokemon(std::string nomeIn, std::string tipoIn, int vidaIn, std::vector<std::string> golpesIn) 
{
    nome = nomeIn;
    tipo = tipoIn;
    vidaMax = vidaIn;
    vidaAtual = vidaIn;
    golpes = golpesIn;
}

std::string Pokemon::getNome() { return nome; }
std::string Pokemon::getTipo() { return tipo; }
int Pokemon::getVidaAtual() { return vidaAtual; }
int Pokemon::getVidaMax() { return vidaMax; }

// Funçãozinha para a batalha conseguir ler os nomes dos golpes da nossa lista privada
std::string Pokemon::getGolpe(int indice) 
{
    if (indice >= 0 && indice < golpes.size()) 
    {
        return golpes[indice];
    }
    return "Ataque Rápido"; // Golpe padrão caso falhe
}

void Pokemon::receberDano(int dano) 
{
    vidaAtual -= dano;
    if (vidaAtual < 0) vidaAtual = 0;
}

void Pokemon::curarVida(int cura) 
{
    vidaAtual += cura;
    if (vidaAtual > vidaMax) vidaAtual = vidaMax;
}