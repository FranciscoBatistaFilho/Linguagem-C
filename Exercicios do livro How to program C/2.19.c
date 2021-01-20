/*Enunciado da questão:
Escreva um programa em C que receba três números inteiros diferentes digitados no teclado
e imprima a soma, a média, o produto, o menor e o maior desses números. Use a instrução if
somente na forma ensinada neste capítulo. A tela de diálogo deve aparecer como se segue
*/

#include<stdio.h>

int main()
{
    int num1, num2, num3, sum, average, multiplication;

    printf("Entre com tres numeros diferentes:");
    scanf("%d%d%d",&num1, &num2, &num3);
    
    sum = num1 + num2 + num3;
    multiplication = num1 * num2 * num3;
    average = (num1 + num2 + num3)/3;

    printf("The sum is %d\n", sum);
    printf("The average is %d\n", average);
    printf("the multiplication is %d\n", multiplication);
    
    if(num1 < num2 && num1 < num3)  
        printf("the smaller is %d\n", num1);
    if(num2 < num1 && num2 < num3)
        printf("the smaller is %d\n", num2);
    if(num3 < num1 && num3 < num2)
        printf("the smaller is %d\n", num3);

    if(num1>num2 && num1>num3)
        printf("the biggest is %d\n", num1);
    if(num2>num1 && num2>num3)
        printf("the biggest is %d\n", num2);
    if(num3>num1 && num3>num2)
        printf("the biggest is %d\n", num3);

    return 0;
}