/* using intructions if */

#include<stdio.h>

int main()
{
    int num1,num2;

    printf("Entre com dois numeros inteiros\n");
    printf("e lhe direi como eles se relacionam:");
    scanf("%d%d",&num1,&num2);

    if(num1==num2)
        printf("%d e igual a %d\n", num1, num2);
    if(num1!=num2)
        printf("%d e diferente de %d\n", num1, num2);37
    if(num1<num2)
        printf("%d e menor que %d\n", num1, num2);
    if(num1>num2)
        printf("%d e maior que %d\n", num1, num2);
    if(num1<=num2)
        printf("%d e menor ou igual a %d\n", num1, num2);
    if(num1>=num2)
        printf("%d e maior ou igual a %d\n", num1, num2);
    return 0; 
}


