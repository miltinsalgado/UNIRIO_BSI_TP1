/*
    Parte 08 - Exercício 13
    Baseado na função moldura, implementada anteriormente, crie a função titulo, 
    que recebe uma cadeia de caracteres e imprime um título dentro de uma moldura. 
    A largura da moldura deve ser calculada de tal forma que acomode a cadeia de caracteres.
    Exemplo (ver slides para visualizar): titulo("Programacao C/C++")
    
    Programacao C/C++
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

void titulo (char v[])
{
    setlocale(LC_ALL, "C");

    putchar(218);
    for (int i = 1; i <= strlen(v) + 2; i++)
        putchar(196);
    putchar(191);

    putchar('\n');
    putchar(179);
    putchar(' ');
    printf("%s", v);
    putchar(' ');
    putchar(179);

    putchar('\n');
    putchar(192);
    for (int i = 1; i <= strlen(v) + 2; i++)
        putchar(196);
    putchar(217);
}

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 08 - EXERCÍCIO 13\n");

    char titulo_moldura[100];

    printf("\nDigite o título da moldura: ");
    gets(titulo_moldura);

    titulo(titulo_moldura);
    
    printf("\n\n");
}