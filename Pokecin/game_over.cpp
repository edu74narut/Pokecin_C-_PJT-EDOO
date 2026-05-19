#include <iostream>
using namespace std;

void game_over() {
    cout << "Game Over" << endl;
    cout << "Continue? Y/N" << endl;
    if (cin.get() == 'Y') {
        //continua o jogo
    } else {
        //termina o jogo
        exit(0);
    }
}