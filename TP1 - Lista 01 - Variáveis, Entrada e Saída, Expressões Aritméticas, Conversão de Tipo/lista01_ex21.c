/*
    Lista 01 - Exercício 21
    O número 3025 possui a seguinte característica: 30 + 25 = 55 => 55*55 = 3025. 
    Faça um programa para ler um número n inteiro de 4 dígitos e imprimir a primeira parte do número, 
    a segunda parte e o valor da multiplicação das partes.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 01 - EXERCÍCIO 21\n");

    float t = 0, s = 1000;

    printf("\nDigite o tempo gasto no percurso pelo carro (em s/segundos): ");
    scanf("%f", &t);

    float v = s / t;
    float a = v / t;
    
    printf("\nDistância percorrida (em m/metros): %.2f", s);
    printf("\nTempo gasto (em s/segundos): %.2f", t);
    printf("\nVelocidade (em m/s / metros/segundo): %2f", v);
    printf("\nAceleração (em m/s^2 / metros/segundo ao quadrado): %.2f", a);

    printf("\n\n");
}