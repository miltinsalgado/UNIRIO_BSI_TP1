/*
    Lista 02 - Exercício 18
    Reescreva o exercício anterior com o comando switch.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 18\n");

    int nota = 0;

    printf("\nDigite a nota do aluno: ");
    scanf("%d", &nota);

    switch (nota)
    {
        case 10:
        case 9:
            printf("\nConceito A");
            break;

        case 8:
        case 7:
            printf("\nConceito B");
            break;

        case 6:
        case 5:
            printf("\nConceito C");
            break;
        
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("\nConceito D");
            break;

        default:
            printf("\nInválida");
            break;
    }

    printf("\n\n");
}