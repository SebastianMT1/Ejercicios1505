#include<iostream>

using namespace std;

int main (){

    int angulo = 0;

    cout<<"Ingrese un angulo: ";
    cin>>angulo;

    if (angulo < 90){
        cout<<"El angulo es agudo";
    }

    else if (angulo == 90){
        cout<<"El angulo es recto";
    }

    else{
        cout<<"El angulo es obtuso";
    }
    

    return 0;
}

