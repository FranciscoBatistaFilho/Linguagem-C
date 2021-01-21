/*Escreva um programa que receba a entrada de um número de cinco dígitos, separe o número
em seus dígitos componentes e os imprima separados uns dos outros por três espaços. Por
exemplo, se o usuário digitar 42339, o programa deve escrever*/

#include<stdio.h>

int main()
{
    int num1, one, two, three, four, five;

    printf("Enter a five-digits number:\n");
    scanf("%d", &num1);

    one = num1 / 10000;
    two = (num1 / 1000) - (one * 10);
    three = (num1 / 100) - ((num1 / 1000) * 10);
    four = (num1 / 10) - ((num1 / 100) * 10);
    five = num1 - ((num1 / 10) * 10);

    printf("%d   %d   %d   %d   %d", one, two, three, four, five);
}