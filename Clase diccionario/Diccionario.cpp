#include "Diccionario.hh"

#include <iostream>
#include <string>
#include <vector>




void Diccionario::add(std::string palabra,std::string definicion){


size_t qq = _palabras.size();

for (int i = 0; i < qq; i++) {

    if (_palabras[i] == palabra) {
        _palabras[i] = palabra;
        _definiciones[i] = definicion;
       return ; 
    }
    
}

_palabras.push_back(palabra);
_definiciones.push_back(definicion);

}

void Diccionario::search(std::string palabra) {

size_t qq = _palabras.size();

std::string def_palabra;

for (int i = 0; i<qq; i++) {

    if (_palabras[i] == palabra) {
        _palabras[i] = palabra;
        def_palabra = _definiciones[i];
    }
}

std::cout << "Resultado de busqueda: " << def_palabra << "\n";
return;
}

void Diccionario::enumerar(char inicial) {

size_t qq = _palabras.size();
std::vector<std::string> _enumerar = {};
std::cout << "---------Enumerar palabras --------------" << "\n";

for (int i = 0; i<qq; i++) {

    std::string pal_utilizar = _palabras[i];//nos va a servir para pasar el vector a la palabra actual
    
    if (pal_utilizar[0] == inicial) {
        _enumerar.push_back(pal_utilizar);
    }
}

    for (std::string str: _enumerar) {
       
        std::cout << str << "\n";
     }
     
return;

}

void Diccionario::print() {

    std::cout << "--------------------Lista de palabras completas---------------" << "\n";
    for (std::string str : _palabras) {
        std::cout << str << "\n";
    }
    for (std::string str : _definiciones) {
        std::cout << str << "\n";
    }
}