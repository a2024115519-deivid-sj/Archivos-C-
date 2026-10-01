/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

float cubo(float r); //Prototipo


int main()
{
    float numero;
    
    cout << "Ingrese un número: ";
    cin >> numero;
    
    cout << "El resultado del cubo de " << numero << " es: " << cubo(numero);

    return 0;
}

float cubo(float r){
    return r*r*r ;
} //Declaración/Definición