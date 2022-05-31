#include <stdio.h>
#include <stdlib.h>

int mmc( int n1, int n2)
{

    int r, c;

    for(c = 1;c > 0; c++)
	{
        r = (n1*c) % n2;

        if(r == 0)  break;
    }
    printf("%d", n1*c);

    return (r);


}


int main ()
{

    int  n1, n2;

    scanf("%i %i", &n1, &n2);

    mmc (n1,n2);


    return 0;
}
