#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 4.12\n");

    char op = ' ';
    float a = 0, b = 0, resultado;
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