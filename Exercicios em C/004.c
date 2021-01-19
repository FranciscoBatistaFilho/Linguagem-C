/*O programa calcula o produto de três números*/

#include<stdio.h>

int main()
{
    int x, y, z, resultado;

    printf("Digite tres numeros inteiros:\n");
    scanf("%d %d %d",&x, &y, &z);

    resultado = x*y*z;

    printf("O produto e:%d\n", resultado);

    return 0;
}