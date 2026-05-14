#include <map>
#include <string>

struct Ataque{
    int poder;
    std::string tipo;
    int precisao;
};

int main(){
    std::map<std::string, Ataque> ataque;

    // Golpes do tipo Normal
    ataque["Investida"] = {40, "Normal", 100};
    ataque["Arranhao"] = {40, "Normal", 100};
    ataque["Ataque Rapido"] = {40, "Normal", 100};
    ataque["Envolver"] = {15,"Normal",90};
    ataque["Tapa"] = {40, "Normal", 100};
    ataque["Rosnado"] = {1, "Normal", 100};
    ataque["Encarar"] = {1, "Normal", 100};
    ataque["Abanar o Rabo"] = {1, "Normal", 100};
    ataque["Canto"] = {0,"Normal", 55};
    ataque["Flash"] = {0, "Normal", 100};
    ataque["Focar Energia"] = {0, "Normal", 100};
    ataque["Endurecer"] = {0, "Normal", 100};
    ataque["Recuperacao"] ={0, "Normal", 100};
    ataque["Rosnar"] = {0, "Normal", 100};
    ataque["Conversao"] = {0, "Normal", 100};
    ataque["Pancada Corporal"] = {85,"Normal",100};
    ataque["Ataque Rapido"] = {40, "Normal", 100};
    ataque["Cabecada"] = {70,"Normal", 100};
    ataque["Pisar"] = {65,"Normal", 100};
    ataque["Estrondo Sonico"] = {20, "Normal", 90};
    ataque["Meteoro Veloz"] = {60,"Normal",100};
    ataque["Mordida"] = {60,"Normal",100};
    ataque["Enrolar"] = {15,"Normal",90};
    ataque["Autodestruicao"] = {200, "Normal", 100};
    ataque["Velocidade Extrema"] = {80, "Normal",100};
    ataque["Hyper Raio"] = {150,"Normal",80};

    // Golpes do tipo Fogo
    ataque["Brasas"] = {40, "Fogo", 100};
    ataque["Giro de Fogo"] = {35,"Fogo",85};
    ataque["Lanca-Chamas"]={90,"Fogo",90};

    // Golpes do tipo Água
    ataque["Bolhas"]={40,"Agua",100};
    ataque["Jato D'Agua"] = {47,"Agua",100};
    
    // Golpes do tipo Grama
    ataque["Chicote"] = {45,"Grama",100};
    ataque["Po do Sono"] = {0, "Grama", 75};
    ataque["Chicote de Vinha"] = {45,"Grama", 100};
    ataque["Folha Navalha"]= {80,"Grama",100};

    // Golpes do tipo Elétrico
    ataque["Onda de Trovao"] = {0, "Eletrico", 90};
    ataque["Choque do Trovao"] = {40, "Eletrico", 100};
    ataque["Trovao"] = {110,"Eletrico",70};

    // Golpes do tipo Gelo
    ataque["Raio de Gelo"] = {90,"Gelo", 100};
    ataque["Nevasca"] = {110,"Gelo", 70};

    // Golpes do tipo Lutador
    ataque["Golpe de Karate"] = {50,"Lutador",100};
    ataque["Chute Baixo"] = {50,"Lutador",100};
    ataque["Arremesso Sismico"] = {40, "Lutador", 100};

    // Golpes de tipo Venenoso
    ataque["Picada Venenosa"] ={15,"Venenoso",100};
    ataque["Poluicao"]={30,"Venenoso",70};
    ataque["Lama"]={65,"Venenoso",100};
    ataque["Acido"]={40,"Venenoso",100};

    // Golpes do tipo Terra
    ataque["Ataque de Areia"] = {1, "Terra", 100};
    ataque["Magnitude"] = {70,"Terra",100};
    ataque["Osso Clube"] = {65, "Terra",85};
    ataque["Bonemerangue"] ={50,"Terra",90};

    // Golpes do tipo Pedra
    ataque["Arremesso de Rocha"] = {50,"Pedra",90};
    
    // Golpes do tipo Voador
    ataque["Ventania"]={40,"Voador",100};
    ataque["Bicada"] ={35,"Voador",100};
    ataque["Bicar"]={35,"Voador",100};
    ataque["Bico Broca"] = {80,"Voador", 100};
    ataque["Ataque do Ceu"]={140,"Voador",90};

    // Golpes do tipo Psíquico
    ataque["Teletransporte"] = {0,"Psiquico",100};
    ataque["Agilidade"]= {0,"Psiquico",100};
    ataque["Barreira"]= {0,"Psiquico",100};
    ataque["Refletir"]= {0,"Psiquico",100};
    ataque["Confusao"]={50,"Psiquico",100};
    ataque["Psirraio"]={65,"Psiquico",100};
    ataque["Psiquico"]={90,"Psiquico",100};

    // Golpe do tipo Inseto
    ataque["Tiro de Teia"] = {1,"Inseto", 95};

    // Golpe do tipo Dragão
    ataque["Garra de Dragão"] = {80,"Dragao",100};
    ataque["Ultraje"]={120,"Dragao",100};
    
    return 0;
};

