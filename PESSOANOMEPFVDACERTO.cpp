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
int c, p;
char comp[20];
registro pessoas[10];
for (c = 0; c < 10; c++)
{
	scanf("%s %s %s %s", pessoas[c].nome, pessoas[c].end, pessoas[c].email, pessoas[c].tel); 
	
	for(p= 0; p < c; p++)
	{
        if(strcmp(pessoas[c].nome, pessoas[p].nome) < 0) 
		{
		strcpy(comp, pessoas[c].nome);
		strcpy(pessoas[c].nome, pessoas[p].nome);
		strcpy(pessoas[p].nome, comp);
		}
	}
	
}
    	for (c = 0; c < 10; c++)
		{
           printf("%s",pessoas[p].nome);
        }
  return 0;
}
