/*Escreva um programa que leia dois inteiros e então determine e imprima se o primeiro é
múltiplo do segundo. (Dica: Use o operador resto.)*/

/*this program say to user if the first number is multiple of second*/

#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter with two numbers integers:\n");
    scanf("%d%d", &num1, &num2);

    if((num1%num2) == 0)
        printf("%d and multiple of %d", num1, num2);

    return 0;
}