#include <iostream>
#include <string>

using namespace std;

int main()
{
    int *punt, i;
    int x[5]={1,2,3,4,5};
   
    
    cout << "En x tenemos un array de cinco posiciones cuyo primer elemento esta en: " << x << endl;
    cout << "Notese que x es en si mismo un puntero, una direccion de memoria (no un valor): "<< endl;
    cout << "x   : "<< x << endl;
    cout << "x[0]: "<<&x[0] << endl;
    cout << "x[1]: "<<&x[1] << endl;
    cout << "x[2]: "<<&x[2] << endl;
    cout << "x[3]: "<<&x[3] << endl;
    cout << "x[4]: "<<&x[4] << endl <<endl;


    punt=x+4;
    cout << "Con punt=x+4 apuntamos punt a 4 posiciones de memoria de x a x[4]" << punt << endl;
    cout << "Recordemos que x apunta a la primera posicion del array x[0])" << endl << endl;
    
    *(punt-2)=9;
    cout << "Con *(punt-2)=9 guardamos un 9 dos direcciones a la izquierda de punt" << punt-2 << endl;
    cout << "Que seria x[2] OJO que el puntero no se ha movido" << endl<<endl;
    
    punt--;
    cout << "Ahora si movemos una posicion atras el puntero con punt--" << punt <<endl << endl;

    *(punt)=7;
    cout << "Guardamos 7 en x[3] " << punt <<endl << endl;

    punt[1]=11;
    cout << "Guardamos 11 una posicion a la derecha de punt, o sea x[4] " << punt[1] <<endl << endl;
    for(i=0;i<5;i++){
        cout << *(x+i)<< endl;
    }
    cout << "Vemos que se ha cambiado las posiciones 3,4 y 5 del array (x[2], x[3] y x[4] del array)" << endl;

    return 0;
}
