#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoesbanco.h"
#include "funcoesmatematicas.h"

void saudacao()
{
	entradastr("Seja bem vindo ao IFBank v_2022"); 
	entradaint("Seja bem vindo ao IFBank v_2022");
}

void aviso()
{
	printf("!\n\nComo esta eh a versao 2_2022 do IFBank, disponibilizamos um saldo de R$ 2022,00 para voce!\n\n");
	printf("Para continuar, pressione qualquer tecla.");
	getchar();
}

void verde()
{
	system("COLOR 02");
}

void vermelho()
{
	system("COLOR 04");
}

int validarsenha(char *senha)
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

        	printf("Digite sua senha de 4 dígitos: ");
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
            		printf("DADOS INVALIDOS!\n\n");    
		}
	}
}

void opbanco()
{
	printf("***************IFBANK***************\n");
	printf("1. DEPOSITO\n");
	printf("2. SAQUE\n");
	printf("3. SALDO\n");
	printf("0. SAIR\n");
	printf("************************************\n");
	printf("Opcao selecionada: ");
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

void checasaldo()
{
	printf("Seu salto atual eh de: R$ %.2f.\n\n", saldo);
}
