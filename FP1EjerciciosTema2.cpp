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
int productoOperandos() 
{
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

// Funcion notaFinal()
// Ejercicio 5: Desarrolla un programa que calcule la nota final de una asignatura de la convocatoria ordinaria a partir de:
// nota del examen (60%), nota del proyecto (20%), actividades adicionales (20%), cada una con sus respectivos porcentajes.
// El programa pedira al usuario sus notas, luego cualquier nota inferior a 5 no se tomara en cuenta.
int notaFinal() 
{
    cout << "EJERCICIO 5. CALCULADORA DE NOTA FINAL ORDINARIA. " << endl;

    const double PORCENTAJE_EXAMEN = 0.6, PORCENTAJE_PROYECTO = 0.2, PORCENTAJE_ACTIVIDADES = 0.2 ;
    int notaExamen = 0, notaProyecto = 0, notaActividadesAdicionales = 0, notaFinal = 0;
    
    cout << "Introduce la nota del EXAMEN: ";
    cin >> notaExamen ;
    cout << "Introduce la nota del PROYECTO: ";
    cin >> notaProyecto;
    cout << "Introduce la nota de ACTIVIDADES ADICIONALES: " ;
    cin >> notaActividadesAdicionales;

    if (notaExamen < 5) notaExamen = 0;
    if (notaProyecto < 5) notaProyecto = 0;
    if (notaActividadesAdicionales < 5) notaActividadesAdicionales = 0;

    notaFinal = (notaExamen * PORCENTAJE_EXAMEN) + (notaProyecto * PORCENTAJE_PROYECTO) + (notaActividadesAdicionales * PORCENTAJE_ACTIVIDADES);
   
    cout << "NOTAS ESTABLECIDAS POR COSOLA: " << endl 
        << "NOTA EXAMEN: " << notaExamen << endl
        << "NOTA PROYECTO: " << notaProyecto << endl
        << "NOTA ACTIVIDADES: " << notaActividadesAdicionales << endl
        << "por tanto, la NOTA FINAL es: " << notaFinal;
    cout << "" << endl;

    return 0;
}

int main() {
    conversionSegundos();
    productoOperandos();
    notaFinal();
    return 0;
}
