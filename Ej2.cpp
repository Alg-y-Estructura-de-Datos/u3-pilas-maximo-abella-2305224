#include <iostream>
#include "Pila/Pila.h"
using namespace std;

void remplazar(Pila<int>& p,int a,int b){
    Pila<int> p2;
    int actual;
    while (!p.esVacia())
    {
        actual = p.pop();
        if (actual == a)
        {
            p2.push(b);
        } else
        {
            p2.push(actual);
        }     
    }
    while (!p2.esVacia())
    {
        p.push(p2.pop());
    }
    
};



int main() {

    cout << "Ejercicio N° 2" << endl;
    Pila<int> p;
    p.push(9);p.push(8);p.push(0);p.push(7);p.push(1);p.push(2);p.push(3);p.push(3);p.push(8);
    mostrarPila(p);
    remplazar(p,3,1);
    std::cout<<"Remplazado"<<std::endl;
    mostrarPila(p);
    return 0;
}
