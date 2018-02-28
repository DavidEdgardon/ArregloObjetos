#include <iostream>
#include "Objetos.h"
#include "String.h"
#include "Integer.h"
#include "Char.h"

using namespace std;

int main() {

        Objetos *array[5];
        int cont=0;
        int in=0,c=0,s=0, opc=0;
        while(cont <5){
            cout<<"Ingrese el tipo que desea agregar "<<endl;
            cout<<"1. Integer "<<endl;
            cout<<"2. String "<<endl;
            cout<<"3. Char "<<endl;
            cin>>opc;

            switch (opc){
                case 1:
                    int valor_i;
                    cout<<"Ingrese el valor: ";
                    cin>>valor_i;
                    array[cont]=new Integer(valor_i);
                    cont++;
                    in++;
                    break;
                case 2:
                    string valor_s;
                    cout<<"Ingrese el valor: ";
                    cin>>valor_s;
                    array[cont]=new String(valor_s);
                    cont++;
                    s++;
                    break;
                case 3:
                    char valor_c;
                    cout<<"Ingrese el valor: ";
                    cin>>valor_c;
                    array[cont]=new Char(valor_c);
                    cont++;
                    c++;
                    break;
            }
        }
        for(int i=0;i<5;i++){
            array[i]->Imprimir();
        }
        cout<<endl;
        cout<<"Integers: "<<in<<endl;
        cout<<"Strings: "<<s<<endl;
        cout<<"Chars: "<<c<<endl;
    }

