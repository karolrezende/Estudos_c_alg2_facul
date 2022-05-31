#include <stdio.h>
#include <math.h>

int main (){

    int n1, n2, c, s, contador=0, perfeito;

    scanf("%d %d", &n1, &n2);

     if( n1 > n2)
	 {
        printf("Intervalo invalido");
        return 0;
     }
	 else
     if(n1 <=0)
	 {
        printf("Intervalo invalido");
        return 0;
     }
	 else
     if (n1 <= n2)
	 {
         for ( perfeito = n1; perfeito <= n2;perfeito++)
		 {
            s = 0;
             for (c = 1; c <= perfeito-1 ; c++)
			 {
                 if(perfeito % c == 0)
				 {
                     s += c;
                 }
             }
             if (s == perfeito) 
			 {
                 contador++;
                 printf("%d\n", perfeito);
             }

        }
        printf("TOTAL: %d", contador);

     }
	 else 

     printf("Intervalo invalido");

     return 0;
}
