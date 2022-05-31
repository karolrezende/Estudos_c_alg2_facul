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
int c, abc[26]={0} ;
registro pessoas[5];
for (c = 0; c < 3; c++)
{
	scanf("%s %s %s %s", pessoas[c].nome, pessoas[c].end, pessoas[c].email, pessoas[c].tel); 
	
}
	for (c = 0; c < 3; c++)
	{ 
	if (pessoas[c].nome > 97 && pessoas[c].nome <= 122)
	pessoas[c].nome -= 32;
	abc[pessoas[c].nome - 65]++;
	for (c = 0; c < 27; c++)
	{
	if (pessoas[c]nome>0)
	printf("%s %s %s %s\n", i+65, pessoas[c].nome, pessoas[c].end, pessoas[c].email, pessoas[c].tel);
    else
    printf("%s %s %s %s\n", pessoas[c].nome, pessoas[c].end, pessoas[c].email, pessoas[c].tel);
	}
  return 0;
}
