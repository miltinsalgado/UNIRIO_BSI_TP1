/*
    Parte 10 - Exercício 02
    Leia o código, a descrição, o preço e a quantidade vendida de n produtos, onde n deve ser fornecido pelo usuário. 
    Ao final, imprima todos os produtos lidos com todos os seus dados e o valor total da venda.
*/

#include <stdio.h>
#include <locale.h>

struct Produto
{
    long long int codigo = 0;
    float preco = 0;
    int quantidade_vendida = 0;
};

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 10 - EXERCÍCIO 02\n");

    int n = 0;

    printf("\nDigite a quantidade de produtos a ser lida: ");
    scanf("%d", &n);

    Produto produto[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nDados do %dº produto", i + 1);
        printf("\n");

        printf("\nDigite o código: ");
        scanf("%lld", &produto[i].codigo);

        printf("Digite o preço: ");
        scanf("%f", &produto[i].preco);

        printf("Digite a quantidade vendida: ");
        scanf("%d", &produto[i].quantidade_vendida);
    }

    float valor_total_venda = 0;

    printf("\nDados da venda");
    
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        printf("\nDados do %dº produto", i + 1);
        printf("\n");

        printf("\nCódigo: %lld", produto[i].codigo);
        printf("\nPreço do produto (em R$/reais): R$ %.2f", produto[i].preco);
        printf("\nQuantidade vendida: %d", produto[i].quantidade_vendida);

        valor_total_venda += produto[i].preco * produto[i].quantidade_vendida;
    }

    printf("\n");
    printf("\nValor total da venda (em R$/reais): R$ %.2f", valor_total_venda);

    printf("\n\n");
}