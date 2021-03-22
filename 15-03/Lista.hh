#include <string>
#pragma once //Esto sirve para que si se llama varias veces este archivo no crea conflicto



class Lista {

    public:
    Lista(int valor, Lista* resto);
    Lista(int valor);

    ~Lista();

    int get_valor();

    Lista* get_resto();

    std::string to_string();
    
    int sumatoria();

    int largo();

    int operator[](std::size_t ix);

    bool tryGet(std::size_t ix, int& resultado);

    void byValue(int valor, std::string st);

    void byReference(int& valor, std::string& st);


    private:
    int _valor;
    
    Lista* _resto;
    //char* _chars; puntero de caracteres 
    //puntero es un numero que nos va a decir en que parte de la memoria esta guardada la lista que se coloco 
    
};