#include "Lista.hh"
#include <iostream>

using namespace std;

int main(int argc, char** argv){
  
  
//new hace que se reserve la memoria en el hip 
   

    Lista l(1, new Lista(2, new Lista(3, new Lista(4))));
    

    cout << l.to_string() << l.sumatoria() <<"\n";
    cout << l.largo() << "\n";

    cout << "el elemento 1 es: " << l[0] << "\n";

}
