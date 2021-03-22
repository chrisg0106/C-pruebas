#include <iostream>
#include <string.h>

int main()
{
    const char simbAQuitar[] = { '-', '+',',', '*'};
    char Numeros[20]; 
    int cambio = 0;
    std::cout << "Por favor escribe una lista de numeros con simbolos y comas: "; 
    std::cin.getline(Numeros, 20); 
    for (int i = 0; i < strlen(Numeros); i++)
    {
        for (int j = 0; j < strlen(simbAQuitar); j++)
            if (Numeros[i] == simbAQuitar[j]) 
            cambio = 1;

        if (cambio == 0) 
        std::cout << Numeros[i];
        cambio = 0;
    }
    std::cout << '\n';
    return 0;
}