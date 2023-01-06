#include <stdio.h>
#include <stdlib.h>
#include "funcoesmatematicas.h"
#include "funcoesbanco.h"

typedef struct
{
	float deposito;
	float saque;
} Usuario;

int main()
{
	FILE *arq;
	int opcao = 1;
	Usuario usuario, deposito, saque;
	
	verde();
	entradastr("Bem vindo ao IFBank 2023");
	entradaint("Bem vindo ao IFBank 2023");
	printf(". Pressione qualquer tecla para continuar.\n");
	getchar();

	system("clear");
	//logincpf(cpf);

	do {
		opbanco();
		scanf("%d", &opcao);
		system("clear");

		switch (opcao)
		{
			case 1:
				depositar(usuario.deposito);
				break;
			case 2:
				sacar(usuario.saque);
				break;
			case 3:
				checasaldo(saldo);
				break;
			case 0:
				printf("Obrigado por utilizar o IFBank! Até mais!\n");
				break;
			default:
				vermelho();
				printf("Digite uma opção válida!\n");
		}
	} while (opcao);
	return 0;
}
