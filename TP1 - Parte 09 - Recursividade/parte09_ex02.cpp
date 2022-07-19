/*
    Parte 09 - Exerc�cio 02
    Implemente a fun��o recursiva soma que soma dois n�meros inteiros a e b. 
    Atente para o fato de que a ou b podem ser negativos. 
    Dica: escreva primeiramente a defini��o recursiva da soma e depois implemente a fun��o.
*/

#include <stdio.h>
#include <locale.h>

int soma(int a, int b)
{
    if (a == 0)
        return b;

    else if (b == 0)
        return a;

    else if (a > 0 && b > 0)
        return 1 + 1 + soma(a - 1, b - 1);

    else if (a > 0 && b > 0)
        return 1 + 1 + soma(a - 1, b - 1);
        
    else if (a < 0 && b > 0)
        return -1 + 1 + soma(a + 1, b - 1);

    else if (a > 0 && b < 0)
        return 1 - 1 + soma(a - 1, b + 1);
    
    return -1 - 1 + soma(a + 1, b + 1);
}

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 09 - EXERC�CIO 02\n");

    int a = 0, b = 0;

    printf("\nDigite a primeira parcela: ");
    scanf("%d", &a);

    printf("\nDigite a segunda parcela: ");
    scanf("%d", &b);

    int resultado = soma(a, b);

    printf("%d + %d = %d", a, b, resultado);
    
    printf("\n\n");
}