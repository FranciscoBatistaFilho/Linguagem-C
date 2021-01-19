/*sum program*/

#include<stdio.h>

int main()
{
    int integer1, integer2, sum;//variable declaration

    printf("Enter whith first integer\n");//prompt
    scanf("%d",&integer1);//read an integer
    printf("Enter whith second intenger\n");//prompt    
    scanf("%d",&integer2);//read an integer
    sum=integer1+integer2;//assigns sum
    printf("the sum is %d\n",sum);//prompt

    return 0;//indica para o sistema operacional que o progrma foi bem-sucedido
}