#include <stdio.h>

int main ()  
{

    float pi = 0;
    int t, c, ss =1;

    scanf("%d", &t);

    for (c =1; c<=t; c++){

        pi = pi + (ss*(4/(float)(c*2-1)));
        ss = ss *-1;

    }
    printf("%.5f",pi);
    return 0;
}
