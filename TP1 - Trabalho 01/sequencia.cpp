/*
    Trabalho 01 - Quest�o 04 - Programa: sequencia.cpp (3,0 pontos) 
    Crie  um  programa  C  para  ler  uma  sequ�ncia  S  de  k  n�meros  inteiros,  onde  k  �  fornecido 
    pelo usu�rio (S = {n1, n2, n3, n4, ..., nk}). 
    Em seguida, o programa deve verificar se existem 
    duas ou mais subsequ�ncias id�nticas de tamanho t em S (onde t tamb�m � fornecido pelo usu�rio). 
    Caso existam, o programa deve imprimir a sequ�ncia e a quantidade de vezes em que ela aparece. 
    Caso contr�rio, o programa deve imprimir "N�o existe". 

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
    N�o existe 

    Restri��es: 
    a) k >= 3. Se k < 3, ent�o solicite novamente o valor at� o usu�rio digitar corretamente. 
    b) 2 <= t  <  k.  Se  t  <  2  ou  t >=  k,  ent�o  solicite  novamente  o  valor  at�  o  usu�rio  digitar 
    corretamente. 
    c) Todo o c�digo dever� estar implementado na fun��o main. 
    d) N�o s�o permitidas vari�veis globais.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("TRABALHO 01 - QUEST�O 04\n");

    int k = 0;

    do
    {
        printf("\nDigite a quantidade de n�meros inteiros da sequ�ncia: ");
        scanf("%d", &k);

        if (k < 3)
            printf("\nA quantidade de n�meros inteiros da sequ�ncia deve ser maior ou igual a 3! Por favor, digite novamente");

    } while (k < 3);

    int s[k];

    printf("\nDigite os n�meros inteiros nas posi��es correspondentes da sequ�ncia:");
    printf("\n");

    for (int i = 0; i < k; i++)
    {
        printf("N�mero inteiro da posi��o %d da sequ�ncia: ", i);
        scanf("%d", &s[i]);
    }

    int t = 0;

    do
    {
        printf("\nDigite o tamanho da subsequ�ncia a ser analisada na sequ�ncia: ");
        scanf("%d", &t);

        if (t < 2)
            printf("\nO Tamanho da subsequ�ncia deve ser maior ou igual a 2! Por favor, digite novamente");
        
        else if (t >= k)
            printf("\nO Tamanho da subsequ�ncia deve ser menor do que %d! Por favor, digite novamente", k);

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
            printf("\nN�o existe");

    printf("\n\n");
}