/*
    Trabalho Extra - Quest�o 01 - Programa: skyline.cpp (2,0 pontos) 
    "Skyline"  �  o  contorno  da  silhueta  formada  por  todos  os  pr�dios  de  uma  cidade  vistos  de uma longa dist�ncia.
    Dado  o  come�o  (x1)  e  o  fim  (x2)  da  localidade  do  pr�dio,  bem  como  sua  altura  (y),  � 
    formado o conjunto (x1, x2, y) que representa o pr�dio. 

    O programa dever� ler uma matriz de inteiros de dimens�es n x 3: int entrada[n][3] 
    sendo n o n�mero de pr�dios que ser�o inseridos pelo usu�rio e 3 o conjunto de 
    coordenadas (x1, x2, y) do pr�dio. 
    
    O  programa  dever�  imprimir  uma  lista  de  pares  (xsaida,  ysaida)  que  formam  o  contorno 
    geral do Skyline, sendo xsaida onde o Skyline caminha no eixo x e ysaida a altura que ele chega no ponto xsaida, no eixo y. 
    Essa lista poder� ser armazenada como uma matriz ou de qualquer outra forma que for mais conveniente.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("TRABALHO EXTRA - QUEST�O 01\n");

    int n = 0;

    printf("\nDigite a quantidade de pr�dios de uma cidade: ");
    scanf("%d", &n);

    int entrada[n][3];

    for (int i = 0; i < n; i++)
    {
        printf("\nConjunto de coordenadas do %d� pr�dio", i + 1);
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
            printf("\nDigite a coordenada y do pr�dio: ");
            scanf("%d", &entrada[i][2]);

            if (entrada[i][2] <= 0)
                puts("\nA coordenada y deve ser maior que zero");

        } while (entrada[i][2] <= 0);
    }

    printf("\n\n");
}