#include <stdio.h>

int main ()
{
    float v[10] = {0};
    int c;
    char a[15];

    for (c = 0; c < 10; ++c)
    {
    scanf("%s %f",&a, &v[c]);
    if (v[c] >= 6)
    {
    printf ("%s\n", a);
    }
    }

return (0);
}
