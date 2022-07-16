/*
    Lista 01 - Exerc�cio 21
    O n�mero 3025 possui a seguinte caracter�stica: 30 + 25 = 55 => 55*55 = 3025. 
    Fa�a um programa para ler um n�mero n inteiro de 4 d�gitos e imprimir a primeira parte do n�mero, 
    a segunda parte e o valor da multiplica��o das partes.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 01 - EXERC�CIO 21\n");

    float t = 0, s = 1000;

    printf("\nDigite o tempo gasto no percurso pelo carro (em s/segundos): ");
    scanf("%f", &t);

    float v = s / t;
    float a = v / t;
    
    printf("\nDist�ncia percorrida (em m/metros): %.2f", s);
    printf("\nTempo gasto (em s/segundos): %.2f", t);
    printf("\nVelocidade (em m/s / metros/segundo): %2f", v);
    printf("\nAcelera��o (em m/s^2 / metros/segundo ao quadrado): %.2f", a);

    printf("\n\n");
}