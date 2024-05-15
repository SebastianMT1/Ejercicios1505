#include<iostream>
#include<math.h>

using namespace std;

int main(){

    float a = 0, b = 0, c = 0, x1 = 0, x2 = 0, raiz= 0;

    cout<<"Ingrese el valor de a: ";
    cin>>a;

    cout<<"Ingrese el valor de b: ";
    cin>>b;

    cout<<"Ingrese el valor de c: ";
    cin>>c;

    raiz = sqrt(b*b-(4*a*c));

    cout<<raiz;
    
    return 0;
}