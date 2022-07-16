/*
    Lista 02 - Exercício 11
    O número 3025 possui a seguinte característica: 30 + 25 = 55 => 55*55 = 3025. 
    Fazer um programa para ler um número n inteiro de 4 dígitos e imprimir se o número tem ou não essa característica. 
    Se n não tiver 4 dígitos, imprima uma mensagem de erro.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 11\n");

    int n = 0;

    printf("\nDigite um número inteiro de 4 dígitos: ");
    scanf("%d", &n);

    if (n < 1000 || n > 9999)
        printf("\nO número digitado não possui quatro dígitos!");
    
    else
    {
        int parte1 = n / 100;
        int parte2 = (n % 100);

        int soma_partes = parte1 + parte2;

        if (ceil(pow(soma_partes, 2)) == n) //? erro de aproximação de double para int utilizando pow com alguns números (ex: 5), portanto deve-se arrendondar o número para que o valor fique correto
            printf("\nO número %d possui o quadrado da soma de suas partes igual ao próprio número", n);
        
        else
            printf("\nO número %d não possui o quadrado da soma de suas partes igual ao próprio número", n);
    }

    printf("\n\n");
}