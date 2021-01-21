/*Eis um pequeno passo à frente. Neste capítulo você aprendeu a respeito de inteiros e o tipo
int. O C também pode representar letras maiúsculas, letras minúsculas e uma grande
variedade de símbolos especiais. O C usa internamente pequenos inteiros para representar
cada caractere diferente. O conjunto de caracteres que um computador utiliza e as
representações dos números inteiros correspondentes àqueles caracteres é chamado conjunto
de caracteres do computador. Você pode imprimir o número inteiro equivalente à letra maiúscula A, por exemplo, executando a instrução

printf("%d", 'A');*/

#include<stdio.h>

int main()
{
    printf("A:");
    printf("%d\n", 'A');

    printf("B:");
    printf("%d\n", 'B');

    printf("C:");
    printf("%d\n", 'C');

    printf("a:");
    printf("%d\n", 'a');

    printf("b:");
    printf("%d\n", 'b');

    printf("c:");
    printf("%d\n", 'c');

    printf("0:");
    printf("%d\n", '0');

    printf("12:");
    printf("%d\n", '12');

    printf("$:");
    printf("%d\n", '$');

    printf("*:");
    printf("%d\n", '*');

    printf("+:");
    printf("%d\n", '+');

    printf("/:");
    printf("%d\n", '/');

    printf("1:");
    printf("%d\n", '1');

    printf("80:");
    printf("%d\n", '80');

    printf("8:");
    printf("%d\n", '8');
    return 0;
}