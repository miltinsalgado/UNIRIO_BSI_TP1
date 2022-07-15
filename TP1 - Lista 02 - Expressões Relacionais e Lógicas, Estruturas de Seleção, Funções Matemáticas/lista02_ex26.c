/*
    Lista 02 - Exercício 26

	Baseado no ano e peso do modelo de um automóvel, uma cidade determina a sua classe e o valor da 
	taxa de registro usando a seguinte tabela:

    Ano do modelo   Peso                Classe      Taxa de Registro
    
	1970 ou antes   Menos de 1200kg 	1	        16,50
					de 1200 a 1700kg 	2	        25,50
					Mais de 1700kg 	    3	        46,50

	1971 a 1979     Menos de 1200kg 	4	        27,00
					de 1200 a 1700kg 	5	        30,50
					Mais de 1700kg 	    6           52,50

	1980 ou depois 	Menos de 3600kg 	7	        19,50
					3600kg ou mais 	    8	        52,50

	Usando esta tabela, leia o ano e o peso do modelo de um automóvel e calcule e imprima a classe e o 
	valor da taxa de registro para o carro.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 26\n");

    int ano_automovel = 0;
	float peso_automovel = 0;

	printf("\nDigite o ano do modelo do automóvel: ");
	scanf("%d", &ano_automovel);

	printf("\nDigite o peso do modelo do automóvel: ");
	scanf("%f", &peso_automovel);

	int classe_automovel = 0;
	float taxa_registro_automovel = 0;

	if (ano_automovel <= 1970)
	{
		if (peso_automovel < 1200)
		{
			classe_automovel = 1;
			taxa_registro_automovel = 16.50;
		}

		else if (peso_automovel >= 1200 && peso_automovel <= 1700)
		{
			classe_automovel = 2;
			taxa_registro_automovel = 25.50;
		}

		else
		{
			classe_automovel = 3;
			taxa_registro_automovel = 46.50;
		}
	}

	else if (ano_automovel >= 1971 && ano_automovel <= 1979)
	{
		if (peso_automovel < 1200)
		{
			classe_automovel = 4;
			taxa_registro_automovel = 27.00;
		}
			
		else if (peso_automovel >= 1200 && peso_automovel <= 1700)
		{
			classe_automovel = 5;
			taxa_registro_automovel = 30.50;
		}

		else
		{
			classe_automovel = 6;
			taxa_registro_automovel = 52.50;
		}
	}

	else
	{
		if (peso_automovel < 3600)
		{
			classe_automovel = 7;
			taxa_registro_automovel = 19.50;
		}

		else
		{
			classe_automovel = 8;
			taxa_registro_automovel = 52.50;
		}
	}

	printf("\nClasse do automóvel: %d", classe_automovel);
	printf("\nTaxa de registro do automóvel: %.2f", taxa_registro_automovel);

    printf("\n\n");
}