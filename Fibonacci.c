#include <stdio.h>

int fibo(int n)
{
	int a, b, aux, c;
    a = 0;
    b = 1;
 
    printf("%d ", a);
    printf("%d ", b);

    for(c = 2; c < n; c++) 
{
        aux = a + b;
        a = b;
        b = aux;
		
        printf("%d ", aux);
}
return 0;
}

int main ()
{
	int n;
	scanf("%d", &n);
	if (n <= 0)
	{
		printf("Numero invalido"); 
		return 0;
	}
	fibo(n);
	return 0;
}
