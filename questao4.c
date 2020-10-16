#include <stdio.h>

/*
aluno: Paulo Henrique Lerbach Rodrigues
Prova Parcial 1 de LTP1

Q4 - Leia um determinado valor N, onde N e inteiro.
 Esse numero N deve ser a entrada do programa.
 a) Imprima a sequencia abaixo ate o elemento da posicao N

 1/1! + 1/1! + 2/2! + 3/3! + 5/5! + 8/8! + 13/13! + 21/21!...

 b) Imprima a soma da sequencia acima.

 Observacao: o fatorial de n!=n*(n-1)*(n-2)*..*1

*/
int main() {

    int antepenultimo = 1, penultimo = 1, ultimo, i, n;
    double soma = 0;

    printf("Quantos números da sequência de Fibonacci devem ser calculados? ");
    scanf("%d", &n);

    while (i < n) {
        printf("%d/%d!", antepenultimo, antepenultimo);
        unsigned long long fatorial = 1;
        int contadorFatorial = antepenultimo;
        for (; contadorFatorial > 0; fatorial *= contadorFatorial--);

        soma = soma + antepenultimo / (double) fatorial;

        ultimo = antepenultimo + penultimo;
        antepenultimo = penultimo;
        penultimo = ultimo;

        ++i;

        if (i < n) {
            printf(" + ");
        }
    }

    printf(" = %f", soma);

    return 1;
}

