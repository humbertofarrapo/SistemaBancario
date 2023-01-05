#include <stdio.h>
#include <stdlib.h>
#include "funcoesmatematicas.h"
#include "funcoesbanco.h"
	//FALTA MANIPULAR ARQUIVOS + ADICIONAR E MELHORAR FUNCOES
int main()
{
	FILE * fp;
	int opcao = 1;
	float deposito, saque;
	char cpf[12];

	verde();
	entradastr("Bem vindo ao IFBank");
	entradaint("2023");
	printf(". Pressione qualquer tecla para continuar.\n");
	getchar();

	system("clear");
	logincpf(cpf);

	do {
		opbanco();
		scanf("%d", &opcao);
		system("clear");

		switch (opcao)
		{
			case 1:
				depositar(deposito);
				break;
			case 2:
				sacar(saque);
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
