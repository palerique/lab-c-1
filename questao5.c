#include <stdio.h>

/*
aluno: Paulo Henrique Lerbach Rodrigues
Prova Parcial 2 de LTP1

Q5 - Faca um programa que le um inteiro K e uma cadeia de caracteres criptografadas pela cifra de Cesar
 com parametro K e imprime a mensagem decriptogrfada

 ex:
 Digite a mensagem que deve ser encriptada:
O rato roeu a roupa do rei de Roma
Digite a chave: 3
Mensagem Criptografada:
R udwr urhx d urxsd gr uhl gh Urpd
*/
int main() {

    char mensagem[100], caractere;
    int i, chaveK;

    printf("Qual mensagem deve ser decriptografada?\n");
    fgets(mensagem, (sizeof mensagem / sizeof mensagem[0]), stdin);
    printf("Chave que deve ser utilizada? ");
    scanf("%d", &chaveK);

    for (i = 0; mensagem[i] != '\0'; ++i) {
        caractere = mensagem[i];

        if (caractere >= 'a' && caractere <= 'z') {
            caractere = caractere - chaveK;

            if (caractere < 'a') {
                caractere = caractere + 'z' - 'a' + 1;
            }

            mensagem[i] = caractere;
        } else if (caractere >= 'A' && caractere <= 'Z') {
            caractere = caractere - chaveK;

            if (caractere < 'A') {
                caractere = caractere + 'Z' - 'A' + 1;
            }

            mensagem[i] = caractere;
        }
    }

    printf("Mensagem decriptografada: %s", mensagem);

    return 1;
}
