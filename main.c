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
	FILE *arq = fopen("saldos.txt", "w+"); //Grava no txt, os saldos apos cada interacao.
	Usuario usuarioPadrao, deposito, saque;
	
	int opcao = 1;
	
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
				verde();
				checasaldo(saldo);
				break;
			case 0:
				fclose(arq);
				vermelho();
				printf("Obrigado por utilizar o IFBank! Ate mais!\n");
				break;
			default:
				printf("Digite uma opção valida!\n");
		}
	} while (opcao);
	return 0;
}
