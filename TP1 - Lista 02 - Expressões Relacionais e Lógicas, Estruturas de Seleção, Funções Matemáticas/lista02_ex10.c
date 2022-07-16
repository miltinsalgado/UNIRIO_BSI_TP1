/*
    Lista 02 - Exerc�cio 10
    Leia um n�mero n e teste: se n for negativo, eleve n ao quadrado; caso contr�rio, calcule a raiz quadrada de n. 
    Ao final, imprima o resultado.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERC�CIO 10\n");

    float n = 0;

    printf("\nDigite um n�mero: ");
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