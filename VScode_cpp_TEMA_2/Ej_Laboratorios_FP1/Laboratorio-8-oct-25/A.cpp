#include <iostream>
using namespace std;
/**
 * Escribe un programa en C++ que permita introducir dos números enteros y determine cuál de ellos es el 
 * mayor valor o si son iguales. 
 */ 

// Prototipo
int comparacionNumeros(int num1, int num2);
// main
int main(){
    int num1, num2;
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;
    int mayor = comparacionNumeros(num1, num2);
    if(mayor == 0){
        cout << "Los numeros son iguales" << endl;
    }else{
        cout << "El numero mayor es: " << mayor << endl;
    }
    return 0;
}

/// @brief Funcion que compara dos numeros enteros
/// @param num1 
/// @param num2 
/// @return int 
int comparacionNumeros(int num1, int num2){
    if(num1 > num2){
        return num1;
    }else if(num2 > num1){
        return num2;
    }else{
        return 0;
    }
}