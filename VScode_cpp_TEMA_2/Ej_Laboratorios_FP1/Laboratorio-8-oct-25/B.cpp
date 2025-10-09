#include <iostream>
using namespace std;

/**
 * Escribe un programa en C++ que pida al usuario tres valores enteros y los muestre de menor a 
 * mayor separados por comas. Por ejemplo, si el usuario introduce 10, 4 y 6, el resultado será: 4, 6, 10.
 * Utiliza el intercambio de variables (pág 153, Tema 2 – PDF).
 */

int main(){
    int num1 = 0, num2 = 0, num3 = 0;
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;
    cout << "Introduce el tercer numero: ";
    cin >> num3;

    if(num1 < num2 && num1 < num3){
        if(num2 < num3){
            cout << num1 << "," << num2 << "," << num3;
        }
        else{
            cout << num1 << "," << num3 << "," << num2;
        }
    }else if(num1 > num2 && num1 > num3){
        if(num2 < num3){
            cout << num3 << "," << num2 << "," << num1;
        }
        else{
            cout << num2 << "," << num3 << "," << num1;
        }
    }else if(num3 > num1 && num3 > num2){
        if(num1 < num2){
            cout << num1 << "," << num2 << "," << num3;
        }
        else{
            cout << num2 << "," << num1 << "," << num3;
        }
    }
    
    return 0;
}
