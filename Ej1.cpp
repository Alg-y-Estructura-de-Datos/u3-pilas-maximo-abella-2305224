#include <iostream>
#include "Pila/Pila.h"
#include <string>

using namespace std;


int main() {

    cout << "Ejercicio N° 1" << endl;
    Pila<char> pila;
    std::cout<<"Ingrese una palabra"<<std::endl;
    std::string palabra;
    std::cin>>palabra;
    for (int i = 0; i < palabra.length(); i++)
    {
        pila.push(palabra[i]);
    }
    while (!pila.esVacia())
    {
        std::cout<<pila.pop();
    }
    
    
    return 0;
}
