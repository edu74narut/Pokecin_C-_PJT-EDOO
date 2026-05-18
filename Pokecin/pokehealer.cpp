//precisa da quantidade de pokemons no time do player!
#include <iostream>
#include "pokemons.hpp"
using namespace std;
//team[i] representa o modo de acessar o pokemon i do time (team[0] = Flamaré -> Flamaré.hp_atual = Flamaré.hp_max)
void heal() {
    cout << "I will get your pokemons for a second, please wait..." << endl;
    cout << "..." << endl;
    cout << "Thanks for waiting, your pokemons are fully healed!" << endl;
    int team_size; //Aqui vai precisar do tamanho do time do player
    for (int i = 0; i < team_size; i++) {
        // Cura o HP atual para o máximo
        team[i].hp_atual = team[i].hp_max;
    }
}