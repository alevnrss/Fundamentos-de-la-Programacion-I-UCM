#include <iostream>
using namespace std;

// Escribe un programa que lea el teclado un tiempo en segundos y que muestre por pantalla -> horas, minutos y segundos.

int main()
{
    int segundosIntroducidos = 0, horas = 0, minutos = 0 , segundos = 0;
    
    cout << "Ingrese la cantidad de segundos que desea convertir: ";
    cin >> segundosIntroducidos;

    horas = (segundosIntroducidos / 3600);
    minutos = (segundosIntroducidos % 3600) / 60;
    segundos = (segundosIntroducidos % 3600) % 60;
    
    cout << "El valor de -> " << segundosIntroducidos << " segundos iniciales son: " << endl << horas << " horas " << minutos << " minutos " << segundos << " segundos.";
    
    return 0;
}
