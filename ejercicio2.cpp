
void comparar(int* numeros, int cantidad){
    int i =0;
    while(i < cantidad){
        int j = 0;
        while(i < cantidad){
            if(i!=j && numeros[i]==numeros[j]){
                std::cout << "si\n";
                return;
            }
            j++;
        }
        i++;
    }
    std::cout << "no\n";
}