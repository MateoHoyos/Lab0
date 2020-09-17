#include <iostream>

using namespace std;

int main()
{
    string list[14] = {"A","B","C","D","E","F","G","A","B","C","D","E","F","G"};

    int c,f;

    for (f=0;f<=12;f++) {
        for (c=0;c<=12;c++) {

            if(c<=f && f<=6){
                cout << list[c];

            }

            else {
                if(c>=12-f && f<=6){
                 cout << list[12-c];
                }

                else {

                    if(c>=f && f>6){
                        cout << list[12-c];
                    }

                    else {

                        if(c<=12-f && f>6){
                            cout << list[c];
                        }

                        else {
                            cout << " ";
                        }
                    }

                 }
            }





        }
        cout << endl;
        c=0;

    }

    return 0;
}
