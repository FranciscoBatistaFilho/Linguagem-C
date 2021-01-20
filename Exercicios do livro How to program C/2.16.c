/*Teste de operações +,-,*,/,% de dois numeros*/

/*
Enunciado da questão:

Escreva um programa que peça ao usuário para digitar dois números, obtenha-os do usuário e
imprima a soma, o produto, a diferença, o quociente e o resto da divisão dos dois números.

*/

#include<stdio.h>

int main()
{
    int num1,num2,sum,difference,multiplication,division,split_rest;

    printf("Digite 2 numeros inteiros:\n");
    scanf("%d%d",&num1, &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;
    split_rest = num1 % num2;

    printf("As operacoes entre %d e %d de sum, difference, multiplication, division, split rest sao respectivamente\n%d\n%d\n%d\n%d\n%d", num1, num2, sum, difference, multiplication, division, split_rest);

    return 0;
}