/*
    Trabalho 01 - Quest�o 02 - Programa: cubo.cpp (2,0 pontos) 
    Sabe-se que um n�mero da forma n^3 � igual � soma de n �mpares consecutivos. 

    Exemplos: 
    a) 1^3 = 1 
    b) 2^3 = 3 + 5 
    c) 3^3 = 7 + 9 + 11 
    d) 4^3 = 13 + 15 + 17 + 19 

    Crie um programa em C que l� o valor de n e imprime os n �mpares consecutivos que cuja soma � igual a n^3. 

    Restri��es:
    a) n >= 1. Se n < 1, ent�o solicite novamente o valor at� o usu�rio digitar corretamente. 
    b) Todo o c�digo dever� estar implementado na fun��o main. 
    c) N�o s�o permitidas vari�veis globais.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("TRABALHO 01 - QUEST�O 02\n");

    int n = 0;

    do
    {
        printf("\nDigite um n�mero inteiro: ");
        scanf("%d", &n);

        if (n < 1)
            printf("\nO valor do n�mero inteiro deve ser positiivo! Por favor, digite novamente");
        
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