/*
    Lista 01 - Exerc�cio 10
    Leia 3 vari�veis inteiras a, b e c e fa�a um "rod�zio" entre elas. 
    Ao final, a vari�vel b dever� ter o valor da vari�vel a, 
    a vari�vel c dever� ter o valor da vari�vel b e a vari�vel a dever� ter o valor da vari�vel c.

*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
        printf("LISTA 01 - EXERC�CIO 15\n");

    int a = 0, b = 0, c = 0;

    printf("\nDigite o valor (inteiro) da vari�vel a: ");
    scanf("%d", &a);

    printf("\nDigite o valor (inteiro) da vari�vel b: ");
    scanf("%d", &b);

    printf("\nDigite o valor (inteiro) da vari�vel c: ");
    scanf("%d", &c);

    int aux = a;

    a = c;
    c = b;
    b = aux;

    printf("\nValor da vari�vel a ap�s o rod�zio: %d", a);
    printf("\nValor da vari�vel b ap�s o rod�zio: %d", b);
    printf("\nValor da vari�vel c ap�s o rod�zio: %d", c);
    
    printf("\n\n");
}