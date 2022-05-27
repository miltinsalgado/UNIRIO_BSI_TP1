#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 4.7\n");

    int n = 0, inferior = 0, superior = 0;

    printf("\nDigite um n�mero: ");
    scanf("%d", &n);

    printf("\nDigite o n�mero inferior do intervalo [inferior; superior]: ");
    scanf("%d", &inferior);

    printf("\nDigite o n�mero superior do intervalo [inferior; superior]: ");
    scanf("%d", &superior);

    if (inferior <= n && n <= superior)
        printf("\nO n�mero %d est� entre o intervalo [%d ; %d]", n, inferior, superior);
    
    else if (n < inferior)
        printf("\nO n�mero %d est� antes do intervalo [%d ; %d]", n, inferior, superior);

    else if (n > superior)
        printf("\nO n�mero %d est� depois do intervalo [%d ; %d]", n, inferior, superior);

    printf("\n\n");
}