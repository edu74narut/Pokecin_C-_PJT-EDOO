#ifndef INVENTARIO_HPP
#define INVENTARIO_HPP

class Inventario {
private:
    int pocoes;
    int pokebolas;

public:
    // O construtor 
    Inventario(int qtdPocoes, int qtdPokebolas);
    bool usarPocao();
    bool usarPokebola();
    int getPocoes(); // ver quantas sobraram
};

#endif