#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 3.5\n");

    float raio = 0, perimetro = 0, area = 0, pi = 3.14;

    printf("\nDigite o raio do círculo: ");
    scanf("%f", &raio);

    perimetro = 2 * pi * raio;
    area = pi * raio * raio;

    printf("\nPerímetro do círculo: %f", perimetro);
    printf("\nÁrea do círculo: %f", area);

    printf("\n\n");
}