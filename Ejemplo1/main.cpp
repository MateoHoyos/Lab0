#include <iostream>

using namespace std;

int main()
{
    string list[7] = {"A","B","C","D","E","F","G"};


    for (int fila=0;fila<=6;fila++) {
        for (int col=0;col<=12;col++) {

            if(col<=fila){
                cout << list[col];

            }

            else {
                if(col>=12-fila){
                cout << list[12-col];
                }

               else {
                cout << " ";
                }

            }

        }
        cout << endl;

    }

    return 0;
}
