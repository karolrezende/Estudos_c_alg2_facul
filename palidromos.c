//palindromo
#include <stdio.h>
#include<string.h>

int main ()
{
	char p[100], i[100];
	int c, v = 0;

	gets (p);
	for(c = 0; p[c]; c++)
	{
    p[c] = tolower(p[c]);
    }  
	strcpy(i, p);
	strrev(i);
	v = strcmp(p, i);
	if (v == 0)
	{
    printf("Eh palindromo", p);
	}	
	else
	{
    printf("Nao eh palindromo", p);
	}
return 0;
}

