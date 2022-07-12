/*
    Lista 02 - Exerc�cio 11
    O n�mero 3025 possui a seguinte caracter�stica: 30 + 25 = 55 => 55*55 = 3025. 
    Fazer um programa para ler um n�mero n inteiro de 4 d�gitos e imprimir se o n�mero tem ou n�o essa caracter�stica. 
    Se n n�o tiver 4 d�gitos, imprima uma mensagem de erro.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERC�CIO 11\n");

    int n = 0;

    printf("\nDigite um n�mero inteiro de 4 d�gitos: ");
    scanf("%d", &n);

    if (n < 1000 || n > 9999)
        printf("\nO n�mero digitado n�o possui quatro d�gitos!");
    
    else
    {
        int parte1 = n / 100;
        int parte2 = (n % 100);

        int soma_partes = parte1 + parte2;

        if (ceil(pow(soma_partes, 2)) == n) //? erro de aproxima��o de double para int utilizando pow com alguns n�meros (ex: 5), portanto deve-se arrendondar o n�mero para que o valor fique correto
            printf("\nO n�mero %d possui o quadrado da soma de suas partes igual ao pr�prio n�mero", n);
        
        else
            printf("\nO n�mero %d n�o possui o quadrado da soma de suas partes igual ao pr�prio n�mero", n);
    }

    printf("\n\n");
}