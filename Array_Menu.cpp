#include <iostream>
#include <stdlib.h>
#include <exception>
#include <sstream>
#include "static_array.h"

using namespace std;

int main(int argc, char* argv[]){
    int opcion, n;


    cout<<"Bienvenido a el menu de arreglos estaticos"<<endl;
    cout<<"Para comenzar ingrese la cantidad maxima de numeros de su arreglo: "; cin>>n;

    static_array<int> arr(n);
    char element;

    cout<<"Desplegando menu"<<endl;
    system("pause");

    do {
        system("cls");
        cout<<"\tMenu\n";
        cout<<"1. Agregar un nuevo elemento\n";
        cout<<"2. Numero de espacios vacios\n";
        cout<<"3. Visualizar el arreglo\n";
        cout<<"4. Vaciar arreglo\n";
        cout<<"5. Salir\n";

        cout<<"\nDigite la opcion deseada: "; cin>> opcion;

        switch (opcion)
        {
        case 1:
            cout<<"Digite el elemento a agregar: "; cin>> element;
            arr.add(element);
            break;
        case 2:
            cout<<"Numero de espacios disponibles: "<< arr.emptySpaces()<<endl;    
            break;
        case 3:
            cout<< arr.toString();
            break;
        case 4:
            arr.reset();
            cout<<"Arreglo vaciado"<<endl;
            break;

        case 5:
            break;
        
        default:
            cout<<"Opcion no valida"<<endl;
            break;
        }
        system("pause");

    } while(opcion != 5);
    system("cls");
    

    cout<<"Fin del programa"<<endl<<endl;
    system("pause");
    return 0;
}