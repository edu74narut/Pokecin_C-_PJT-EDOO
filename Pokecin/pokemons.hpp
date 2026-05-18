#ifndef POKEMONS_HPP
#define POKEMONS_HPP
#include <string>

using namespace std;

class Pokemon {
    protected:
        // Info base dos pokemons
        string pkm_name;
        string pkm_type;
        int pkm_level;
        int id_dex;
        
        // Stats base
        int hp_base;
        int attack_base;
        int defense_base;
        int speed_base;
        
        // Stats atuais
        int hp_max;
        int atk_atual;
        int def_atual;
        int spd_atual;

        // Status de combate e progressão
        int xp_atual;
        int hp_atual;

    public:
        // ================= CONSTRUTOR =================
        // Recebe os dados base e inicializa o Pokémon
        Pokemon(string name, string type, int id, int b_hp, int b_atk, int b_def, int b_spd, int level = 1) {
            pkm_name = name;
            pkm_type = type;
            id_dex = id;
            pkm_level = level;
            xp_atual = 0;

            // Salva as bases
            hp_base = b_hp;
            attack_base = b_atk;
            defense_base = b_def;
            speed_base = b_spd;

            // Calcula os status reais com base no nível atual
            calcular_stats();

            // O Pokémon nasce com a vida cheia
            hp_atual = hp_max; 
        }

        // ================= MÉTODOS =================
        void calcular_stats() {
            hp_max = (((hp_base + 50) * pkm_level) / 50) + 10;
            atk_atual = ((attack_base * pkm_level) / 50) + 5;
            def_atual = ((defense_base * pkm_level) / 50) + 5;
            spd_atual = ((speed_base * pkm_level) / 50) + 5;
        }

        // Descontando o dano na vida do pkm
        void receber_dano(int dano) { 
            hp_atual -= dano;
            if(hp_atual < 0) {
                hp_atual = 0;
            }
        }

        // Checando se o pkm está nocauteado
        bool is_alive() {
            return hp_atual > 0;
        }

        // Verificando se o pkm subiu de nível
        void subir_nivel() {
            pkm_level += 1;
        
            // Recalcula e cura o aumento de HP
            int antigo_hp_max = hp_max;
            calcular_stats(); // Aqui o hp_max vai aumentar
            
            // A vida atual sobe proporcionalmente ao que aumentou no HP máximo
            hp_atual += (hp_max - antigo_hp_max); 
        }

        // Ganhando xp
        bool ganhar_xp(int exp) {
            xp_atual += exp;
            bool subiu = false;
            while (xp_atual >= (pkm_level * 20)) {
                xp_atual -= (pkm_level * 20);
                subir_nivel();
                subiu = true;
            }
            return subiu;
        }
};

#endif