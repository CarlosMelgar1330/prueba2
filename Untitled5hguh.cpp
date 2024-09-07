#include <iostream>

using namespace std;

int main() {
    int numero;
    int contador = 0;
    int suma = 0;

    cout << "Ingresa un número: ";
    cin >> numero;


    while (contador <= numero) {
        suma += contador;
        contador++;
    }

    cout << "La suma de los números desde 0 hasta " << numero << " es: " << suma << endl;

    return 0;
}
