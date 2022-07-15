/*
    Parte 04 - Exercício 12
    Leia um caractere op, representando uma operação aritmética (+, -, *, /) e, em seguida, dois números reais a e b. 
    Imprima a expressão matemática junto com o seu resultado no formato:

    a op b = resultado
    
    Imprima mensagens de erro para as seguintes situações:
    a) Operador inválido
    b) Divisão por zero
*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 04 - EXERCÍCIO 12\n");

    char op = ' ';
    float a = 0, b = 0, resultado = 0;
    bool operacao_invalida = false;

    printf("\nDigite uma opção (+ | - | * | /): ");
    op = getchar();

    if (op == '+' || op == '-' || op == '*' || op == '/')
    {
        printf("\nDigite o primeiro número: ");
        scanf("%f", &a);

        printf("\nDigite o segundo número: ");
        scanf("%f", &b);

        switch (op)
        {
            case '+':
                resultado = a + b;
                break;
            
            case '-':
                resultado = a - b;
                break;

            case '*':
                resultado = a * b;
                break;

            case '/':
                if (b == 0)
                    operacao_invalida = true;

                else
                    resultado = a / b;
                break;
            
            default:
                printf("\nOperador inválido");
                break;
        }
        if (operacao_invalida == false) 
            printf("\n%f %c %f = %f", a, op, b, resultado);

        else
            printf("\nNão é possível dividir por zero");
    }

    else
        printf("\nOperador inválido");

    printf("\n\n");
}