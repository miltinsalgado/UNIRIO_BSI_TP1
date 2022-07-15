/*
    Parte 03 - Exercício Extra 02
    Crie um programa que lê um valor real n e imprime n sempre arredondando para um valor inteiro, então imprime o próprio n. 
    Importante: implemente sem usar comandos de seleção (para aqueles que já conhecem).
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 03 - EXERCÍCIO EXTRA 02\n");

    float n = 0;

    printf("\nDigite um número n: ");
    scanf("%f", &n);

    int arredondado = n + 0.9999;

    printf("\nNúmero n arredondado pra cima: %d", arredondado);

    printf("\n\n");
}