/**
 * Escribe un programa que lea caracteres del teclado hasta que el usuario introduzca un *. Los caracteres
 * se solicitan e introducen uno a uno, cada uno en
 * una línea (seguidos de Intro). 
 * El programa debe contar el número de caracteres leídos (excluyendo
 * el * y el espacio en blanco) y mostrar este número 
 * en pantalla antes de finalizar.
 */
#include <iostream>
using namespace std;

int main() {
    char caracter;
    int contador = 0;
    cout << "Introduzca un caracter: " << endl;
    // Si el caracter introducido es un * se sale del bucle, en este caso el caracter inicial es nulo.
    while (caracter != '*') {
        // Deja escribir el caracter
        cin >> caracter;
        // Si el caracter introducido no es un espacio se aumenta el contador, sino no se aumenta y se vuelve a repetir el bucle
        if (caracter != ' ') {
            contador++;
        }
    }
    // El contador debe ser restado por 1 ya que no contaremos el asterisco
    cout << "El numero de caracteres es: " << contador - 1 << endl;
    return 0;
}