#include<iostream>

using namespace std;

int main(){
    
    string nombre;
    float C1 = 0;
    float C2 = 0;
    float P1 = 0;
    float P2 = 0;
    float labo = 0;
    float proyecto = 0;
    float promedio = 0;

    //pedir nota corto 1
    cout<<"Ingrese su nombre\n";
    cin>>nombre;
    cout<<"\n";

    //pedir nota corto 1
    cout<<"Ingrese la calificacion del Corto 1: ";
    cin>>C1;

    //pedir nota corto 2
    cout<<"Ingrese la calificacion del Corto 2: ";
    cin>>C2;

    //pedir nota Parcial 1
    cout<<"Ingrese la calificacion del primer parcial: ";
    cin>>P1;

    //pedir nota Parcial 2
    cout<<"Ingrese la calificacion del segundo parcial: ";
    cin>>P2;

    //pedir nota laboratorio
    cout<<"Ingrese la calificacion del laboratorio: ";
    cin>>labo;

    //pedir nota proyecto
    cout<<"Ingrese la calificacion del proyecto: ";
    cin>>proyecto;

    //Calcular promedio
    promedio = ((C1)+(C2)+(P1)+(P2)+(labo)+(proyecto))/6;

    if (promedio > 10){
        cout<<"Los valores de las calificaciones son invalidos";
    }

    else if (promedio < 0){
        cout<<"Los valores de las calificaciones son invalidos";
    }

    else{
        if (promedio >= 6){
            cout<< nombre<<" ha aprobado la materia con un promedio de "<<promedio;
        }
        else if (promedio < 6){
            cout<< nombre<<" ha reprobado la materia con un promedio de "<<promedio;
        }
    }

    return 0; 
}