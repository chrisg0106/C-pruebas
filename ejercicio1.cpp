#include <iostream> 

bool seEncontro = false;

void analizar (int* numeros, int cantidad){
    for (int i = 0; i < cantidad; i++){
        for(int j = 0; j < cantidad; j++){
            if(i!= j && numeros[i] + numeros[j]== 0){
                std::cout << "si\n";
                seEncontro = true;
            }
        }
    }
    if(!seEncontro){
        std::cout << "no\n";
    }
}
