#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 3.9\n");

    float num = 0;

    printf("\nDigite um n�mero: ");
    scanf("%f", &num);

    int parte_inteira = (int) num;
    float parte_decimal = num - parte_inteira;

    printf("\nParte inteira: %d", parte_inteira);
    printf("\nParte decimal: %f", parte_decimal);

    printf("\n\n");
}