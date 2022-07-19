/*
    Parte 10 - Exercício 01
    Leia nome, peso e altura de 5 pessoas e, ao final, imprima o nome e o IMC de todas elas (IMC = peso / altura2)
*/

#include <stdio.h>
#include <locale.h>

const int TAM_MAX_NOME = 50;

struct Pessoa
{
    char nome[TAM_MAX_NOME];
    float peso = 0;
    float altura = 0;
};

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 10 - EXERCÍCIO 01\n");

    Pessoa pessoa[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nDados da %dª pessoa", i + 1);
        printf("\n");

        printf("\nDigite o nome da pessoa: ");
        gets(pessoa[i].nome);

        printf("Digite o peso (em kg/quilogramas): ");
        scanf("%f", &pessoa[i].peso);

        printf("Digite a altura (em m/metros): ");
        scanf("%f", &pessoa[i].altura);

        fflush(stdin);
    }

    float imc = 0;

    printf("\nDados do IMC das 5 pessoas");
    printf("\n");
    
    for (int i = 0; i < 5; i++)
    {
        printf("\nNome: %s", pessoa[i].nome);
        imc = pessoa[i].peso / (pessoa[i].altura * pessoa[i].altura);
        printf("\nIMC: %.2f kg/m^2", imc);
        printf("\n");
    }
    
    printf("\n\n");
}