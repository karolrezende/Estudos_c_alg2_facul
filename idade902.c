#include <stdio.h>
#include <string.h>

typedef struct ficha
  {
    char nome[20]; 
	int id;
  }registro; 

int main ()
{
int c;
registro pessoas[10];

for (c=0; c <10; c++)
{
	scanf ("%s %d", pessoas[c].nome, &pessoas[c].id);
	pessoas[c].id = 2021 - pessoas[c].id;
	if (pessoas[c].id > 1990)
	printf("%s\n", pessoas[c].nome);
}
return 0;
}
