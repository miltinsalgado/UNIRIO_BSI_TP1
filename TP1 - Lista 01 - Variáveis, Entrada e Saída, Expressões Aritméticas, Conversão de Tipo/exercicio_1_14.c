/*
    1.14) Leia a e b e calcule a equação do 1º grau ax + b = 0, imprimindo o valor de x. 
    Considere a diferente de zero.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 1.14\n");

    float a = 0, b = 0;

    printf("\nDigite o termo a da equação ax + b = 0 // a != 0: ");
    scanf("%f", &a);
    
    printf("\nDigite o termo b da equação ax + b = 0: ");
    scanf("%f", &b);
    
    float x = -b / a;

    printf("\nEquação do 1° grau formada: %.2fx + %.2f = 0", a, b);
    printf("\nS = {%.2f}", x);
    
    printf("\n\n");
}