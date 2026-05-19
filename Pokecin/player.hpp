#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Inventario.hpp"
#include <string>

class Player {
private:
    std::string nome;
    Inventario inventario; // Agora está protegido!

public:
    Player(std::string n) : nome(n), inventario(1, 3) {}
    ~Player() = default;

    // Getter para o nome
    std::string getNome() const {
        return nome;
    }

    Inventario& getInventario() {
        return inventario;
    }
};

#endif