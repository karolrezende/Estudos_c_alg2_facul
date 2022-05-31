#include <stdio.h>

int fat(int num)
{
if (num == 1 || num==0)
    return 1;
else 
	return num * fat (num-1);
}

int main()
{
	int num;
scanf("%d", &num);

if (num < 0)
{
	printf ("Numero invalido");
}
else
{
	printf ("%d", fat(num));
}
}
