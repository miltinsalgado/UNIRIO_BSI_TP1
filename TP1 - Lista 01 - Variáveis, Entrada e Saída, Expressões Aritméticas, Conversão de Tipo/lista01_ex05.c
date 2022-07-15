/*
    Lista 01 - Exerc�cio 05
    Leia a quantidade de bytes de um arquivo e a velocidade de transmiss�o em bytes por segundo e 
    imprimir quantos segundos ser�o necess�rios para fazer o download do arquivo.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 01 - EXERC�CIO 05\n");

    float quantidade_bytes = 0, velocidade_transmissao = 0;

    printf("\nDigite a quantidade de bytes de um arquivo: ");
    scanf("%f", &quantidade_bytes);
    printf("\nDigite a velocidade de transmiss�o (em B/s ou bytes/segundo): ");
    scanf("%f", &velocidade_transmissao);
    
    float segundos = quantidade_bytes / velocidade_transmissao;

    printf("\nSer�o necess�rios %.2f segundos para fazer o download do arquivo de %.2f bytes com velocidade de transmiss�o de %.2f B/s", segundos, quantidade_bytes, velocidade_transmissao);

    printf("\n\n");
}