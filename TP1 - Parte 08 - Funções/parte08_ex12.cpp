/*
    Parte 08 - Exercício 12
    Crie um programa que lê um valor n, cria um vetor de n inteiros, lê os valores desse vetor e, por fim, imprime o
    menor valor do vetor. 
    Implemente a leitura de n e a criação do vetor na função main, a leitura do vetor deve ficar na 
    função le_vetor (apresentada anteriormente) e a busca do menor valor deve ficar na função busca_menor_valor.
*/

#include <stdio.h>
#include <locale.h>

int busca_menor_valor (int v[], int n)
{
    int menor_valor_vetor = 0;

    for (int i = 0; i < n; i++)
        if (i == 0 || v[i] < menor_valor_vetor)
            menor_valor_vetor = v[i];

    return menor_valor_vetor;
}

void le_vetor (int v[], int n)
{
    puts("\nDigite os valores dos indíces do vetor:");

    for (int i = 0; i < n; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }
}

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 08 - EXERCÍCIO 12\n");

    int n = 0;

    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];

    le_vetor(v, n);
    int menor_valor_vetor = busca_menor_valor(v, n);

    printf("\nMenor valor do vetor: %d", menor_valor_vetor);
    
    printf("\n\n");
}