/*
    4.8) Calcule as ra�zes de uma equa��o do 2� grau, a partir dos coeficientes a, b e c. 
    Se o valor de a for zero ou delta for negativo, imprima mensagens de erro.
*/


#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 4.8\n");

    float a = 0, b = 0, c = 0;

    printf("\nDigite o termo a de de uma equa��o do 2� grau: ");
    scanf("%f", &a);

    printf("\nDigite o termo b de de uma equa��o do 2� grau: ");
    scanf("%f", &b);

    printf("\nDigite o termo c de de uma equa��o do 2� grau: ");
    scanf("%f", &c);

    if (a == 0)
        printf("\nO valor de a n�o pode ser igual a zero!");
    
    else
    {
        float delta = pow(b,2) - 4 * a * c;

        if (delta < 0)
            printf("\nO valor de delta n�o pode ser negativo!");
        
        else
        {
            float raiz_1 = (-b + sqrt(delta)) / 2 * a;
            float raiz_2 = (-b - sqrt(delta)) / 2 * a;

            printf("\nRa�zes da equa��o do 2� grau informada: S={%f ; %f}", raiz_1, raiz_2);
        }
    }

    printf("\n\n");
}