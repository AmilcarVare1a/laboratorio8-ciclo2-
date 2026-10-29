#include <iostream>
using namespace std;


int mayor(int a, int b, int c) {
    int mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;
    
    
    return mayor;
}




int main() { 
    
    int n1, n2, n3;
    cout << "Ingresa tres numeros enteros: ";
    cin >> n1 >> n2 >> n3;
    cout << "El mayor numero entero mayor  es: " << mayor(n1, n2, n3) << endl;
    
    
    
    
    return 0;
}