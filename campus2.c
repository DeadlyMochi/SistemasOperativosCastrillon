#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int enteros[3], aux = 0, i; 
    double dobles[2], r = 0.0; 


    if (argc != 6) {
        printf("Error: Se deben ingresar 5 argumentos.\n");
        return 1;
    }

    printf("Vamos a hacer promedio! Ingresa 3 valores enteros y 2 con decimales:\n");
    enteros[0] = (int) atoi(argv[1]);
    enteros[1] = (int) atoi(argv[2]);
    enteros[2] = (int) atoi(argv[3]);
    dobles[0] = (double) atof(argv[4]);
    dobles[1] = (double) atof(argv[5]);


    for (i = 0; i < 3; i++) {
        aux += enteros[i];
    }


    for (i = 0; i < 2; i++) {
        r += dobles[i];
    }


    r = (r + aux) / 5.0;

    // Print the result
    printf("Resultado de la operacion: %f\n", r);

    return 0;
}
