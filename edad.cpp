#include<iostream>

using namespace std;

int main(){

    int edad = 0;

    cout<<"Inserte su edad: ";
    cin>>edad;

    if (edad >= 18){

        cout<<"usted es mayor de edad";
    }
    
    else{

        cout<<"usted es menor de edad";
    }
    
    return 0;
}