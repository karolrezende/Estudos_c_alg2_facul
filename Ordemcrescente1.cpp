#include <stdio.h>
#include <string.h>

typedef struct ficha
  {
    char nome[20]; 
	char end[20];
	char email[50]; 
	char tel[14];
  }registro; 

int main ()
{
int c;
registro pessoas[5];
for (c = 0; c < 3; c++)
{
	scanf("%s %s %s %s", pessoas[c].nome, pessoas[c].end, pessoas[c].email, pessoas[c].tel); 
	
}
	for (c = 0; c < 3; c++)
	{ 
	if(strcmp(pessoas[c].nome, pessoas[c+1].nome)<0)
	printf("%s %s %s %s\n", pessoas[c].nome, pessoas[c].end, pessoas[c].email, pessoas[c].tel);
	}
  return 0;
}
