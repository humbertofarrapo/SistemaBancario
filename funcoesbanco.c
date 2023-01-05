#include <stdio.h>
#include <stdlib.h>
#include "funcoesmatematicas.h"

static float saldo = 2023.00;

void verde()
{
	printf("\033[1;32m");
}

void vermelho()
{
	printf("\033[1;31m");
}

int validarsenha(char senha[])
{
	int digito = 0, cont = 0;

	for (int i = 0; senha[i] != '\0'; ++i)
	{
		if (strlen(senha) == 4)
		{
			cont = 1;
		}
		else if ((senha[i] >= '0') && (senha[i] <= '9'))
		{
			digito++;
		}
	}

	if ((cont = 1) && (digito == 3))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void logincpf(char cp_f[])
{
	do {
		printf("Informe seu CPF: \n");
		scanf("%s", cp_f);

		if ((validarcpf(cp_f) == 1))
		{
			printf("Login realizado com sucesso! :)\n");
			system("clear");
		}
		else if ((validarcpf(cp_f) == 0))
		{
			vermelho();
			printf("Houve um erro! :(\n");
			return 0;
		}
	} while ((validarcpf(cp_f) != 1));
}

void opbanco()
{
	printf("---------------IFBANK---------------\n\n");
	printf("Selecione a opção desejada dentre as exibidas abaixo: \n");
	printf("1. DEPOSITO\n");
	printf("2. SAQUE\n");
	printf("3. SALDO\n");
	printf("0. SAIR\n\n");
	printf("Opção selecionada: ");
}

float depositar(float valorDeposito)
{
	printf("Digite a quantia a ser depositada: R$");
	scanf("%f", &valorDeposito);
	saldo = soma(saldo, valorDeposito);
	system("clear");
	printf("DepÃ³sito realizado com sucesso!\n\n");
	return saldo;
}

float sacar(float valorSaque)
{
	printf("Digite a quantia a ser sacada: R$");
	scanf("%f", &valorSaque);
	saldo = subtracao(saldo, valorSaque);
	system("clear");
	printf("Saque realizado com sucesso!\n\n");
	return saldo;
}

void checasaldo(float valorSaldo)
{
	printf("Seu salto atual Ã© de: R$%.2f.\n\n", saldo);
}
