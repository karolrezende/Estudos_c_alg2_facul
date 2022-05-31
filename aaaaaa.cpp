#include <stdio.h>
#include <string.h>

struct ficha
  {
    char nome[20]; 
	char end[20];
	char email[50]; 
	int tel[14];
  }; 
struct ficha registro;
int main ()
{
int c;
for (c = 0; c < 9; c++)
{
	scanf("%s",registro.nome); 
	scanf("%s",registro.end); 
	scanf("%s",registro.email); 
	scanf("%d",registro.tel); 
	
	printf("%s %s %s %d", registro.nome, registro.end, registro.email, &registro.tel);
}
  return 0;
}
