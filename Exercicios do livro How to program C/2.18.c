/*Enunciado do programa:
Escreva um programa em C que peça ao usuário para fornecer dois números inteiros,
obtenha-os do usuário e imprima o maior deles seguido das palavras "e maior". Se os
números forem iguais, imprima a mensagem "Estes números sao iguais". Use a instrução if
somente na forma de seleção simples que você aprendeu neste capítulo.*/

#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Informe dois numeros inteiros:\n");
    scanf("%d%d", &num1, &num2);

    if(num1 > num2)
        printf("%d e maior\n", num1);
    
    if(num2 > num1)
        printf("%d e maior\n", num2);

    if(num1 == num2)
        printf("Estes numeros sao iguais %d e %d\n", num1, num2);

    return 0;
}

