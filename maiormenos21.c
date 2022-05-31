//Algoritmo maior menor
#include <stdio.h>

int main ()
{
int v[10], c, me=10000, ma=-1000000;
float resul, tot;

for (c = 0; c < 10; c++)
{
	scanf ("%d", &v[c]);
	if (v[c] > ma)
	{
		ma = v[c];
	}
	if (v[c] < me)
	{
		me = v[c];
	}
}
resul = (ma + me);
tot = resul/2;

printf ("%.2f", tot);

return (0);
}
