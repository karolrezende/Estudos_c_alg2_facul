#include <stdio.h>
#include <string.h>

typedef struct ficha
  {
    char nome[20]; 
	char senha[20];
	int id;
  }id; 

int main ()
{
int c;
char dignome[20], digsenha[20];
id pessoas[10];

for (c = 0; c <= 9; c++)
{
scanf ("%d %s %s", &pessoas[c].id, pessoas[c].nome, pessoas[c].senha);
}

for (c = 0; c <= 9; c++)
{
scanf ("%s %s", dignome, digsenha);
{
	if (strcmp(dignome, pessoas[c].nome)==0)
	{	
	if (strcmp(digsenha, pessoas[c].senha)==0)
	printf("ID: %d", pessoas[c].id);
	}
}
}
return 0;
}	
