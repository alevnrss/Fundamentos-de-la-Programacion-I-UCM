# FUNDAMENTOS DE LA PROGRAMACION - 1er CUATRIMESTRE

## BUCLES FOR, WHILE, DO...WHILE
### Bucle FOR()

Este bucle se realiza siempre y cuando sepamos cuantas veces queremos repetir algo.
SINTAXIS BUCLE FOR ->  for(inicialización; condición; actualizacion){ //codigo que se repite }
EJEMPLO:
for(int i = 0; i < 5 ; i++){
    cout << i ;
}

Este ejemplo imprimira los valores de 0 a 4. Inicializamos una variable que sera la variable que recogera los datos del codigo que se repite,
en este caso hemos dado un codigo que imprima los datos de i, inicializamos esa variable en 0, luego la condicion es que i acabara de repetirse siempre y cuando i sea menor que 5. Finalmente hemos dicho que se actualizara esta varible por cada iteracion uno mas. Le sumamos 1.

### Bucle WHILE()
Este bucle se realiza siempre y cuando no sepamos cuantas veces queremos repetir algo. Sin embargo, si sabemos cual será la condición de salida.
SINTAXIS BUCLE WHILE -> while(Condicion){ //Codigo que se repite mientras se cumpla la condicion del while }
EJEMPLO:
int i = 0;
while(i < 5){
    cout << i;
    i++; // Aqui finalmente le sumamos uno para que pueda dejar de ser un bucle infinito.
}

### Bucle DO WHILE()
Este bucle es igual que el while. Sin embargo, se ejecuta al menos una vez.
SINTAXIS BUCLE DO...WHILE() -> DO{ //codigo que se va a repetir }WHILE(Condicion)
EJEMPLO:
int i = 0;
do {
    cout << "i vale: " << i << endl;
    i++;
} while (i < 5);



