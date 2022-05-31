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
char dignome, digsenha;
id pessoas[10];

for (c = 0; c <= 10; c++)
{
scanf ("%d %s %s", &pessoas[c].id, pessoas[c].nome, pessoas[c].senha);
scanf ("%s %s", dignome, digsenha);
if (dignome == pessoas[c].nome && digsenha == pessoas[c].senha)
printf("%d", pessoas[c].id);
}

return 0;
}	
