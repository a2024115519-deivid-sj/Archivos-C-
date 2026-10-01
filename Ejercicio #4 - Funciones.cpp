/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int potencia(int base, int exponente);

int main()
{
    int base,exponente;
    
    cout << "Ingrese la base: ";
    cin >> base;
    
    cout << "Ingrese el exponente: ";
    cin >> exponente;
    
    if (exponente<0){
        cout << "Error: Solo positivos";
        return 0;
    }
    double resultado = potencia(base,exponente);
    cout << base << " elevado a " << exponente << " es: " << resultado;
    return 0;
}

int potencia(int base, int exponente){
    int resultado = 1;
    
    for (int i=0; i<exponente; i++){
        resultado=resultado*base;
    }   
    return resultado;
} //Declaración/Definición