/*
    Parte 04 - Exercício 07
    Leia um valor inteiro n e dois valores (inferior e superior).
    Por fim, imprima se n está antes, dentro ou fora do intervalo inferior..superior.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 04 - EXERCÍCIO 07\n");

    int n = 0, inferior = 0, superior = 0;

    printf("\nDigite um número: ");
    scanf("%d", &n);

    printf("\nDigite o número inferior do intervalo [inferior; superior]: ");
    scanf("%d", &inferior);

    printf("\nDigite o número superior do intervalo [inferior; superior]: ");
    scanf("%d", &superior);

    if (inferior <= n && n <= superior)
        printf("\nO número %d está entre o intervalo [%d ; %d]", n, inferior, superior);
    
    else if (n < inferior)
        printf("\nO número %d está antes do intervalo [%d ; %d]", n, inferior, superior);

    else if (n > superior)
        printf("\nO número %d está depois do intervalo [%d ; %d]", n, inferior, superior);

    printf("\n\n");
}