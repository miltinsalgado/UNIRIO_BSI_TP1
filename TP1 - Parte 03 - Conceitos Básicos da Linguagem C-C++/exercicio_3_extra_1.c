/*
    3.extra.1) Crie um programa que l� um valor real n e imprime n arredondado para cima ou para baixo. 
    Se a parte decimal >= 0.5, ent�o arredonda pra cima, sen�o para baixo. 
    Importante: implemente sem usar comandos de sele��o (para aqueles que j� conhecem).
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 3.EXTRA.1\n");

    float n = 0;

    printf("\nDigite um n�mero n: ");
    scanf("%f", &n);

    int arredondado = n + 0.5;

    printf("\nN�mero n arredondado para cima ou para baixo: %d", arredondado);

    printf("\n\n");
}