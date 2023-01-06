#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoesmatematicas.h"

static float saldo = 2023.00;

void mensagem()
{
	entradastr("Olá, seja bem vindo ao IFBank versão 2023"); //retorna o texto de um vetor de caracteres sem números
	entradaint("Olá, seja bem vindo ao IFBank versão 2023"); //retorna os numeros de um vetor de caracteres sem o texto
	printf("!\n\nPara continuar, pressione qualquer tecla.");
	getchar();
}

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
	int valido = 0, invalido = 0;

	if (strlen(senha) != 4)
	{
		invalido = 1;
	}
	else
	{
		for (int i = 0; i < strlen(senha); i++)
		{
			if ((senha[i] >= '0') && (senha[i] <= '9'))
			{
				valido = 1;
			}
		}
	}
	if(invalido == 1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void telalogin()
{
    	char cpf[12];
    	char senha[5];
    	int login_efetuado = 0;
	
	system("clear");
	while(!login_efetuado)
	{
		verde();
       		printf("Digite seu CPF: ");
        	scanf("%s", cpf);

        	printf("Digite seu senha de 4 dígitos: ");
        	scanf("%s", senha);

        	if (validarcpf(cpf) == 1 && validarsenha(senha) == 1)
		{
			system("clear");
            		printf("Login efetuado com sucesso! :)\n\n");
            		login_efetuado = 1;
        	}
        	else
		{	
			system("clear");
			vermelho();
            		printf("DADOS INVALIDOS!\n\n");    
		}
	}
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
	printf("Depósito realizado com sucesso!\n\n");
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
	printf("Seu salto atual é de: R$%.2f.\n\n", saldo);
}
