#include "EspacioUni.hh"
#include <iostream>

Columna EspacioUni::operator[](const float x){
    Columna columna(this, x);

    return columna;
}

float& Columna::operator[](const float y){ //corchete con segundo indice y rellena los valores 
    
    return _espacio->get(_x , y);
}

float& EspacioUni::get(float fx, float fy){
    int x = fx * 10;
    int y = fy * 10;

    if (y >= _height){
        for(int i = 0; i < _width; i++){
            float* columna = _mapa[i];

            float* temp = new float[y + 1];

            for (int k = 0; k < _height; k++){
                temp[k] = columna[k];
            }
        
            for (int k = _height; k < y + 1; k++){
                temp[k] = 0;
            }
            delete[] columna;
            _mapa[i] = temp;
        }
            _height = y + 1;
    }

    if (x >= _width){
        float** temp = new float*[x + 1];

        for(int i = 0; i < _width; i++){
            temp[i] = _mapa[i];
        }

        for(int i = _width; i < x + 1; i++){
            temp[i]= new float[_height];
        }
            delete[] _mapa;
            _mapa = temp;

            _width = x + 1; 

    }   
    return _mapa [x][y];
}
void EspacioUni::buscar(float x, float y, float r, float* arr, std::size_t tamano){
    int actual = 0;
    for(int i = 0; i < _width; i++){
        for(int k = 0; k < _height; k++){
            float fi = i / 10;
            float fk = k / 10;
            if ((fi - x)*(fi - x) + (fk - y)*(fk - y) <= r*r && _mapa[i][k] != 0){
                arr[actual] = _mapa[i][k];

                actual++;
            }
            if(actual >= tamano){
                return;
            }
        }
    }
    for (int i = actual + 1; i < tamano; i++){
        arr[i] = 0;
    }
}

