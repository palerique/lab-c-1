#include <stdio.h>

/*
aluno: Paulo Henrique Lerbach Rodrigues
Prova Parcial 1 de LTP1

Q5 - Um funcionario de uma empresa recebe aumento salarial anualmente.
 Sabe se que:
 a) Esse funcionario foi contratado em 2005, com salario inicial de R$ 1.000,00;
 b) Em 2006 recebeu aumento de 1.5% sobre seu salario inicial;
 c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual do ano anterior.

 Faca um programa que determine o salario em 2020 deste funcionario.
*/

int main() {

    int ano = 2005;
    double salario = 1000.0;
    double aumento = 1.5 / 100;

    printf("O salario em %d = R$ %.2f \n", ano, salario);

    ++ano;
    salario *= (aumento + 1.0);
    printf("O salario em %d = R$ %.2f aumento de %.2f%% \n", ano, salario, aumento * 100);

    while (ano < 2020) {
        ++ano;
        aumento *= 2;
        salario *= (aumento + 1.0);
        printf("O salario em %d = R$ %.2f aumento de %.2f%% \n", ano, salario, aumento *100);
    }

    //2006 = 1000 * 1.015
    //2007 = 3%
    //2008 = 6%
    //2009 = 12%

    return 1;
}
