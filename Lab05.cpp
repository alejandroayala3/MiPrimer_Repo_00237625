#include <iostream>
using namespace std;

int main()
{
    int numProceso;
    int num1, num2;
    //int suma, resta, multiplicacion, division;
    int resultado = 0;
    string nombreProceso;
    cout << endl << " Seleccione su procedimiento:" << endl;
    cout <<"1- Suma" << endl ;
    cout << "2- Resta" << endl;
    cout << "3- Multiplicacion" << endl;
    cout << "4- Division" << endl;
    cout << "Digite el numero del proceso que desea realizar" << endl;
    cin >> numProceso;

    switch(numProceso){
        case 1:
        nombreProceso = "Suma";
        cout << " Digite su primer valor " << endl;
        cin >> num1;
        cout << " Digite su segundo valor " << endl;
        cin >> num2;
        // Se realiza la suma
         resultado = num1 + num2;
        // El resultado de el proceso es
        cout << " El resultado es " << resultado;
        break;
        case 2:
        nombreProceso = "Resta";
        cout << " Digite su primer valor " << endl;
        cin >> num1;
        cout << " Digite su segundo valor " << endl;
        cin >> num2;
        // Se realiza la resta
         resultado = num1-num2;
        // El resultado de el proceso es
        cout << " El resultado es " << resultado;
        break;
        case 3:
        nombreProceso = "Multiplicacion";
        cout << " Digite su primer valor " << endl;
        cin >> num1;
        cout << " Digite su segundo valor " << endl;
        cin >> num2;
        // Se realiza la multiplicacion
         resultado = num1*num2;
        // El resultado de el proceso es
        cout << " El resultado es " << resultado;
        break;
        case 4:
        nombreProceso = "Division";
        cout << " Digite su primer valor " << endl;
        cin >> num1;
        cout << " Digite su segundo valor " << endl;
        cin >> num2;
        // Se realiza la suma
         resultado = num1/num2;
        // El resultado de el proceso es
        cout << " El resultado es " << resultado;
        break;
        default:
        nombreProceso = "Proceso no disponible";
        cout << nombreProceso << endl;
        return 0;
    }
        cout << " El proceso seleccionado es " << nombreProceso << endl;

    
    








    return 0;
}