#include<iostream>

using namespace std;

int main(){

    int sector = 0;
    int entradas = 0;
    int total = 0;

    cout<<"Ingrese el sector del estadio en el que le gustaria estar:\n";
    cout<<"Sol general (1)\n";
    cout<<"Sol preferente (2)\n";
    cout<<"Sombra (3)\n";
    cout<<"Tribuna  (4)\n";
    cout<<"Platea (5)\n\n";
    cin>>sector;

    cout<<"Ingrese el numero de entradas: ";
    cin>>entradas;
    cout<<"\n";

    switch (sector){
        
        case 1:
        total = entradas * 3;
        cout<<"El total a pagar de las entradas es de "<<total<<"$";
        break;

        case 2:
        total = entradas * 5;
        cout<<"El total a pagar de las entradas es de "<<total<<"$";
        break;

        case 3:
        total = entradas * 8;
        cout<<"El total a pagar de las entradas es de "<<total<<"$";
        break;

        case 4:
        total = entradas * 15;
        cout<<"El total a pagar de las entradas es de "<<total<<"$";
        break;

        case 5:
        total = entradas * 20;
        cout<<"El total a pagar de las entradas es de "<<total<<"$";
        break;

        default:
        cout<<"Numero de sector inexistente";
    
        break;
    }

    return 0;
}