#include <stdio.h>
#include <string.h>

int main ()
{
char validaCPF(char *cpf)
{

int icpf[12];  
int i ,somador=0,digito1, result1, result2, digito2, valor;  

for(i = 0; i < 11 ; i++)  
	{  
	icpf[i] = cpf[i]-48;  
	}  
for(i=0;i<9;i++)  
	{  
	somador+=icpf[i]*(10-i);  
	}  
  
	result1 = somador % 11 ;  
  
if( (result1==0) || (result1==1) )  
	{  
	digito1=0;  
	}  
else  
	{  
	digito1 = 11-result1;  
	}  
somador=0;  
for(i=0;i<10;i++)  
	{  
	somador+=icpf[i]*(11-i);  
	}  
  
	valor=(somador/11)*11;  
	result2=somador-valor;  
  
if( (result2==0) || (result2==1) )  
	{  
	digito2=0;  
	}  
  
else  
	{  
	digito2=11-result2;  
	}  
if(icpf[0] == icpf[1] && icpf[1] == icpf[2]&& icpf[2]  == icpf[3] && icpf[3] == icpf[4] && icpf[4] == icpf[5] && icpf[5] == icpf[6] && icpf[6] == icpf[7] && icpf[7] == icpf[8] && icpf[8] ==  icpf[9]){
    printf("Nao eh valido");  
   
} 
else if (!isdigit(cpf[0]) || !isdigit(cpf[1]) || !isdigit(cpf[2]) || !isdigit(cpf[3]) || !isdigit(cpf[4]) || !isdigit(cpf[5]) || !isdigit(cpf[6]) || !isdigit(cpf[7]) || !isdigit(cpf[8]) || !isdigit(cpf[9]) || !isdigit(cpf[10])){
    printf("Numero invalido");
}
  
else if((digito1==icpf[9]) && (digito2==icpf[10]))  
{  
printf("Eh valido");  
}  
else  
{  
printf("Nao eh valido");  
}  
}
return 0;
}
