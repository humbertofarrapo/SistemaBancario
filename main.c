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
	FILE *arq = fopen("alteracoesBancarias.txt", "w+");;
	int opcao = 1;
	Usuario usuarioPadrao, deposito, saque;
	
	verde();
	saudacao();
	telalogin();

	do {
		opbanco();
		scanf("%d", &opcao);
		system("clear");

		switch (opcao)
		{
			case 1:
				fprintf(arq, "%f", depositar(usuarioPadrao.deposito));
				break;
			case 2:
				fprintf(arq, "%f", sacar(usuarioPadrao.saque));
				break;
			case 3:
				checasaldo(saldo);
				break;
			case 0:
				printf("Obrigado por utilizar o IFBank! Até mais!\n");
				fclose(arq);
				break;
			default:
				vermelho();
				printf("Digite uma opção válida!\n");
		}
	} while (opcao);
	return 0;
}
