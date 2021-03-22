void mismaCantidad(std::string arg) {

    int vocales = 0;
    int cons = 0;

    for(int i = 0; i < arg.size(); i++) {

        char c = arg[i];
        if(isalpha(c)!=0){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vocales++;
        }
        else {
            cons++;
        }
        }
    }

    if(vocales == cons) {
        std::cout << "si\n";
    }
    else {
        std::cout << "no\n";
    }
}