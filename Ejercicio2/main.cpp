#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int numero;
    int suma=0;
    int acomulado =0;
    cout << "ingrese un numero: ";
    cin >> numero;

    while (numero>0) {
        acomulado =numero%10;
        suma = suma + pow (acomulado,acomulado);
        numero = numero /10;

    }

    cout << "suma = " << suma << endl;






    return 0;
}




