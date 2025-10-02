#include <iostream>
using namespace std;

/**
 * Escribe un programa en C++ que pida al usuario tres valores enteros y les muestre de menor a mayor separados por comas.
 * Por ejemplo, si el usuario introduce 10,4,6, se debe mostrar: 4,6,10.
 */

int main()
{
    int num1 = 0, num2 = 0, num3 = 0;
    cout << "EJERCICIO 13. ORDENAR DE MENOR A MAYOR 3 NUMEROS" << endl
         << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
    // Se da el uso de else if para ordenar de menor a mayor.
    if (num1 < num2 && num1 < num3){
        if (num2 > num3){
            cout << num1 << "," << num3 << "," << num2;
        }
        else{
            cout << num1 << "," << num2 << "," << num3;
        }
    }else if (num1 > num2 && num1 > num3){
        if (num2 > num3){
            cout << num3 << "," << num2 << "," << num1;
        }
        else{
            cout << num2 << "," << num3 << "," << num1;
        }
    }else if(num3 > num1 && num3 > num2){
        if (num1 > num2){
            cout << num2 << "," << num1 << "," << num3;
        }
        else{
            cout << num1 << "," << num2 << "," << num3;
        }
    }
}
