/*
    Trabalho 01 - Questão 04 - Programa: sequencia.cpp (3,0 pontos) 
    Crie  um  programa  C  para  ler  uma  sequência  S  de  k  números  inteiros,  onde  k  é  fornecido 
    pelo usuário (S = {n1, n2, n3, n4, ..., nk}). 
    Em seguida, o programa deve verificar se existem 
    duas ou mais subsequências idênticas de tamanho t em S (onde t também é fornecido pelo usuário). 
    Caso existam, o programa deve imprimir a sequência e a quantidade de vezes em que ela aparece. 
    Caso contrário, o programa deve imprimir "Não existe". 

    Exemplos: 
    k = 6 
    S = { 1, 2, 3, 1, 2, 3 } 
    t = 3 
    1 2 3 - 2x 
    
    k = 5 
    S = { 1, 2, 1, 2, 1 } 
    t = 2 
    1 2 - 2x 
    2 1 - 2x 
    
    k = 7 
    S = { 1, 2, 3, 1, 2, 3, 1 } 
    t = 3 
    1 2 3 - 2x 
    2 3 1 - 2x 
    
    k = 4 
    S = { 1, 1, 1, 1} 
    t = 2 
    1 1 - 3x 
    
    k = 6 
    S = { 5, 8, 11, 13, 4, 7 } 
    t = 3 
    Não existe 

    Restrições: 
    a) k >= 3. Se k < 3, então solicite novamente o valor até o usuário digitar corretamente. 
    b) 2 <= t  <  k.  Se  t  <  2  ou  t >=  k,  então  solicite  novamente  o  valor  até  o  usuário  digitar 
    corretamente. 
    c) Todo o código deverá estar implementado na função main. 
    d) Não são permitidas variáveis globais.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("TRABALHO 01 - QUESTÃO 04\n");

    int k = 0;

    do
    {
        printf("\nDigite a quantidade de números inteiros da sequência: ");
        scanf("%d", &k);

        if (k < 3)
            printf("\nA quantidade de números inteiros da sequência deve ser maior ou igual a 3! Por favor, digite novamente");

    } while (k < 3);

    int s[k];

    printf("\nDigite os números inteiros nas posições correspondentes da sequência:");
    printf("\n");

    for (int i = 0; i < k; i++)
    {
        printf("Número inteiro da posição %d da sequência: ", i);
        scanf("%d", &s[i]);
    }

    int t = 0;

    do
    {
        printf("\nDigite o tamanho da subsequência a ser analisada na sequência: ");
        scanf("%d", &t);

        if (t < 2)
            printf("\nO Tamanho da subsequência deve ser maior ou igual a 2! Por favor, digite novamente");
        
        else if (t >= k)
            printf("\nO Tamanho da subsequência deve ser menor do que %d! Por favor, digite novamente", k);

    } while (t < 2 || t >= k);
    
    printf("\nk = %d", k);
    printf("\nS = { ");

    for (int i = 0; i < k; i++)
    {
        if (i == k - 1)
            printf("%d }", s[i]);
        
        else
            printf("%d, ", s[i]);
    }

    printf("\nt = %d", t);

    int sub_s[t], aux = 0, cont = 0;
    bool subsequencia_igual = false, existe = false, numeros_iguais = false;

    for (int i = 0; i < k; i++)
    {
        cont = 0;

        if (i + t > k)
            break;

        for (int j = i, l = 0; j < i + t; j++, l++)
            sub_s[l] = s[j];

        for (int j = 0; j < i; j++)
        {
            subsequencia_igual = true;

            for (int l = j, m = 0; l < j + t; l++, m++)
            {
                if (sub_s[m] != s[l])
                {
                    subsequencia_igual = false;
                    break;
                }
            }

            if (subsequencia_igual)
                cont++;
        }

        if (cont >= 1)
            continue;

        for (int j = 0; j < k; j++)
        {
            if (j + t > k)
                break;
                
            subsequencia_igual = true;

            for (int l = j, m = 0; l < j + t; l++, m++)
            {
                if (sub_s[m] != s[l])
                {
                    subsequencia_igual = false;
                    break;
                }
            }

            if (subsequencia_igual)
                cont++;
        }

        if (cont >= 2)
        {
            existe = true;
            printf("\n");

            for (int j = 0; j < t; j++)
                printf("%d ", sub_s[j]);

            printf("- %dx", cont);
        }
    }

    if (!existe)
            printf("\nNão existe");

    printf("\n\n");
}