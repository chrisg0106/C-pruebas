#pragma once
#include <string>
#include <vector>

class Diccionario {

    public:
    void add(std::string palab,std::string def);
    void search(std::string palabra);
    void enumerar(char inicial);
    void print();
    std::vector<std::string> _palabras = {};
    std::vector<std::string> _definiciones = {};
    std::vector<std::string> _enumerar = {};
    //como no hay otras clases se pueden colocar en publicas o privadas
    private:

};