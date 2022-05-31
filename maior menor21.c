//Algoritmo maior menor
#include <stdio.h>

int main ()
{
int v[9], c, me=0, ma=0;
float resul, tot;

for (c = 0; c <= 9; c++)
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
resul = ma + me;
tot = resul/2;

printf ("%.2f", tot);

return 0 ();
}
