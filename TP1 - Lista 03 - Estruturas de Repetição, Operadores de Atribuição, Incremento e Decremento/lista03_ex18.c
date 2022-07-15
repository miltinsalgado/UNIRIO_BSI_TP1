/*
    Lista 03 - Exercício 18
    Entre com a idade de várias pessoas até o usuário digitar zero e imprima: 
    • Total de pessoas com menos de 21 anos. 
    • Total de pessoas com mais de 50 anos. 
    Obviamente, idades negativas não devem ser computadas. 
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 18\n");

    int idade = 0, cont_menos_21_anos = 0, cont_mais_50_anos = 0;

    while (1)
    {
        printf("\nDigite a idade de uma pessoa: ");
        scanf("%d", &idade);

        if (idade == 0)
            break;

        else if (idade < 0)
            puts("\nIdade inválida");

        else if (idade < 21)
            cont_menos_21_anos++;
        
        else if (idade > 50)
            cont_mais_50_anos++;
    }

    printf("\nTotal de pessoas com menos de 21 anos: %d", cont_menos_21_anos);
    printf("\nTotal de pessoas com mais de 50 anos: %d", cont_mais_50_anos);

    printf("\n\n");
}