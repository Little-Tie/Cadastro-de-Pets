#include <stdlib.h>
#include <stdio.h>

struct no{
	char nome[12];
	char especie[20];
	char raca[10];
	char sexo;
	int idade;
	struct no *proximo;
};

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
	printf("Listagem de todos os Pets cadastrados: [10]\n\n");
	printf("Digite uma opcao: ");
}

int main(){
	
	struct no *primeiroNo;
	primeiroNo = NULL;
	
	abertura();
	opcoes();
	
	int opcao;
	
	scanf("%d",&opcao);
	switch ( opcao )
	{
		case 1:
			break;
			
		case 2:
			break;
			
		case 3:
			break;
			
		case 4:
			break;
			
		case 5:
			break;
			
		case 6:
			break;
			
		case 7:
			break;
			
		case 8:
			break;
			
		case 9:
			break;
			
		case 10:
			break;
			
		default :
			printf("\nOPCAO INVALIDA!!! Escolher outra\n\n");
	}
	
	
	
	return 0;
}
