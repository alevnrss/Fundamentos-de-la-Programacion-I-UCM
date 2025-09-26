#include <iostream>
using namespace std;

// Función conversionSegundos()
// Ejercicio 4: Escribe un programa que lea el teclado un tiempo en segundos y que muestre por pantalla -> horas, minutos y segundos.
void conversionSegundos()
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
}

// Función productoOperandos()
// Ejercicio 4.1: Desarrolla un programa que multiplique 2 numeros ENTEROS introducidos por consola y que muestre su productor por pantalla.
void productoOperandos() 
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
}

// Funcion notaFinal()
// Ejercicio 5: Desarrolla un programa que calcule la nota final de una asignatura de la convocatoria ordinaria a partir de:
// nota del examen (60%), nota del proyecto (20%), actividades adicionales (20%), cada una con sus respectivos porcentajes.
// El programa pedira al usuario sus notas, luego cualquier nota inferior a 5 no se tomara en cuenta.
void notaFinal() 
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

   
}

// Funcion expresionMatematica()
// Ejercicio 6: Escribe la siguiente expresión en C++ usando los parentesis que sean estrictamente necesarios.
// 4/3(r + 34) - 9(a + bc) + 3+d(2+a)/a+bd
void expresionMatematica() {

    cout << "EJERCICIO 6. FORMULA MATEMATICA. " << endl;
    
    double a = 0, b = 0, c = 0, d = 0, r = 0;
    double expresionMatematica = 0 ;
    
    cout << "Ingrese un valor para a: ";
    cin >> a;
    cout << "Ingrese un valor para b: ";
    cin >> b;
    cout << "Ingrese un valor para c: ";
    cin >> c;
    cout << "Ingrese un valor para d: ";
    cin >> d;
    cout << "Ingrese un valor para r: ";
    cin >> r;

    double primeraFormula = (4.0 / (3.0 * (r + 34)));
    double segundaFormula = (9.0 * (a + (b * c)));
    double terceraFormula = (3.0 + (d * (2 + a)) / (a + (b * d)));
    
    if ( 3.0*(r+34) != 0 || (a + (b * d))!=0)
    {
        expresionMatematica = primeraFormula - segundaFormula + terceraFormula;
        cout << "El resultado de la formula matemática es: " << expresionMatematica ;
    }
    else
    {
        cout << "El denominador es 0 por lo tanto no se puede realizar la formula ya que un numero dividido entre 0 no es posible";
    }

}


int main() {
    // conversionSegundos();
    // productoOperandos();
    // notaFinal();
    expresionMatematica();
    return 0;
}
