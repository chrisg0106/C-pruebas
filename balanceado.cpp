#include <iostream>

int main () {
    std::string valor;
    int vocales = 0;
    int consonantes = 0;

    std::cout << "Por favor ingrese una palabra: ";
    std::cin >> valor;
    std::cout << "\n";

    size_t qq = valor.size();
    char* copia = new char[qq];
    copia[qq] = '\0';

    for (int i = 0; valor[i] != '\0'; i++) {
        char lVocal = tolower(valor[i]);
        if (
            lVocal == 'a' || lVocal == 'e' || lVocal == 'i' || lVocal == 'o' || lVocal == 'u'
        ) {
            vocales++;
        }
        else{
            consonantes++;
        }
    }
    if (vocales == consonantes) {
        std::cout << "La cantidad de vocales y consonantes es la misma\n";
    }
    else {
        std::cout << "La cantidad de vocales y consonantes no es la misma\n";
    }
}
