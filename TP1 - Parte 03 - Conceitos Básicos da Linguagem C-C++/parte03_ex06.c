/*
    Parte 03 - Exercício 06
    Leia a distância percorrida por um carro, o tempo gasto e a quantidade de gasolina consumida. 
    Em seguida, imprima a velocidade média (KM/h) e o consumo de combustível (Km/l).
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 03 - EXERCÍCIO 06\n");

    float distancia = 0, tempo = 0, quantidade_gasolina = 0;

    printf("\nDigite a distância percorrida pelo carro (em Km/quilômetros): ");
    scanf("%f", &distancia);

    printf("\nDigite o tempo gasto pelo carro (em h/horas): ");
    scanf("%f", &tempo);

    printf("\nDigite a quantidade de gasolina consumida pelo carro (em l/litros): ");
    scanf("%f", &quantidade_gasolina);

    float velocidade_media = distancia / tempo;
    float consumo_combustivel = distancia / quantidade_gasolina;

    printf("\nVelocidade média do carro (em Km/h): %f", velocidade_media);
    printf("\nConsumo de combustível do carro (em Km/l): %f", consumo_combustivel);

    printf("\n\n");
}