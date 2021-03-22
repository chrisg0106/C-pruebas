#include <iostream>

#include <string.h>



using namespace std;



int main()

{

  const char noDeseados[] = { ',',' ' };

  char Numero[100]; int x = 0;

  cout << "Escribe una lista de numeros separados con coma: "; cin.getline(Numero, 100);

  for (int i = 0; i < strlen(Numero); i++)

  {

    for (int j = 0; j < strlen(noDeseados); j++)

      if (Numero[i] == noDeseados[j]) x= 1;



    if (x== 0) cout << Numero[i];

    x= 0;

  }

  cout << '\n';

  return 0;

}