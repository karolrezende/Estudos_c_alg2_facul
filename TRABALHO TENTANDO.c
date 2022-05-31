#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char nome[20];
	char email [20];
	char telefone[11];
	char sexo[10];
} pessoa; 

void menu();
void inserir();
void editar();
void excluir();
void visualizar();
void sair();

int main (int argc, char const *argv[])
{
	
	menu();
	
	return 0;
}

void menu(){
	int op;
	do{
	system("cls");
	
	printf ("1 - Inserir\n");
	printf ("2 - Editar\n");
	printf ("3 - Excluir\n");
	printf ("4 - Visualizar\n");
	printf("0 - Sair\n");
	scanf("%d",&op);
	getchar();
	switch(op){
		case 1:
			inserir();
		break;	
		case 2:
			editar();
			break;
		case 3:
			excluir();
			break;
		case 4:
			sair();
			break;
		case 5:
			visualizar ();
			break;
	}
	getchar();
	}while(op != 0);
}


void inserir ()
{
system("cls");
pessoa n1[10];
pessoa t1[10];
pessoa e1[10];
pessoa s1[10];

int c; 

	for (c = 0; c < 10; c++)
	{
	
	printf ("Digite seu nome:");
	scanf ("%s", n1[c].nome);
	printf ("Digite seu email:");
	scanf ("%s", e1[c].email);
	printf ("Digite seu telefone:");
	scanf ("%s", t1[c].telefone);
	printf ("Digite seu sexo:");
	scanf ("%s", s1[c].sexo);
	}
	printf ("Cadastro concluído com sucesso!");	
	
void editar ()
{
	system("cls");
	char nome[20];

	printf ("Digite seu nome:");
	fgets (nome, 100, stdin);
	if (nome == n1[c].nome)
	{
	strcpy (n1[c].nome , nome);
	}
	printf ("Editado com sucesso!");
}

}
void excluir ()
{
system("cls");
	
}

void visualizar ()
{
system("cls");

	int c;
	
	for (c=0; c < 10; c++)
	{
		printf ("Nome: %s", pessoa[c].nome);
		printf ("Telefone: %s", pessoa[c].telefone);
		printf ("Email: %s", pessoa[c].email);
		printf ("Sexo: %s", pessoa[c].sexo);
	}
	
}
void vetor ()
{
	
	FILE *pont_arq_pessoa;
	pont_arq_pessoa = fopen ("PESSOA.txt", "r");

pessoa n[10];
pessoa t[10];
pessoa e[10];
pessoa s[10];

int c;
if (pont_arq_pessoa == NULL)
{
	printf ("Não foi possível abrir o arquivo");
}
else
{
for (c = 0; c < 10; c++)
fscanf((pont_arq_pessoa, "%s;%s;%s;%s", n[c].nome, e[c].email, t[c].telefone, s[c].sexo) !=EOF);
}







