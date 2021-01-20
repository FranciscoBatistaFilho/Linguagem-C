/*Escreva um programa que leia o raio de um círculo e imprima seu diâmetro, o valor de sua
circunferência e sua área. Use o valor constante de 3,14159 para "pi". Faça cada um destes
cálculos dentro da instrução (ou instruções) printf e use o especificador de conversão %f
(Nota: Neste capítulo, analisamos apenas variáveis e constantes inteiras. No Capítulo 3
analisaremos números de ponto flutuante, i.e., valores que podem possuir pontos decimais.)*/

#include<stdio.h>

int main()
{
    float pi=3.14159, radius;

    printf("Insira o raio de um circulo:\n");
    scanf("%f", &radius);

    printf("the diameter of circle is %0.2f\n", radius*radius);
    printf("the cincunference of the circle is %0.2f\n", 2*pi*radius);
    printf("the area of the circle is %0.2f\n",2*pi*radius*radius);

    return 0;
}