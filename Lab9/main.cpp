#include "EspacioUni.hh"
#include <iostream>


int main(int argc, char** argv) {

    EspacioUni espacio;

    // Esto imprime 0 a que se reserva la memoria automaticamente
    std::cout << espacio[1.5][3.14] << "\n";

    espacio[2.7][5.67] = 8.5;
    espacio[2.7][5.88] = 7.6;
    espacio[68.2][66.2] = 87;

    std::cout << espacio[2.7][5.67] << "\n";
    std::cout << espacio[2.7][5.88] << "\n";
    std::cout << espacio[68.2][66.2]  << "\n";

    float* busqueda = new float[3];

    /*
    Este metodo coloca 8.5, 7.6 y 0 en el array "busqueda"
    */
    espacio.buscar(2.8, 5, 3, busqueda, 3);

    for(int i = 0; i < 5; i++ ){
        std::cout <<  "  " << i << ". " << busqueda[i] << "\n";
    }

}