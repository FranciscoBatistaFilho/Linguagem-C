/*Escreva um programa que leia cinco números inteiros e então determine e imprima o maior e
o menor inteiro do grupo. Use somente as técnicas de programação ensinadas neste capítulo.
*/

/*this program read five numbers integers and print the biggest and the smallest of group*/

#include<stdio.h>

int main()
{
    int num1, num2, num3, num4, num5;

    printf("inform five numbers integers:\n");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);

    /*the smallest number in group*/
    if(num1<num2 && num1<num3 && num1<num4 && num1<num5)
        printf("the smallest number in this group is %d\n" , num1);
    
    if(num2<num1 && num2<num3 && num2<num4 && num2<num5)
        printf("the smallest number in this group is %d\n", num2);
    
    if(num3<num1 && num3<num2 && num3<num4 && num3<num5)
        printf("the smallest number in this group is %d\n", num3);

    if(num4<num1 && num4<num2 && num4<num3 && num4<num5)
      printf("the smallest number in this group is %d\n", num4);

    if(num5<num1 && num5<num2 && num5<num3 && num5<num4)
        printf("the smallest number in this group is %d\n", num5);

    /*the biggest number in group*/
    if(num1>num2 && num1>num2 && num1>num3 && num1>num4 && num1>num5)
        printf("The biggest number in this group is %d\n", num1);

    if(num2>num1 && num2>num3 && num2>num4 && num2>num5)
        printf("the biggest number in this group is %d\n", num2);

    if(num3>num1 && num3>num2 && num3>num4 && num3>num5)
        printf("The biggest number in this group is %d\n", num3);

    if(num4>num1 && num4>num2 && num4>num3 && num4>num5)
        printf("the biggest number in this group is %d\n", num4);
    
    if(num5>num1 && num5>num2 && num5>num3 && num5>num4)
        printf("the biggest number in this group is %d\n", num5);

    return 0;
}
