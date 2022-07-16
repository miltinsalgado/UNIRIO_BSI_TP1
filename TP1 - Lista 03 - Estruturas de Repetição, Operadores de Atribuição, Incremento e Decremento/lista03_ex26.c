/*
    Lista 03 - Exercício 26
    O método de Newton-Raphson define que a sequência 
    xn + 1 = 1/2 (xn + A/xn), x0 = 1, n pertence à N 
    converge  para  a  raiz  quadrada  de  A.  
    Leia  um  número  n  e  um  número  A  (A  >  0)  e  calcule a raiz quadrada de A com n iterações.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 26\n");

    int n = 0;
    float a = 0;

    printf("\nDigite a quantidade de iterações: ");
    scanf("%d", &n);

    printf("\nDigite um número ao qual será calculada a raiz quadrada: ");
    scanf("%f", &a);

    float x = 1;

    for (int i = 1; i <= n; i++)
        x = (x + a / x) / 2;

    printf("\nRaiz quadrada de %f: %f", a, x);
    
    printf("\n\n");
}