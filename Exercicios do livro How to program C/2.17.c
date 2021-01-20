/*Enunciado da questão 2.17
Escreva um programa que imprima do número 1 ao 4 na mesma linha. Escreva o programa
usando os seguintes métodos:

a) Usando uma instrução printf sem especificadores de conversão.
b) Usando uma instrução printf com identificadores de conversão.
c) Usando quatro instruções printf.*/

#include<stdio.h>

int main()
{
    /*Instrução printf sem especificadores de conversão*/

    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");

    /*Instrução printf com especificadores de conversão*/

    printf("%d\n", 1);
    printf("%d\n", 2);
    printf("%d\n", 3);
    printf("%d\n", 4);
    
    return 0;
}