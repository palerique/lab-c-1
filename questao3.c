#include <stdio.h>
#include <string.h>

/*
 *aluno: Paulo Henrique Lerbach Rodrigues
 *Prova Parcial 2 de LTP1
 *
 *Q3 - uma frase e dita ser palindrome se ela e a mesma se lida da esquerda par a direita
 * e a mesma que lida da direita para a esquerda.
 * Faca um programa que le uma cadeia de caracteres e diz se a cadeia e palindrome ou nao.
 */
int main() {

    char str[100];
    printf("Qual palavra deseja verificar se e palindrome?\n");
    scanf("%[^\n]s", &str);

    int esq = 0;
    int dir = strlen(str) - 1;

    while (dir > esq) {
        if (str[esq++] != str[dir--]) {
            printf("%s nao e um palindrome", str);
            return 1;
        }
    }
    printf("%s e um palindrome", str);

    return 1;
}
