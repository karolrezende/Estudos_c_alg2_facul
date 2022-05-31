#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
	int ini, fim, total, soma;
	
	scanf ("%d %d", &ini, &fim);
	
	total = 0;
	soma = 0;
	
	if (ini > fim && ini <= 0)
	{
		printf ("Intervalo Invalido");
	}
	do 
	{
	
		for (total = 0; total <= fim; total++)
		{
			if (ini%total == 0)
			{
			soma += total;
			}
		}
			if (soma == ini)
			{
			printf ("%d %d", ini, total);
			}
		
	} while (ini <= fim);
	
		return 0;
}
