#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 4.12\n");

    char op = ' ';
    float a = 0, b = 0, resultado;
    bool operacao_invalida = false;

    printf("\nDigite uma op��o (+ | - | * | /): ");
    op = getchar();

    if (op == '+' || op == '-' || op == '*' || op == '/')
    {
        printf("\nDigite o primeiro n�mero: ");
        scanf("%f", &a);

        printf("\nDigite o segundo n�mero: ");
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
                printf("\nOperador inv�lido");
                break;
        }
        if (operacao_invalida == false) 
            printf("\n%f %c %f = %f", a, op, b, resultado);

        else
            printf("\nN�o � poss�vel dividir por zero");
    }

    else
        printf("\nOperador inv�lido");

    printf("\n\n");
}