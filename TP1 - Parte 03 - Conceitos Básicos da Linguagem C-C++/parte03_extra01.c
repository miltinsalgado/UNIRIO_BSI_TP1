/*
    Parte 03 - Exercício Extra 01
    Crie um programa que lê um valor real n e imprime n arredondado para cima ou para baixo. 
    Se a parte decimal >= 0.5, então arredonda pra cima, senão para baixo. 
    Importante: implemente sem usar comandos de seleção (para aqueles que já conhecem).
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 03 - EXERCÍCIO EXTRA 01\n");

    float n = 0;

    printf("\nDigite um número n: ");
    scanf("%f", &n);

    int arredondado = n + 0.5;

    printf("\nNúmero n arredondado para cima ou para baixo: %d", arredondado);

    printf("\n\n");
}