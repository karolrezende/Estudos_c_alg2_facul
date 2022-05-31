#include<stdio.h>
#include<string.h>

int main() 
{
    char p[100], i[100];
	int v = 0, c;
	
	for (c=0; c <= 100; c++)
	{
	scanf ("%s", p[c]);
	strcpy(i[c], p[c]);
    strrev(i[c]);
    v = strcmp(p[c], i[c]);
	if (v == 0)
    printf("Eh palindromo", p);
    else
    printf("Nao eh palindromo", p);
	}	
    
    
return 0;
}
