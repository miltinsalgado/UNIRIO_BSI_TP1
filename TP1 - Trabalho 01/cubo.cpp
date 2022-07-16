/*
    Trabalho 01 - Questão 02 - Programa: cubo.cpp (2,0 pontos) 
    Sabe-se que um número da forma n^3 é igual à soma de n ímpares consecutivos. 

    Exemplos: 
    a) 1^3 = 1 
    b) 2^3 = 3 + 5 
    c) 3^3 = 7 + 9 + 11 
    d) 4^3 = 13 + 15 + 17 + 19 

    Crie um programa em C que lê o valor de n e imprime os n ímpares consecutivos que cuja soma é igual a n^3. 

    Restrições:
    a) n >= 1. Se n < 1, então solicite novamente o valor até o usuário digitar corretamente. 
    b) Todo o código deverá estar implementado na função main. 
    c) Não são permitidas variáveis globais.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("TRABALHO 01 - QUESTÃO 02\n");

    int n = 0;

    do
    {
        printf("\nDigite um número inteiro: ");
        scanf("%d", &n);

        if (n < 1)
            printf("\nO valor do número inteiro deve ser positiivo! Por favor, digite novamente");
        
    } while (n < 1);
    
    int primeiro_impar_consecutivo = n * (n - 1) + 1;

    int impar_consecutivo = primeiro_impar_consecutivo;
    int impar = impar_consecutivo;

    printf("\n%d^3 = ", n);

    for (int i = 0; i < n; i++, impar += 2)
    {
        if (i == n - 1)
            printf("%d", impar);

        else
            printf("%d + ", impar);
    }

    printf("\n\n");
}