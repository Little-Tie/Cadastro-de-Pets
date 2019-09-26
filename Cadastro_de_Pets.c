#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct no{
	char nome[12];
	char especie[20];
	char raca[10];
	char sexo;
	int idade;
	struct no *proximo;
};

void novoPet(struct no *lista,char n[12],char e[20], char r[10], char s, int i){
	struct no *novoNo;
	novoNo = (struct no*) malloc(sizeof(struct no));
	strcpy( novoNo->nome, n );
	strcpy( novoNo->especie, e );
	strcpy( novoNo->raca, r );
	strcpy( novoNo->sexo, s );
	novoNo->idade = i;
	novoNo->proximo = (struct no*)NULL;
	
	while (lista->proximo != NULL){
		lista = lista->proximo;
	}
	lista->proximo = novoNo;
}

void abertura(){
	printf("**********************\n");
	printf("***Cadastro de Pets***\n");
	printf("**********************\n\n");
}

void opcoes(){
	printf("Selecione qual tarefa deseja realizar:\n\n");
	printf("Inclusao de um novo Pet: [1]\n");
	printf("Remocao de um Pet: [2]\n");
	printf("Alteracao de informacao: [3]\n");
	printf("Busca de um Pet pelo seu nome: [4]\n");
	printf("Busca de um Pet por especie: [5]\n");
	printf("Busca de um Pet por especie e raca: [6]\n");
	printf("Busca de um Pet por especie, raca e sexo: [7]\n");
	printf("Mostrar a quantidade de Pets cadastrados: [8]\n");
	printf("Mostrar a quantidade de Pets de X especie: [9]\n");
	printf("Listagem de todos os Pets cadastrados: [10]\n");
	printf("Sair do Cadastro: [11]\n\n");
	printf("Digite uma opcao: ");
}

int main(){
	
	struct no *primeiroNo;
	primeiroNo = NULL;
	
		int opcao;
		char n[12];
		char e[20];
		char r[10];
		char s; 
		int i;
		
	abertura();
	while(opcao != 11){
		
		opcoes();
		
		scanf("%d",&opcao);
		switch ( opcao )
		{
			case 1:
				printf("\nInsira o nome do Pet: ");
				scanf("%s",&n);
				printf("\nInsira a especie do %s: ",n);
				scanf("%s",&e);
				printf("\nInsira a raca do %s: ",n);
				scanf("%s",&r);
				printf("\nInsira o sexo do %s: ",n);
				scanf("%s",&s);
				printf("\nInsira a idade do %s: ",n);
				scanf("%d",&i);
				//novoPet(primeiroNo,n,e,r,s,i);
				
				opcao = NULL;
				break;
				
			case 2:
				opcao = NULL;
				break;
				
			case 3:
				opcao = NULL;
				break;
				
			case 4:
				opcao = NULL;
				break;
				
			case 5:
				opcao = NULL;
				break;
				
			case 6:
				opcao = NULL;
				break;
				
			case 7:
				opcao = NULL;
				break;
				
			case 8:
				opcao = NULL;
				break;
				
			case 9:
				opcao = NULL;
				break;
				
			case 10:
				opcao = NULL;
				break;
				
			case 11:
				break;
				
			default :
				printf("\nOPCAO INVALIDA!!! Escolher outra\n\n");
		}
	}
	
	printf("\nFim do Cadastro de pet\n");
	
	
	return 0;
}
