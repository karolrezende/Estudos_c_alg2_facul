#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct // structs
{
	char tel[11];
	int idtel, id;
	
} tel;
typedef struct
{
	char email [20];
	int idemail, id;
	
} email;
typedef struct 
{
	int id;
	char nome [50];

} nome; 
typedef struct
{
	int id, idsexo;
	char sexo [10];
	
}sexo; // structs

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

void vetor() //ponteiros
{
FILE *pont_arq_nome, *pont_arq_email, *pont_arq_tel, *pont_arq_sexo;
pont_arq_nome = fopen ("NOMES.txt", "r");
pont_arq_email = fopen ("EMAIL.txt", "r");
pont_arq_tel = fopen ("TELEFONE.txt", "r"); 
pont_arq_sexo = fopen ("SEXO.txt", "r"); //ponteiros

int ctel = 0, cnome = 0, cemail = 0, csexo =0, uidtel = 0, uidemail, uidnome, uidsexo;

//vetores
nome n[10];
tel t[10];
email e[10];
sexo s[10];

//NOME
if (pont_arq_nome == NULL) //nome
{
	printf ("Não é possível abrir o arquivo nome");
}
else
{
	while ((fscanf(pont_arq_nome, "%d;%c", &n[cnome].id, &n[cnome].nome)!=EOF))
	if (n[cnome].id > uidnome)
	{
		uidnome = n[cnome].id;
	}
	cnome ++;
}

//TELEFONE
if (pont_arq_tel == NULL) 
{
	printf ("Não é possível abrir o arquivo telefone");
}
else
{
	while ((fscanf (pont_arq_tel, "%d;%d;%c", &t[ctel].idtel, &t[ctel].id, &t[ctel].tel)!=EOF))

	if (t[ctel].idtel > uidtel)
	{
		uidtel = t[ctel].idtel;
	}
	ctel ++;
}

//EMAIL
if (pont_arq_email == NULL) //email
{
	printf ("Não é possível abrir o arquivo email");
}
else
{
while ((fscanf (pont_arq_email, "%d;%d;%c", &e[cemail].idemail, &e[cemail].id, &e[cemail].email)!=EOF))
	if (e[cemail].idemail > uidemail)
	{
		uidemail = e[cemail].idemail;
	}
	cemail ++;
}

//SEXO
if (pont_arq_nome == NULL) //sexo
{
	printf ("Não é possível abrir o arquivo sexo");
}
else
{
	while ((fscanf(pont_arq_sexo, "%d;%d;%c", &s[csexo].idsexo, &s[csexo].id, &s[csexo].sexo)!= EOF))
		if (s[csexo].idsexo > uidsexo)
	{
		uidsexo = s[csexo].idsexo;
	}
	cemail ++;
}

}
void inserir()
{
	int op, idpessoa = 5;
	char nome[20], tel [11], email [20], sexo [10];

	do
	{
	system("cls");	
	for (idpessoa = 5; idpessoa <= 10; idpessoa++)
	{
	printf ("Nome:");
	scanf ("%s", nome);
	printf ("Telefone:");
	scanf ("%s", tel);
	printf ("Email:");
	scanf ( "%s", email);
	printf ("Sexo:");
	scanf ("%s", sexo);
	}
	printf ("Cadastro concluído com sucesso!");
	printf("\n1 - Continuar\n0 - Sair");
	scanf("%d",&op);
	getchar ();
	
	}while  (op !=0);
	
}
void editar ()
{
	int idtodos;
	char name [20], nome[20];
	
	
	printf("Digite seu id: %d");
	scanf (&idtodos);
	
	for (idtodos == id)
	name = nome;
	
	for (idtodos == id)
	name = n[cnome].nome;
	
}	


