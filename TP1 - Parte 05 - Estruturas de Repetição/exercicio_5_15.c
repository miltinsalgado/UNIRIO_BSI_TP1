/*
    5.14) Leia um número n e imprima n
    k para k variando de 1 a n. 
    Se n < 1 emita uma mensagem de erro. Exemplo: n = 5.
    5^1= 5
    5^2 = 25
    5^3= 125
    5^4 = 625
    5^5 = 3125
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 5.15\n");

    int cont = 0;
    float nota = 0, soma = 0, media = 0;

    while (1)
    {
        printf("\nDigite uma nota de um aluno: ");
        scanf("%f", &nota);

        if (nota == -1)
            break;
        
        else if (nota < 0 || nota > 10)
            continue;

        cont++;
        soma += nota;
    }

    media = soma / cont;

    printf("\nMédia de notas da turma: %.2f", media);

    printf("\n\n");
}