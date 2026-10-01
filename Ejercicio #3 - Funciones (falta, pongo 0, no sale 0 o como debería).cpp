/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int signo(double r);

int main()
{
    double r,valor;
    
    cout << "Ingresa un número real: ";
    cin >> r;
    
    valor = signo(r);
    cout << endl;
    cout << "El resultado es: " << valor;
    
    return 0;
}

int signo (double r){
    int valor;
    
    if (r>0){
        valor = 1;
    }
    
    if (r<0){
        valor = -1;
    }
    
    if (r = 0){
        valor = 0;
    }

    return valor;
} //Declaración/Definición