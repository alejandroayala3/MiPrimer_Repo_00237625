#include <iostream>

using namespace std;

int main()
{
    // Declaraciones de variable
    int numero;

    // Pedir la digitación del número
    cout << "Por favor digite el numero: " << endl;
    cin >> numero;

    // Dependiendo de el numero mostrar el mensaje apropiado
    if (numero <=-1) {
        cout << "El numero " << numero << " es negativo." << endl;
    } else if (numero > 0) {
        cout << "El numero " << numero << " es positivo." << endl;
    } else {
        cout << "El numero " << numero << " es cero." << endl;
    }

    return 0;
}