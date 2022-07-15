/*
    Parte 04 - Exerc�cio 12
    Leia um caractere op, representando uma opera��o aritm�tica (+, -, *, /) e, em seguida, dois n�meros reais a e b. 
    Imprima a express�o matem�tica junto com o seu resultado no formato:

    a op b = resultado
    
    Imprima mensagens de erro para as seguintes situa��es:
    a) Operador inv�lido
    b) Divis�o por zero
*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 04 - EXERC�CIO 12\n");

    char op = ' ';
    float a = 0, b = 0, resultado = 0;
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