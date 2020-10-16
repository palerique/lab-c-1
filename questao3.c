#include <stdio.h>

/*
 *aluno: Paulo Henrique Lerbach Rodrigues
 *Prova Parcial 1 de LTP1
 *Q3 - Leia um numero n e depois imprima um tringulo com asteriscos de altura e lados n e base 2*n-1.
 *Por exemplo, sa saida para n = 6 seria:
 *      *
 *     ***
 *    *****
 *   *******
 *  *********
 * ***********
 *Observacoes: O triangulo devera ter o asterisco do topo centralizado como no exemplo. A base e sempre maior.
 * Voce pode resolver esta questao adicionando espaco em branco ao lado esquero do asterisco
 */
int main() {
    int n, estrelas;

    printf("Quantas linhas a pirâmide deve ter? ");
    scanf("%d", &n);

    printf("\n");
    estrelas = 1;
    for (int linha = 1; linha <= n; ++linha) {

        for (int emBranco = 0; emBranco < n - linha; ++emBranco) {
            printf(" ");
        }

        for (int asterisco = 1; asterisco <= estrelas; ++asterisco) {
            printf("*");
        }

        printf("\n");
        estrelas = estrelas + 2;
    }

    return 1;
}
