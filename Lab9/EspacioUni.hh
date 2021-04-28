#pragma once 
#include <cstddef>

class Columna;
class EspacioUni; 

class EspacioUni{
    public: 
    Columna operator[](const float x);
    float& get(float x, float y);

    void buscar(float x, float y, float r, float* arr, std::size_t tamano);
    void trasladar(float dx, float dy);

    private:
    float** _mapa = new float*[0];
    int _width = 0; 
    int _height = 0;
};

class Columna{
    public:
        Columna(EspacioUni* espacio, int x): _espacio(espacio), _x(x){}

        float& operator[](const float y);

    private:
        EspacioUni* _espacio; //para crear un tipo espacio.
        int _x;
};



