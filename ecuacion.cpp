#include<iostream>
#include<cmath>

using namespace std;

int main(){

    float a = 0, b = 0, c = 0, x1 = 0, x2 = 0, raiz= 0;

    cout<<"Ingrese el valor de a: ";
    cin>>a;

    cout<<"Ingrese el valor de b: ";
    cin>>b;

    cout<<"Ingrese el valor de c: ";
    cin>>c;

    if (a == 0){
        cout<<"La respuesta a la ecuacion no es un numero real";
    }

    else if (b == 0){
        cout<<"La respuesta a la ecuacion no es un numero real";
    }

    else{
    raiz = sqrt((pow(b,2)) - (4*a*c));

    x1 = ((b*-1) + raiz)/(2*a);

    x2 = ((b*-1) - raiz)/(2*a);
    
    cout<<"Las respuestas a la ecuacion son "<<x1<<" y "<<x2;
    }
    
    return 0;
}