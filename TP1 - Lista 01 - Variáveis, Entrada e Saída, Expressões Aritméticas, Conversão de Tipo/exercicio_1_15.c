/*
    1.15) Leia 3 variáveis inteiras a, b e c e faça um "rodízio" entre elas. 
    Ao final, a variável b deverá ter o valor da variável a, 
    a variável c deverá ter o valor da variável b e a variável a deverá ter o valor da variável c.

*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 1.15\n");

    int a = 0, b = 0, c = 0;

    printf("\nDigite o valor da variável a: ");
    scanf("%d", &a);

    printf("\nDigite o valor da variável b: ");
    scanf("%d", &b);

    printf("\nDigite o valor da variável c: ");
    scanf("%d", &c);

    int aux = a;

    a = c;
    c = b;
    b = aux;

    printf("\nValor da variável a após o rodízio: %d", a);
    printf("\nValor da variável b após o rodízio: %d", b);
    printf("\nValor da variável c após o rodízio: %d", c);
    
    printf("\n\n");
}