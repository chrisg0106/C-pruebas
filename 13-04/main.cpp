#include <iostream>

#include "Mapa.hh"
#include "Vehiculo.hh"
#include "Jeep.hh"
#include "Pantanera.hh"

int main(int argc, char** argv) {

    int alto = 5;
    int largo = 5;
    Terreno** terreno = new Terreno*[largo];

    for(int i = 0; i < largo; i++) {

        terreno[i] = new Terreno[alto];

        for(int j = 0; j < alto; j++) {
             int ix = i + j;

            if(ix % 2 == 0){
                    terreno[i][j] = Terreno::Tierra;
                }
            else if(ix % 3) {
                    terreno[i][j] = Terreno::Calle;
                }
            else {
                    terreno[i][j] = Terreno::Agua;
                }
        }
    }

    Mapa mapa(terreno, largo, alto);
    //Jeep vehiculo(mapa, 0, 0);
    Pantanera vehiculo(mapa, 0, 0);

    vehiculo.imprimir();

    char accion = '\0';

    while(accion != 'q') {

        std::cin >> accion;

        switch(accion) {

            case 'w':
                vehiculo.mover(Direccion::Arriba);
                break;
            case 's':
                vehiculo.mover(Direccion::Abajo);
                break;
            case 'a':
                vehiculo.mover(Direccion::Izquierda);
                break;
            case 'd':
                vehiculo.mover(Direccion::Derecha);
                break;
        }

        vehiculo.imprimir();
    }

}