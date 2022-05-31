#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ALUNOS 50
typedef struct{
	char nome[50];
	float notas[4];
	int ativo;
}Aluno;
Aluno alunos[MAX_ALUNOS];

void menu();
void inserir();
void editar();
void excluir();
void reprovado();
void listar();
void aprovados();

int main (int argc, char const *argv[]){
	
	menu();
	
	return 0;
}

void menu(){
	 // Windows ....system("clear") para Linux
	int op;
	do{
	system("cls");
	printf("\n1-Cadastrar Aluno\n2-Remover Aluno\n");
	printf("3-Alunos Reprovado\n4-Pesquisar Alunos\n");
	printf("5-Listar\n6-Alunos Aprovados\n0-Sair\n");
	scanf("%d",&op);
	getchar();
	switch(op){
		case 1:
			cadastrar();
		break;	
		case 2:
			remover();
			break;
		case 3:
			listar();
		break;
	}
	getchar();
	}while(op != 0);
	
}

void cadastrar(){
	
	char nome[50];
	float notas[4];
	int op,i;
	
	do{
	    system("cls");//Limpar
		printf("\nNome:");
		fgets(nome,sizeof(nome),stdin);
		printf("\n1 - Bimestre:");
		scanf("%f", &notas[0]);
		printf("\n2 - Bimestre:");
		scanf("%f", &notas[1]);
		printf("\n3 - Bimestre:");
		scanf("%f", &notas[2]);
		printf("\n4 - Bimestre:");
		scanf("%f", &notas[3]);
		
		for(i = 0; i < MAX_ALUNOS; i++){
			
			if(alunos[i].ativo ==0){
				alunos[i].notas[0] = notas [0];
				alunos[i].notas[1] = notas [1];
				alunos[i].notas[2] = notas [2];
				alunos[i].notas[3] = notas [3];
				strcpy(alunos[i].nome, nome);
				alunos[i].ativo =1;
				break;
			}
		}
		
		printf("\n1- Continuar\n0- Sair");
		scanf("%d",&op);
		getchar ();
	}while(op!= 0);
}
void remover(){
	int matricula;
	listar();
	printf("\nQual a matricula a ser removida:");
	scanf("%d",&matricula);
	--matricula;
	alunos[matricula].ativo =0;
	printf("\nAlunos excluido com sucesso!\n");
	getchar();
}
}
void listar(){

	int i;
	system("cls");
	printf("\nLISTA DE ALUNOS\n");
	for (i = 0; i <MAX_ALUNOS; i++ ){
		
		if(alunos[i].ativo == 1){
	
		printf("Matricula:%d\n",i+1);
		printf("Nome: %s\n",alunos[i].nome);
		printf("1 Bim: %0.2f\n",alunos[i].notas[0]);
		printf("2 Bim: %0.2f\n",alunos[i].notas[1]);
		printf("3 Bim: %0.2f\n",alunos[i].notas[2]);
		printf("4 Bim: %0.2f\n",alunos[i].notas[3]);
		printf("--------------\n");	
		}	
	}
}

}
