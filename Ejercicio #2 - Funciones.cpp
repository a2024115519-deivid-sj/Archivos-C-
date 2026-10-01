/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int minimo(int x, int y); //Prototipo
    

int main()
{
    int numero1, numero2;
    
    cout << "Ingrese un número: ";
    cin >> numero1;
    
    cout << "Ingrese otro número: ";
    cin >> numero2;
    
    cout << "El menor es: " << minimo(numero1, numero2);

    return 0;
}

int minimo(int x, int y){
    int mn;
    
    if (x<y){
        mn = x;
    }   else {
        mn = y;
    }
    
    return mn;
} //Declaración/Definición