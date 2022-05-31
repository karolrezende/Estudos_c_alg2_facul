#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct // structs
{
	char telefone [11];
	int idtel, idpessoa;
} tel;
typedef struct
{
	char email [20];
	int idemail, idpessoa;
} email;
typedef struct 
{
	int idpessoa;
	char nome [50];
	tel listatel [5];
	email listaemail [5];
} nome; // structs

int main (void)
{//
nome listanome[1000];
tel listatelefone[1000];
email listaemail[1000];
//

int c_nome, c_tel, c_email;
int u_id_nome = 0, u_id_tel = 0, u_id_email = 0;

void vetor() //ponteiros
{
FILE *pont_arq_nome, *pont_arq_email, *pont_arq_tel;
pont_arq_nome = fopen ("NOMES.txt", "r");
pont_arq_email = fopen ("EMAIL.txt", "r");
pont_arq_tel = fopen ("TELEFONE.txt", "r"); //ponteiros

c_tel = 0 
if (pont_arq_telefone == NULL) //telefone (descobrir o ultimo)
{
	printf ("Não é possível abrir o arquivo telefone");
}
else
{

while (fscanf(pont_arq_tel, "%d;%d;%c", &listatel[c_tel].idtel, &listatel[c_tel].idpessoa, &listatel[c_tel).tel)!=EOF))
	if (listatel[c_tel].idtel > u_id_tel)
	{
		u_id_tel = listatel[c_tel].idtel;
	}
	c_tel ++;
}
if (pont_arq_email == NULL) //email (descobrir o ultimo)
{
	printf ("Não é possível abrir o arquivo email");
}
else
{
while (fscanf(pont_arq_email, "%d;%d;%c", &listaemail[c_email].idemail, &listaemail[c_email].idpessoa, &listaemail[c_email).email)!=EOF))
	if (listaemail[c_email].idemail > u_id_email)
	{
		u_id_email = listaemail[c_email].idemail;
	}
	c_email ++;
}
if (pont_arq_nome == NULL)
{
	printf ("Não é possível abrir o arquivo nome");
}
else
{
	int ctel, c;
while (fscanf(pont_arq_nome, "%d;%c", &listanome[c_nome].idnome, &listanome[c_nome].idpessoa)!=EOF))
	if (listanome[c_nome].idnome > u_id_nome)
	{
		u_id_nome = listanome[c_nome].idnome;
	}
	c_nome ++;
}
}
void menu ()
{
    printf("1) Cadastrar\n");
    printf("2) Editar\n");
    printf("3) Consultar\n");
    printf("4) Excluir\n");
    printf("5) Sair\n");
int op;
switch (op)
{

case 2:
	
}
}
return 0;
}
