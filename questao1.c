#include <stdio.h>

static const int TAMANHO_DO_ARRAY = 10;

/*
aluno: Paulo Henrique Lerbach Rodrigues - RA 22051629
Prova Parcial 2 de LTP1

Q1 - Ler um vetor de 10 elementos.
 Crie um segundo vetor, com todos os elementos na ordem inversa, ou seja, o ultimo elemento passara a ser o primeiro, o penultimo sera o segundo e assim por diante.
 Imprima os dois vetores.
*/

int main() {

    char vetorA[TAMANHO_DO_ARRAY], vetorB[TAMANHO_DO_ARRAY];

    printf("Crie, a seguir, item a item um vetor.\n");
    for (int indice = 0; indice < TAMANHO_DO_ARRAY; indice++) {
        printf("Entre com o valor da posicao %d do vetor -> ", indice);
        scanf(" %c", &vetorA[indice]);
    }

    printf("[");
    for (int indice = 0; indice < TAMANHO_DO_ARRAY; indice++) {
        printf("%c", vetorA[indice]);

        if (TAMANHO_DO_ARRAY - indice > 1) {
            printf(", ");
        }
    }
    printf("]");

    for (int indiceA = TAMANHO_DO_ARRAY - 1, indiceB = 0; indiceA >= 0; indiceA--, indiceB++) {
        vetorB[indiceB] = vetorA[indiceA];
    }

    printf("\n[");
    for (int indice = 0; indice < TAMANHO_DO_ARRAY; indice++) {
        printf("%c", vetorB[indice]);

        if (TAMANHO_DO_ARRAY - indice > 1) {
            printf(", ");
        }
    }
    printf("]");

    return 1;
}
