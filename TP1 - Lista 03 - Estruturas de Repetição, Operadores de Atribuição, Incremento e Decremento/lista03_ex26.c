/*
    Lista 03 - Exerc�cio 26
    O m�todo de Newton-Raphson define que a sequ�ncia 
    xn + 1 = 1/2 (xn + A/xn), x0 = 1, n pertence � N 
    converge  para  a  raiz  quadrada  de  A.  
    Leia  um  n�mero  n  e  um  n�mero  A  (A  >  0)  e  calcule a raiz quadrada de A com n itera��es.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 26\n");

    int n = 0;
    float a = 0;

    printf("\nDigite a quantidade de itera��es: ");
    scanf("%d", &n);

    printf("\nDigite um n�mero ao qual ser� calculada a raiz quadrada: ");
    scanf("%f", &a);

    float x = 1;

    for (int i = 1; i <= n; i++)
        x = (x + a / x) / 2;

    printf("\nRaiz quadrada de %f: %f", a, x);
    
    printf("\n\n");
}