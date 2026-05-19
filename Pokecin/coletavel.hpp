#ifndef COLETAVEL_HPP
#define COLETAVEL_HPP

#include <string>

// Forward declaration: avisa ao compilador que a classe Player existe, 
// assumindo que você já tem o arquivo Player.hpp no seu projeto.
class Player;

// Classe Base
class Coletavel {
protected:
    std::string nome_item;
    int quantidade;
    bool ativo; // Substitui o comportamento do self.kill()

public:
    Coletavel();
    virtual ~Coletavel() = default;

    virtual void coletar(Player& player);

    // Métodos utilitários
    bool isAtivo() const;
    void kill();
    std::string getNomeItem() const;
};

class Pokebola : public Coletavel {
public:
    Pokebola();
    void coletar(Player& player) override;
};

class GreatBall : public Coletavel {
public:
    GreatBall();
    void coletar(Player& player) override;
};

class Ultraball : public Coletavel {
public:
    Ultraball();
    void coletar(Player& player) override;
};

class Pocao : public Coletavel {
public:
    Pocao();
};

class Insignia : public Coletavel {
public:
    Insignia();
    void coletar(Player& player) override;
};

#endif