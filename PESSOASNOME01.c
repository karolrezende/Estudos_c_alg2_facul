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
char comp;
registro pessoas[10];
for (c = 0; c < 10; c++)
{
	scanf("%s %s %s %s", pessoas[c].nome, pessoas[c].end, pessoas[c].email, pessoas[c].tel); 
	
}
	for (c = 0; c < 10; c++)
       for(p= 0; p < c; p++)
	{
        if(strcmp(pessoas[p].nome, pessoas[p+1].nome) > 0)
		{
            (strcpy(comp, pessoas[p].nome));
            (strcpy(pessoas[p].nome,pessoas[p+1].nome));
            (strcpy(pessoas[p+1].nome, comp));
        }
    }
    	for (c = 0; c < 10; c++)
		{
        for(p = 0; p < 10; p++)
		{
           printf("%s",pessoas[p].nome);
        }
		}
  return 0;
}
