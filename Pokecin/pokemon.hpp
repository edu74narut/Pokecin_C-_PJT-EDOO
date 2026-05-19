#ifndef POKEMON_HPP
#define POKEMON_HPP

#include <string>
#include <vector>

class Pokemon 
{
    private:
        std::string nome;
        std::string tipo; 
        int vidaAtual;
        int vidaMax;
        std::vector<std::string> golpes; // Lista com os 4 golpes dele

    public:
        // Construtor atualizado para receber o Tipo e os Golpes
        Pokemon(std::string nomeIn, std::string tipoIn, int vidaIn, std::vector<std::string> golpesIn);

        // Getters
        std::string getNome();
        std::string getTipo(); // calcular a fraqueza
        int getVidaAtual();
        int getVidaMax();
        std::string getGolpe(int indice); // Pega o nome do golpe pelo número (0, 1, 2, 3)

        // Ações
        void receberDano(int dano);
        void curarVida(int cura);
};

#endif