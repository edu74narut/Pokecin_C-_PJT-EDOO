#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <map>

// Estrutura para armazenar os dados de cada Pokémon
struct PokemonData {
    long long id;
    std::string tipo;
    std::array<int, 4> stats; // (HP, Ataque, Defesa, Velocidade)
    std::vector<std::string> golpes;
    std::string raridade;
};

// Definição da POKEDEX
const std::map<std::string, PokemonData> POKEDEX = {
    // INICIAIS
    {"Flamare", {20000, "Fogo", {39, 52, 43, 65}, {"Arranhao", "Brasas", "Investida", "Lanca-Chamas"}, "inicial"}},
    {"Soim", {10000, "Grama", {45, 49, 49, 45}, {"Investida", "Chicote de Vinha", "Folha Navalha"}, "inicial"}},
    {"Caprio", {30000, "agua", {44, 48, 65, 43}, {"Investida", "Bolhas", "Jato D'Agua"}, "inicial"}},
    //Resto da Pokedex
    {"Byte", {670730110, "Aco", {106, 110, 90, 130}, {"Choque do Trovão", "Investida", "Trovao", "Mordida"}, "comum"}},
    {"Byte*", {670730110, "Aco", {106, 110, 90, 130}, {"Choque do Trovão", "Investida", "Trovao", "Mordida"}, "shiny"}},

    {"Bulbasaur", {1, "Grama", {45, 49, 49, 45}, {"Investida", "Chicote de Vinha", "Folha Navalha"}, "super_raro"}},
    {"Bulbasaur*", {1, "Grama", {45, 49, 49, 45}, {"Investida", "Chicote de Vinha", "Folha Navalha"}, "shiny"}},

    {"Charmander", {4, "Fogo", {39, 52, 43, 65}, {"Arranhao", "Brasas", "Investida"}, "super_raro"}},
    {"Charmander*", {4, "Fogo", {39, 52, 43, 65}, {"Arranhao", "Brasas", "Investida"}, "shiny"}},

    {"Squirtle", {7, "Agua", {44, 48, 65, 43}, {"Investida", "Bolhas", "Jato D'Agua"}, "super_raro"}},
    {"Squirtle*", {7, "Agua", {44, 48, 65, 43}, {"Investida", "Bolhas", "Jato D'Agua"}, "shiny"}},

    {"Caterpie", {10, "Inseto", {45, 30, 35, 45}, {"Investida", "Tiro de Teia", "Picada", "Endurecer"}, "comum"}},
    {"Caterpie*", {10, "Inseto", {45, 30, 35, 45}, {"Investida", "Tiro de Teia", "Picada", "Endurecer"}, "shiny"}},

    {"Weedle", {13, "Inseto/Veneno", {40, 35, 30, 50}, {"Tiro de Teia", "Investida", "Endurecer"}, "comum"}},
    {"Weedle*", {13, "Inseto/Veneno", {40, 35, 30, 50}, {"Tiro de Teia", "Investida", "Endurecer"}, "shiny"}},

    {"Pidgey", {16, "Normal/Voador", {40, 45, 40, 56}, {"Investida", "Ataque de Areia", "Ventania", "Ataque Rapido"}, "comum"}},
    {"Pidgey*", {16, "Normal/Voador", {40, 45, 40, 56}, {"Investida", "Ataque de Areia", "Ventania", "Ataque Rapido"}, "shiny"}},

    {"Rattata", {19, "Normal", {30, 56, 35, 72}, {"Investida", "Abanar o Rabo", "Ataque Rapido", "Mordida"}, "comum"}},
    {"Rattata*", {19, "Normal", {30, 56, 35, 72}, {"Investida", "Abanar o Rabo", "Ataque Rapido", "Mordida"}, "shiny"}},

    {"Spearow", {21, "Normal/Voador", {40, 60, 30, 70}, {"Bicar", "Rosnar", "Investida"}, "comum"}},
    {"Spearow*", {21, "Normal/Voador", {40, 60, 30, 70}, {"Bicar", "Rosnar", "Investida"}, "shiny"}},

    {"Ekans", {23, "Veneno", {35, 60, 44, 55}, {"Picada Venenosa", "Enrolar", "Mordida", "Acido"}, "comum"}},
    {"Ekans*", {23, "Veneno", {35, 60, 44, 55}, {"Picada Venenosa", "Enrolar", "Mordida", "Acido"}, "shiny"}},

    {"Pikachu", {25, "Eletrico", {35, 55, 40, 90}, {"Choque do Trovao", "Rosnar", "Ataque Rapido"}, "raro"}},
    {"Pikachu*", {25, "Eletrico", {35, 55, 40, 90}, {"Choque do Trovao", "Rosnar", "Ataque Rapido"}, "shiny"}},

    {"Sandshrew", {27, "Terra", {50, 75, 85, 40}, {"Arranhao", "Ataque de Areia", "Investida", "Estrela Cadente"}, "comum"}},
    {"Sandshrew*", {27, "Terra", {50, 75, 85, 40}, {"Arranhao", "Ataque de Areia", "Investida", "Estrela Cadente"}, "shiny"}},

    {"Nidoran F", {29, "Veneno", {55, 47, 52, 41}, {"Rosnar", "Arranhao", "Mordida"}, "comum"}},
    {"Nidoran F*", {29, "Veneno", {55, 47, 52, 41}, {"Rosnar", "Arranhao", "Mordida"}, "shiny"}},

    {"Nidoran M", {32, "Veneno", {46, 57, 40, 50}, {"Encarar", "Investida", "Picada Venenosa", "Chifrada"}, "comum"}},
    {"Nidoran M*", {32, "Veneno", {46, 57, 40, 50}, {"Encarar", "Investida", "Picada Venenosa", "Chifrada"}, "shiny"}},

    {"Clefairy", {35, "Normal", {70, 45, 48, 35}, {"Tapa", "Rosnar", "Investida"}, "super_raro"}},
    {"Clefairy*", {35, "Normal", {70, 45, 48, 35}, {"Tapa", "Rosnar", "Investida"}, "shiny"}},

    {"Vulpix", {37, "Fogo", {38, 41, 40, 65}, {"Brasas", "Abanar o Rabo", "Ataque Rapido", "Confusao"}, "super_raro"}},
    {"Vulpix*", {37, "Fogo", {38, 41, 40, 65}, {"Brasas", "Abanar o Rabo", "Ataque Rapido", "Confusao"}, "shiny"}},

    {"Abra", {63, "Psiquico", {25, 105, 15, 90}, {"Teletransporte", "Confusao", "Flash", "Psiquico"}, "super_raro"}},
    {"Abra*", {63, "Psiquico", {25, 105, 15, 90}, {"Teletransporte", "Confusao", "Flash", "Psiquico"}, "shiny"}},

    {"Machop", {66, "Lutador", {70, 80, 50, 35}, {"Golpe de Karate", "Chute Baixo", "Eremesso Sismico", "Focar Energia"}, "raro"}},
    {"Machop*", {66, "Lutador", {70, 80, 50, 35}, {"Golpe de Karate", "Chute Baixo", "Eremesso Sismico", "Focar Energia"}, "shiny"}},

    {"Bellsprout", {69, "Grama/Veneno", {50, 75, 35, 40}, {"Chicote de Vinha", "Acido", "Enrolar", "Po do Sono"}, "comum"}},
    {"Bellsprout*", {69, "Grama/Veneno", {50, 75, 35, 40}, {"Chicote de Vinha", "Acido", "Enrolar", "Po do Sono"}, "shiny"}},

    {"Geodude", {74, "Pedra/Terra", {40, 80, 100, 20}, {"Arremesso de Rocha", "Investida", "Magnitude", "Endurecer"}, "raro"}},
    {"Geodude*", {74, "Pedra/Terra", {40, 80, 100, 20}, {"Arremesso de Rocha", "Investida", "Magnitude", "Endurecer"}, "shiny"}},

    {"Ponyta", {77, "Fogo", {50, 85, 55, 90}, {"Brasas", "Pisar", "Giro de Fogo", "Ataque Rapido"}, "raro"}},
    {"Ponyta*", {77, "Fogo", {50, 85, 55, 90}, {"Brasas", "Pisar", "Giro de Fogo", "Ataque Rapido"}, "shiny"}},

    {"Magnemite", {81, "Eletrico/Aco", {25, 35, 70, 45}, {"Choque do Trovao", "Estrondo Sonico", "Onda de Trovao", "Investida"}, "raro"}},
    {"Magnemite*", {81, "Eletrico/Aco", {25, 35, 70, 45}, {"Choque do Trovao", "Estrondo Sonico", "Onda de Trovao", "Investida"}, "shiny"}},

    {"Cubone", {104, "Terra", {50, 50, 95, 35}, {"Osso Clube", "Cabecada", "Rosnar", "Bonemerangue"}, "raro"}},
    {"Cubone*", {104, "Terra", {50, 50, 95, 35}, {"Osso Clube", "Cabecada", "Rosnar", "Bonemerangue"}, "shiny"}},

    {"Koffing", {109, "Veneno", {40, 65, 95, 35}, {"Poluicao", "Lama", "Investida"}, "raro"}},
    {"Koffing*", {109, "Veneno", {40, 65, 95, 35}, {"Poluicao", "Lama", "Investida"}, "shiny"}},

    {"Lapras", {131, "Agua/Gelo", {130, 85, 80, 60}, {"Jato D'Agua", "Raio de Gelo", "Pancada Corporal", "Canto"}, "super_raro"}},
    {"Lapras*", {131, "Agua/Gelo", {130, 85, 80, 60}, {"Jato D'Agua", "Raio de Gelo", "Pancada Corporal", "Canto"}, "shiny"}},

    {"Eevee", {133, "Normal", {55, 55, 50, 55}, {"Investida", "Ataque de Areia", "Ataque Rapido", "Mordida"}, "super_raro"}},
    {"Eevee*", {133, "Normal", {55, 55, 50, 55}, {"Investida", "Ataque de Areia", "Ataque Rapido", "Mordida"}, "shiny"}},

    {"Porygon", {137, "Normal", {65, 60, 70, 40}, {"Investida", "Psirraio", "Tri-Ataque"}, "super_raro"}},
    {"Porygon*", {137, "Normal", {65, 60, 70, 40}, {"Investida", "Conversao", "Psirraio", "Tri-Ataque"}, "shiny"}},
    //Lendarios
    {"Articuno", {144, "Gelo/Voador", {90, 85, 100, 85}, {"Raio de Gelo", "Nevasca", "Bicar", "Refletir"}, "lendario"}},
    {"Articuno*", {144, "Gelo/Voador", {90, 85, 100, 85}, {"Raio de Gelo", "Nevasca", "Bicar", "Refletir"}, "shiny"}},

    {"Zapdos", {145, "Eletrico/Voador", {90, 90, 85, 100}, {"Trovao", "Bico Broca", "Onda de Trovao", "Ataque Rapido"}, "lendario"}},
    {"Zapdos*", {145, "Eletrico/Voador", {90, 90, 85, 100}, {"Trovao", "Bico Broca", "Onda de Trovao", "Ataque Rapido"}, "shiny"}},

    {"Moltres", {146, "Fogo/Voador", {90, 100, 90, 90}, {"Lanca-Chamas", "Ataque do Ceu", "Agilidade", "Bicar"}, "lendario"}},
    {"Moltres*", {146, "Fogo/Voador", {90, 100, 90, 90}, {"Lanca-Chamas", "Ataque do Ceu", "Agilidade", "Bicar"}, "shiny"}},

    {"Mewtwo", {150, "Psiquico", {106, 110, 90, 130}, {"Psiquico", "Meteoro Veloz", "Barreira", "Recuperacao"}, "lendario"}},
    {"Mewtwo*", {150, "Psiquico", {106, 110, 90, 130}, {"Psiquico", "Meteoro Veloz", "Barreira", "Recuperacao"}, "shiny"}},

    {"Rayquaza", {384, "Dragão/Voador", {105, 150, 90, 95}, {"Garra de Dragão", "Velocidade Extrema", "Ultraje", "Hiper Raio"}, "lendario"}}
};

// progresso_pokedex equivalente em C++
// Mapeia o nome do Pokémon (string) para o status de captura (bool) ou dados salvos.
std::map<std::string, bool> progresso_pokedex;

int main() {
    std::string poke_escolhido;
    
    // Verifica se o Pokémon existe na Pokedex
    if (POKEDEX.find(poke_escolhido) != POKEDEX.end()) {
        PokemonData dados = POKEDEX.at(poke_escolhido);
        std::cout << "Pokemon: " << poke_escolhido << "\n";
        std::cout << "Tipo: " << dados.tipo << "\n";
        std::cout << "Raridade: " << dados.raridade << "\n";
        std::cout << "Primeiro golpe: " << dados.golpes[0] << "\n";
    }

    return 0;
}