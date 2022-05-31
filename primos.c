#include <stdio.h>
#include <stdlib.h>

int primos(int n)
{
 int i;
 for (i = 2; i <= n / 2; i++) 
{
    if (n % i == 0) 
    {
      printf("Nao eh primo");
      break;
    }
	else
    if(n % i != 0)
	{
       printf("Eh primo");
       break ;
    }
}
     return (n);
}
int main ()
{
    int n;
    scanf ("%d", &n);

    if(n ==1 ){
        printf("Nao eh primo");
        return 0;
    }
    if (n <= 0)
{
    printf ("Numero invalido");

}
    primos (n);
    return 0;
}
