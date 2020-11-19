#include <stdio.h>

/*
 *aluno: Paulo Henrique Lerbach Rodrigues
 *Prova Parcial 2 de LTP1
 *
 *Q4 - O imperador romano Julio Cesar usava um metodo de criptografia para mandar mensagens criptografadas para seus generais.
 * Este metodo considerava a ordem dos caracteres no alfabeto e trocava cada letra pela k-esima letra seguinte a letra.
 * Por exemplo, se k = 3, entao a ocorrencia da letra `A` era trocada pela letra `D`. A letra `B` era trocada pela letra `E`
 * e assim por diante.
 * Esta substituicao era feita de maneira ciclica, que, neste caso a letra `Z` era trocada pela letra `C`.
 * Faca um programa que le um inteiro K e uma cadeia de caracteres e imprima a mensagem correspondente criptografada pela cifra de Cesar com parametro K.
 * Leia o valor de k e um vetor de no maximo 100 caracteres e aplique a cifra de Cesar neste valor.
 */
int main() {

    char mensagem[100], caractere;
    int i, chaveK;

    printf("Digite a mensagem que deve ser encriptada:\n");
    fgets(mensagem, (sizeof mensagem / sizeof mensagem[0]), stdin);
    printf("Digite a chave: ");
    scanf("%d", &chaveK);

    for (i = 0; mensagem[i] != '\0'; ++i) {
        caractere = mensagem[i];

        if (caractere >= 'a' && caractere <= 'z') {
            caractere = caractere + chaveK;

            if (caractere > 'z') {
                caractere = caractere - 'z' + 'a' - 1;
            }

            mensagem[i] = caractere;
        } else if (caractere >= 'A' && caractere <= 'Z') {
            caractere = caractere + chaveK;

            if (caractere > 'Z') {
                caractere = caractere - 'Z' + 'A' - 1;
            }

            mensagem[i] = caractere;
        }
    }

    printf("Mensagem Criptografada:\n%s", mensagem);

    return 1;

}