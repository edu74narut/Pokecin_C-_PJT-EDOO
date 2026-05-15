#ifndef ATAQUES_H
#define ATAQUES_H
#include <map>
#include <string>

struct Ataque{
    int poder;
    std::string tipo;
    int precisao;
};
std::map<std::string, Ataque> inicializarAtaques();
#endif