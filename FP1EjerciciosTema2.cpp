#include <iostream>
using namespace std;

// Función conversionSegundos()
// Ejercicio 4: Escribe un programa que lea el teclado un tiempo en segundos y que muestre por pantalla -> horas, minutos y segundos.
int conversionSegundos()
{
    cout << "EJERCICIO 4 . CONVERSION SEGUNDOS A HORAS, MINUTOS, SEGUNDOS. " << endl;
    
    int segundosIntroducidos = 0, horas = 0, minutos = 0 , segundos = 0;
    cout << "Ingrese la cantidad de segundos que desea convertir: ";
    cin >> segundosIntroducidos;

    horas = (segundosIntroducidos / 3600);
    minutos = (segundosIntroducidos % 3600) / 60;
    segundos = (segundosIntroducidos % 3600) % 60;
    
    cout << "El valor de -> " << segundosIntroducidos << " segundos iniciales son: " << endl << horas << " horas " << minutos << " minutos " << segundos << " segundos." << endl;
    cout << "" << endl;
    return 0;
}

// Función productoOperandos()
// Ejercicio 4.1: Desarrolla un programa que multiplique 2 numeros ENTEROS introducidos por consola y que muestre su productor por pantalla.
int productoOperandos() {
    cout << "EJERCICIO 4.1 . PRODUCTO DE OPERANDOS. " << endl;
    int x = 0, y = 0, productoOperandos = 0;

    cout << "Introduce el primer operando x: ";
    cin >> x;
    cout << "Introduce el segundo operando y: ";
    cin >> y;

    productoOperandos = x * y;

    cout << "El producto de los dos numeros enteros introducidos son: " << x << " x " << y << " = " << productoOperandos << endl;
    cout << "" << endl;
    return 0;
}

int main() {
    conversionSegundos();
    productoOperandos();

    return 0;
}
