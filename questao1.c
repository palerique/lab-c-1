#include <stdio.h>

/*
aluno: Paulo Henrique Lerbach Rodrigues
Prova Parcial 1 de LTP1
Q1 - Leia um numero N.
 Elabore um programa que retorne os n primeiros numeros da sequencia de Fibonacci. 0 1 1 2 3 5 8 13 21 34 55 …
*/

int main() {

    int antepenultimo = 0, penultimo = 1, ultimo, i, n;

    printf("Quantos números da sequência de Fibonacci devem ser calculados? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d ", antepenultimo);
        ultimo = antepenultimo + penultimo;
        antepenultimo = penultimo;
        penultimo = ultimo;
    }

    return 1;
}
