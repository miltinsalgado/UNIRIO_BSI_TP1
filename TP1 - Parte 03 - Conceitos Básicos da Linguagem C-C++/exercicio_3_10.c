#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 3.10\n");

    int tempo = 0;

    printf("\nDigite o tempo (em s/segundos): ");
    scanf("%d", &tempo);

    int horas = tempo / 3600;
    int minutos = (tempo % 3600) / 60;
    int segundos = (tempo % 3600) % 60;

    printf("Tempo em horas, minutos e segundos: %dh %dmin %ds", horas, minutos, segundos);

    printf("\n\n");
}