#include "calculadora.c"
#include "calculadora.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int resultado;

    while (true) {

        int n1 = i_usuario();
        char op = c_usuario();
        int n2 = i_usuario();

        switch (op) {
        case '+':
            resultado = somar(n1, n2);
            break;
        case '-':
            resultado = subtrair(n1, n2);
            break;
        case '*':
            resultado = multiplicar(n1, n2);
            break;
        case '/':
            if (n2 != 0) {
                resultado = dividir(n1, n2);
            } else {
                puts("Impossivel dividir por 0");
                continue;
            }
            break;

        default:
            puts("Operador invalido");
            continue;
        }

        printf("Resultado : %d", resultado);
    }
    return 0;
}
