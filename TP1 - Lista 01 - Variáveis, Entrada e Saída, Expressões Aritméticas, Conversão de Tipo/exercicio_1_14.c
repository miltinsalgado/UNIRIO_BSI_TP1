/*
    1.14) Leia a e b e calcule a equa��o do 1� grau ax + b = 0, imprimindo o valor de x. 
    Considere a diferente de zero.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 1.14\n");

    float a = 0, b = 0;

    printf("\nDigite o termo a da equa��o ax + b = 0 // a != 0: ");
    scanf("%f", &a);
    
    printf("\nDigite o termo b da equa��o ax + b = 0: ");
    scanf("%f", &b);
    
    float x = -b / a;

    printf("\nEqua��o do 1� grau formada: %.2fx + %.2f = 0", a, b);
    printf("\nS = {%.2f}", x);
    
    printf("\n\n");
}