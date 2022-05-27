#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 5.2\n");

    int n = 0, cont = 1;
    
    printf("\nDigite um número: ");
    scanf("%d", &n);

    cont = n;

    while (cont >= 1)
    {
        printf("\n%d", cont);
        cont = cont-1;
    }   
    
    printf("\n\n");
}