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
registro pessoas[10];
for (c = 0; c < 10; c++)
{
	scanf("%s %s %s %s", pessoas[c].nome, pessoas[c].end, pessoas[c].email, pessoas[c].tel); 
	
}

  return 0;
}
