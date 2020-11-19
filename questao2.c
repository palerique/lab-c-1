#include <stdio.h>

/*
aluno: Paulo Henrique Lerbach Rodrigues
Prova Parcial 2 de LTP1

Q2 - Escreva um programa que leia um numero inteiro positivo `n` e em seguida imprima `n` linhas do chamado triangulo de pascal.
*/

int main() {
    int n;

    printf("Quantas linhas do triangulo de Pascal devem ser calculadas? ");
    scanf("%d", &n);

    for (int linha = 1; linha <= n; linha++) {
        int coluna = 1;

        for (int indiceDaColuna = 1; indiceDaColuna <= linha; indiceDaColuna++) {
            printf("%d ", coluna);
            coluna = coluna * (linha - indiceDaColuna) / indiceDaColuna;
        }

        printf("\n");
    }

    return 1;
}
