/*
    Lista 02 - Exercício 10
    Leia um número n e teste: se n for negativo, eleve n ao quadrado; caso contrário, calcule a raiz quadrada de n. 
    Ao final, imprima o resultado.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 10\n");

    float n = 0;

    printf("\nDigite um número: ");
    scanf("%f", &n);

    if (n < 0)
    {
        float quadrado = pow(n, 2);
        printf("\nQuadrado de %.2f = %.2f", n, quadrado);
    }

    else
    {
        float raiz_quadrada = sqrt(n);
        printf("\nRaiz Quadrada de %.2f = %.2f", n, raiz_quadrada);
    }

    printf("\n\n");
}