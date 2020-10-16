#include <stdio.h>

/*
aluno: Paulo Henrique Lerbach Rodrigues
Prova Parcial 1 de LTP1
Q2 - Faça um programa que receba 4 números e mostre-os em ordem decrescente.
*/

int main() {
    int x, y, z, w;

    printf("Entre com o valor de x ");
    scanf("%d", &x);
    printf("Entre com o valor de y ");
    scanf("%d", &y);
    printf("Entre com o valor de z ");
    scanf("%d", &z);
    printf("Entre com o valor de w ");
    scanf("%d", &w);

    if (x < y) {
        x = x - y;
        y = x + y;
        x = y - x;
    };

    if (z < w) {
        z = z - w;
        w = z + w;
        z = w - z;
    };

    if (x < z) {
        x = x - z;
        z = x + z;
        x = z - x;
    };

    if (y < w) {
        y = y - w;
        w = y + w;
        y = w - y;
    };

    if (y < z) {
        y = y - z;
        z = y + z;
        y = z - y;
    };

    printf("\nA ordem decrescente dos números é: %d %d %d %d", x, y, z, w);

    return 1;
}
