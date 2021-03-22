#include <iostream>

int main(){
    int numero=0, cantidad[]={1, 2, 3, 4, 0, 0, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0, 0, 16, 17, 16 }, i=0;
    
    
    std::cout <<"Colocar un numero que se quiere comprobar en la cantidad =";
    std::cin >> numero;
    std::cout << "\n";
    
    for (i = 0; i < numero; i++){
        if (cantidad[i] == cantidad [i + 1]){
            std::cout << "Si\n\n";
        }else{
            std::cout << "No\n\n";
        }
    }
    
    for(i=0; i < numero; i++){
        std::cout<< cantidad[i]<<" ";
    }
    return 0;
}