/*
    Lista 02 - Exerc�cio 20
    Leia  as  notas  de  duas  provas  e  de  um  trabalho  (todos  os  valores  entre  0  e  10)  e  a  quantidade  de  faltas, 
    definindo e imprimindo se ele foi aprovado, reprovado, reprovado por falta ou se far� prova final.  
    O  aluno  ser�  reprovado por falta  se  faltou  a  mais  de  15  aulas. 
    Aluno  ser�  aprovado  se  n�o  for  reprovado  por  falta  e  sua  m�dia  for  maior  ou  igual  a  7,0.  
    Caso  tenha  m�dia  menor  que  4,0,  ent�o estar� reprovado. 
    Se n�o for nenhuma dessas situa��es, ent�o dever� fazer prova final. 
    O c�lculo da m�dia deve ser feito com peso 3 para a 1� prova, peso 5 para a 2� prova e peso 2 para o trabalho. 
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERC�CIO 20\n");

    float nota_prova1 = 0, nota_prova2 = 0, nota_trabalho = 0;
    int quantidade_faltas = 0;

    printf("\nDigite a nota da primeira prova: ");
    scanf("%f", &nota_prova1);

    printf("\nDigite a nota da segunda prova: ");
    scanf("%f", &nota_prova2);

    printf("\nDigite a nota do trabalho: ");
    scanf("%f", &nota_prova2);

    printf("\nDigite a quantidade de faltas: ");
    scanf("%d", &quantidade_faltas);

    if ((nota_prova1 < 0 || nota_prova1 > 10) || (nota_prova2 < 0 || nota_prova2 > 10) ||(nota_trabalho < 0 || nota_trabalho > 10) || quantidade_faltas < 0)
        printf("\nNota(s) inv�lida(s) ou quantidade de faltas inv�lida!");

    else
    {
        float soma = nota_prova1 * 3 + nota_prova2 * 5 + nota_trabalho * 2;
        float media = soma / 10;

        if (quantidade_faltas > 15)
            printf("\nReprovado por falta");

        else if (media >= 7)
            printf("\nAprovado");
        
        else if (media < 4)
            printf("\nReprovado");
        
        else
            printf("\nFar� prova final");
    }

    printf("\n\n");
}