#include<stdio.h>

int main() 
{
    char n[100];
    int c;
    
    fgets(n, 99, stdin);
    
    for (c = 0; n[c] != 0; c++) 
	{
    if (n[c] != ' ' && (c == 0 || n[c - 1] == ' ')) 
    {
	printf("%c", n[c]);
	}
    }
}
