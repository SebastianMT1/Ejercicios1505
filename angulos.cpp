#include<iostream>

using namespace std;

main(){

    float angulo1 = 0, angulo2 = 0, angulo3 = 0;

    cout<<"Ingrese el primer angulo de un triangulo: ";
    cin>>angulo1;

    cout<<"Ingrese el segundo angulo de un triangulo: ";
    cin>>angulo2;

    angulo3 = 180 - (angulo1 + angulo2);

    if (angulo3 < 0)
    {
        cout<<"La figura no es un triangulo\n";
    }

    else{

    cout<<"El tercer angulo del triangulo es: "<<angulo3;
    }

    return 0;
}