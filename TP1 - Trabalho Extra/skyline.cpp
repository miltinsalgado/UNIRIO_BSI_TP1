/*
    Trabalho Extra - Questão 01 - Programa: skyline.cpp (2,0 pontos) 
    "Skyline"  é  o  contorno  da  silhueta  formada  por  todos  os  prédios  de  uma  cidade  vistos  de uma longa distância.
    Dado  o  começo  (x1)  e  o  fim  (x2)  da  localidade  do  prédio,  bem  como  sua  altura  (y),  é 
    formado o conjunto (x1, x2, y) que representa o prédio. 

    O programa deverá ler uma matriz de inteiros de dimensões n x 3: int entrada[n][3] 
    sendo n o número de prédios que serão inseridos pelo usuário e 3 o conjunto de 
    coordenadas (x1, x2, y) do prédio. 
    
    O  programa  deverá  imprimir  uma  lista  de  pares  (xsaida,  ysaida)  que  formam  o  contorno 
    geral do Skyline, sendo xsaida onde o Skyline caminha no eixo x e ysaida a altura que ele chega no ponto xsaida, no eixo y. 
    Essa lista poderá ser armazenada como uma matriz ou de qualquer outra forma que for mais conveniente.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("TRABALHO EXTRA - QUESTÃO 01\n");

    int n = 0;

    printf("\nDigite a quantidade de prédios de uma cidade: ");
    scanf("%d", &n);

    int entrada[n][3];

    for (int i = 0; i < n; i++)
    {
        printf("\nConjunto de coordenadas do %d° prédio", i + 1);
        printf("\n");

        printf("\nDigite a coordenada x1: ");
        scanf("%d", &entrada[i][0]);

        do
        {
            printf("\nDigite a coordenada x2: ");
            scanf("%d", &entrada[i][1]);

            if (entrada[i][1] <= entrada[i][0])
                puts("\nA coordenada x1 deve ser maior que a coordenada x2");

        } while (entrada[i][1] <= entrada[i][0]);

        do
        {
            printf("\nDigite a coordenada y do prédio: ");
            scanf("%d", &entrada[i][2]);

            if (entrada[i][2] <= 0)
                puts("\nA coordenada y deve ser maior que zero");

        } while (entrada[i][2] <= 0);
    }

    printf("\n\n");
}