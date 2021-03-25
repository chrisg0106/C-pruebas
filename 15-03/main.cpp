#include "Lista.hh"
#include <iostream>

using namespace std;

int main(int argc, char** argv){
  
  
//new hace que se reserve la memoria en el hip 
   

    Lista l(1, new Lista(2, new Lista(3, new Lista(4))));
    

    cout << l.to_string() << "\n";
    cout << l.sumatoria() << "\n";
    cout << l.largo() << "\n";

    cout << "el elemento 1 es: " << l[0] << "\n";

    int byValue = 0;
    std::string sValue = "Hola mundo";

    cout << "by value before " << byValue << ", " << sValue << "\n" ;

    l.byValue(byValue, sValue);

    cout << "by value after " << byValue << ", " << sValue << "\n";

    int byReference = 0;
    string sRef = "Hola mundo";


    cout << "by reference before " << byReference << ", " << sRef << "\n";

    l.byReference(byReference, sRef);

    cout << "by reference after " << byReference << ", " << sRef << "\n";

    int resultado;
    if(l.tryGet(1, resultado)){
        cout << "El valor es: " << resultado << "\n";
    }
    else {
        cout << "El indice no existe \n";
    }
    int x;
    l.tryGet(2, x);
    cout << "El valor de x es " << x << "\n";
    cout << "El valor de resutado es " << resultado << "\n";

 
    cout << "el indice 0 es: " << l[1] << "\n";
    l[1] = 42; 

    


}
