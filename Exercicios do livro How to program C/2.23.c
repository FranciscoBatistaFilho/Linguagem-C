/* Escreva um programa que leia um número inteiro e então determine e imprima se ele é par
ou ímpar. (Dica: Use o operador resto. Um número par é múltiplo de dois. Qualquer múltiplo
de dois deixa resto zero ao ser dividido por 2.)*/

/*this program say if number is multiple of two*/

#include<stdio.h>

int main()
{
    int num;

    printf("Enter an integer:\n");
    scanf("%d",&num);

    if((num%2) == 0)
        printf("the number %d is multiple of two", num);

    return 0;
}