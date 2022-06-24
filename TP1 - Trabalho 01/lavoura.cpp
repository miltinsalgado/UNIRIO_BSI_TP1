/*
    Trabalho 01 - Questão 01 - Programa: lavoura.cpp (2,0 pontos) 
    Uma  empresa  utiliza  aviões  para  pulverizar  lavouras.  O  valor  do  serviço  cobrado  pela 
    empresa  depende  da  área  a  ser  pulverizada  e  do  tipo  da  pulverização,  conforme  tabela  a seguir: 

    Tipo da pulverização                    Valor 
    E - ervas daninhas                      R$ 50,00 / acre
    G - gafanhotos                          R$ 100,00 / acre
    B - broca                               R$ 150,00 / acre
    A - ervas daninhas + gafanhotos         R$ 140,00 / acre
    F - ervas daninhas + broca              R$ 190,00 / acre
    H - gafanhotos + broca                  R$ 240,00 / acre
    T - todos                               R$ 270,00 / acre

    Se  a  área  a  ser  pulverizada  for  superior  a  10  acres,  o  fazendeiro  tem  um  desconto  de  5% 
    sobre o valor do serviço. Além disso, se o valor do serviço for maior do que R$ 750,00, o 
    fazendeiro  tem  um  desconto  de  10%  sobre  o  valor  que  ultrapassar  os  R$  750,00.  
    Caso ambos os descontos se apliquem, o desconto da área é calculado primeiro. 

    Crie  um  programa  em  C  para  ler  os  dados  da  pulverização  e  imprimir  o  valor  total  do 
    serviço, o valor do desconto (se houver) e o valor final a ser pago pelo fazendeiro. 

    Restrições: 
    a) Quantidade de acres > 0. Se valor digitado < 0, então solicite novamente o valor até o 
    usuário digitar corretamente. 
    b) O tipo da pulverização deve ser uma das opções da tabela (letra maiúscula ou 
    minúscula).  Se  o  valor  digitado  não  corresponder  a  nenhum  item  da  tabela,  solicite 
    novamente o valor até o usuário digitar corretamente. 
    c) Todo o código deverá estar implementado na função main. 
    d) Não são permitidas variáveis globais.
*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("TRABALHO 01 - QUESTÃO 01\n");

    printf("\nTipo da pulverização                    Valor");
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
        printf("\nDigite a área a ser pulverizada: ");
        scanf("%d", &area_pulverizada);

        if (area_pulverizada <= 0)
        {
            entrada_valida = false;
            printf("\nA área a ser pulverizada deve ser maior do que 0! Por favor, digite novamente");
        }

        else
        {
            entrada_valida = true;

            do
            {
                printf("\nDigite o tipo de pulverização: ");
                getchar();
                scanf("%c", &tipo_pulverizacao);
                tipo_pulverizacao = toupper(tipo_pulverizacao);

                if (tipo_pulverizacao != 'E' && tipo_pulverizacao != 'G' && tipo_pulverizacao != 'B' && tipo_pulverizacao != 'A' && tipo_pulverizacao != 'F' && tipo_pulverizacao != 'H' && tipo_pulverizacao != 'T')
                {
                    entrada_valida = false;
                    printf("\nO tipo de pulverização digitado não está presente na tabela! Por favor, digite novamente");
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

    printf("\nValor total do serviço: R$%.2f", valor_servico_total);
    printf("\nValor total do desconto: R$%.2f", valor_desconto_total);
    printf("\nValor final do serviço: R$%.2f", valor_servico_final);

    printf("\n\n");
}