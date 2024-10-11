#include "calculadora.h"
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int somar(int numero1, int numero2) { return numero1 + numero2; }
int subtrair(int numero1, int numero2) { return numero1 - numero2; }
int dividir(int numero1, int numero2) { return numero1 / numero2; }
int multiplicar(int numero1, int numero2) { return numero1 * numero2; }

int i_usuario() {

    int entrada_usuario;

    while (true) {
        puts("Numero : ");
        if (scanf(" %d", &entrada_usuario) == 1) {
            return entrada_usuario;
        } else {
            printf("Digite um numero valido!");
        }
    }
}

char c_usuario() {

    char entrada_usuario[2];

    while (true) {
        puts("Operador : ");
        if (scanf(" %1s", entrada_usuario) == 1) {
            char op = entrada_usuario[0];
            if (op == '+' || op == '-' || op == '*' || op == '/') {
                return op;
            } else {

                printf("Digite um numero valido!");
            }
        }
    }
}
