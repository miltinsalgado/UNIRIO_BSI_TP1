/*
    Parte 03 - Exerc�cio Extra 02
    Crie um programa que l� um valor real n e imprime n sempre arredondando para um valor inteiro, ent�o imprime o pr�prio n. 
    Importante: implemente sem usar comandos de sele��o (para aqueles que j� conhecem).
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 03 - EXERC�CIO EXTRA 02\n");

    float n = 0;

    printf("\nDigite um n�mero n: ");
    scanf("%f", &n);

    int arredondado = n + 0.9999;

    printf("\nN�mero n arredondado pra cima: %d", arredondado);

    printf("\n\n");
}