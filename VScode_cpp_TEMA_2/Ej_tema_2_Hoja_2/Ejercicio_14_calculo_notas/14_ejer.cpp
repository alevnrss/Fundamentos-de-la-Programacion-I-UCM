#include <iostream>
using namespace std;
/**
 * Crea un programa que calcule la calificación de una asignatura, pero teniendo ahora en cuenta las siguientes restricciones:
 * Que la nota del proyecto sea igual o superior a 5
 * Que al menos se haya tenido un 5 en el examen final.
 * También hay que considerar los porcentajes del peso de cada actividad: examen 60%, práctica 20% y actividades adicionales 20%.
 */

// OBSERVACIÓN: En este programa desarrollare un switch y el uso de funciones para un programa de notas.

#include <iostream>
using namespace std;

// Prototipo
double calcularNotaFinalAsignatura(double notaProyecto, double notaExamenFinal, double notaActividadesAdicionales);

int main() {
    int opcionUser = 0;
    cout << "EJERCICIO 14. CALCULO DE NOTAS" << endl
         << "Seleccione una opcion: " << endl;
    cout << "1. Calcular nota final" << endl
         << "2. Salir" << endl;
    cin >> opcionUser;

    switch (opcionUser) {
        case 1: {
            double notaProyecto = 0, notaExamenFinal = 0, notaActividadesAdicionales = 0, notaFinal = 0;
            cout << "Usted ha seleccionado la opcion 1: Calcular nota final de la asignatura" << endl;
            cout << "Por favor, introduzca la nota del proyecto: ";
            cin >> notaProyecto;
            cout << "Por favor, introduzca la nota del examen final: ";
            cin >> notaExamenFinal;
            cout << "Por favor, introduzca la nota de las actividades adicionales: ";
            cin >> notaActividadesAdicionales;

            notaFinal = calcularNotaFinalAsignatura(notaProyecto, notaExamenFinal, notaActividadesAdicionales);
            cout << "La nota final es: " << notaFinal << endl;
            break;
        }
        case 2: {
            cout << "Usted ha seleccionado la opcion 2: Salir" << endl;
            cout << "Gracias por usar el programa" << endl;
            break;
        }
        default: {
            cout << "Opcion no valida" << endl;
            break;
        }
    }

    return 0;
}

double calcularNotaFinalAsignatura(double notaProyecto, double notaExamenFinal, double notaActividadesAdicionales) {
    if (notaProyecto >= 5 && notaExamenFinal >= 5) {
        return (notaProyecto * 0.2) + (notaExamenFinal * 0.6) + (notaActividadesAdicionales * 0.2);
    } else {
        cout << "No se puede calcular la nota final ya que:" << endl
             << "Nota del proyecto: " << notaProyecto << endl
             << "Nota del examen final: " << notaExamenFinal << endl;
        return 0;
    }
}
