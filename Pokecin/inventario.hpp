#ifndef INVENTARIO_HPP
#define INVENTARIO_HPP

class Inventario {
private:
    int pocoes;
    int pokebolas;
    int insignias;

public:
    // O construtor 
    Inventario(int qtdPocoes, int qtdPokebolas);
    bool usarPocao();
    bool usarPokebola();
    int getPocoes(); // ver quantas sobraram
    void adicionarItem(const std::string& nome_item, int quantidade = 1);
};

#endif