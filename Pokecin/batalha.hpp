#ifndef BATALHA_HPP
#define BATALHA_HPP

#include "pokemon.hpp"
#include "inventario.hpp"

// Passo os objetos por Referência (&) para alterar os originais e não gastar memória com cópias
void iniciarBatalha(Pokemon& meuPokemon, Pokemon& inimigo, Inventario& minhaMochila);

#endif