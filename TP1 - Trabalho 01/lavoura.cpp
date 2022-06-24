/*
    Trabalho 01 - Quest�o 01 - Programa: lavoura.cpp (2,0 pontos) 
    Uma  empresa  utiliza  avi�es  para  pulverizar  lavouras.  O  valor  do  servi�o  cobrado  pela 
    empresa  depende  da  �rea  a  ser  pulverizada  e  do  tipo  da  pulveriza��o,  conforme  tabela  a seguir: 

    Tipo da pulveriza��o                    Valor 
    E - ervas daninhas                      R$ 50,00 / acre
    G - gafanhotos                          R$ 100,00 / acre
    B - broca                               R$ 150,00 / acre
    A - ervas daninhas + gafanhotos         R$ 140,00 / acre
    F - ervas daninhas + broca              R$ 190,00 / acre
    H - gafanhotos + broca                  R$ 240,00 / acre
    T - todos                               R$ 270,00 / acre

    Se  a  �rea  a  ser  pulverizada  for  superior  a  10  acres,  o  fazendeiro  tem  um  desconto  de  5% 
    sobre o valor do servi�o. Al�m disso, se o valor do servi�o for maior do que R$ 750,00, o 
    fazendeiro  tem  um  desconto  de  10%  sobre  o  valor  que  ultrapassar  os  R$  750,00.  
    Caso ambos os descontos se apliquem, o desconto da �rea � calculado primeiro. 

    Crie  um  programa  em  C  para  ler  os  dados  da  pulveriza��o  e  imprimir  o  valor  total  do 
    servi�o, o valor do desconto (se houver) e o valor final a ser pago pelo fazendeiro. 

    Restri��es: 
    a) Quantidade de acres > 0. Se valor digitado < 0, ent�o solicite novamente o valor at� o 
    usu�rio digitar corretamente. 
    b) O tipo da pulveriza��o deve ser uma das op��es da tabela (letra mai�scula ou 
    min�scula).  Se  o  valor  digitado  n�o  corresponder  a  nenhum  item  da  tabela,  solicite 
    novamente o valor at� o usu�rio digitar corretamente. 
    c) Todo o c�digo dever� estar implementado na fun��o main. 
    d) N�o s�o permitidas vari�veis globais.
*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("TRABALHO 01 - QUEST�O 01\n");

    printf("\nTipo da pulveriza��o                    Valor");
    printf("\nE - ervas daninhas                      R$ 50,00 / acre");
    printf("\nG - gafanhotos                          R$ 100,00 / acre");
    printf("\nB - broca                               R$ 150,00 / acre");
    printf("\nA - ervas daninhas + gafanhotos         R$ 140,00 / acre");
    printf("\nF - ervas daninhas + broca              R$ 190,00 / acre");
    printf("\nH - gafanhotos + broca                  R$ 240,00 / acre");
    printf("\nT - todos                               R$ 270,00 / acre");
    printf("\n");

    int area_pulverizada = 0;
    char tipo_pulverizacao = ' ';
    bool entrada_valida = true;

    do
    {
        printf("\nDigite a �rea a ser pulverizada: ");
        scanf("%d", &area_pulverizada);

        if (area_pulverizada <= 0)
        {
            entrada_valida = false;
            printf("\nA �rea a ser pulverizada deve ser maior do que 0! Por favor, digite novamente");
        }

        else
        {
            entrada_valida = true;

            do
            {
                printf("\nDigite o tipo de pulveriza��o: ");
                getchar();
                scanf("%c", &tipo_pulverizacao);
                tipo_pulverizacao = toupper(tipo_pulverizacao);

                if (tipo_pulverizacao != 'E' && tipo_pulverizacao != 'G' && tipo_pulverizacao != 'B' && tipo_pulverizacao != 'A' && tipo_pulverizacao != 'F' && tipo_pulverizacao != 'H' && tipo_pulverizacao != 'T')
                {
                    entrada_valida = false;
                    printf("\nO tipo de pulveriza��o digitado n�o est� presente na tabela! Por favor, digite novamente");
                }

                else
                    entrada_valida = true;

            } while (!entrada_valida);
        }
    } while (!entrada_valida);

    const float ervas_daninhas = 50.00, gafanhotos = 100.00, broca = 150.00, ervas_daninhas_gafanhotos = 140.00, ervas_daninhas_broca = 190.00, gafanhotos_broca = 240.00, todos = 270.00;
    float valor_servico_total = 0;

    switch (tipo_pulverizacao)
    {
        case 'E':
            valor_servico_total = area_pulverizada * ervas_daninhas;
            break;
        
        case 'G':
            valor_servico_total = area_pulverizada * gafanhotos;
            break;

        case 'B':
            valor_servico_total = area_pulverizada * broca;
            break;

        case 'A':
            valor_servico_total = area_pulverizada * ervas_daninhas_gafanhotos;
            break;

        case 'F':
            valor_servico_total = area_pulverizada * ervas_daninhas_broca;
            break;

        case 'H':
            valor_servico_total = area_pulverizada * gafanhotos_broca;
            break;

        case 'T':
            valor_servico_total = area_pulverizada * todos;
            break;
        
        default:
            break;
    }

    float valor_servico_final = valor_servico_total;
    float valor_desconto_area = 0, valor_desconto_maior_750 = 0, valor_desconto_total = 0;

    if (area_pulverizada > 10)
    {
        valor_desconto_area = valor_servico_total * 5 / 100;
        valor_servico_final -= valor_desconto_area;
        valor_desconto_total += valor_desconto_area;
    }

    if (valor_servico_total > 750.00)
    {
        valor_desconto_maior_750 = (valor_servico_total - 750) * 10 / 100;
        valor_servico_final -= valor_desconto_maior_750;
        valor_desconto_total += valor_desconto_maior_750;
    }

    printf("\nValor total do servi�o: R$%.2f", valor_servico_total);
    printf("\nValor total do desconto: R$%.2f", valor_desconto_total);
    printf("\nValor final do servi�o: R$%.2f", valor_servico_final);

    printf("\n\n");
}