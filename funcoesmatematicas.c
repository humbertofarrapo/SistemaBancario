#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int validarcpf(char cp_f[])
{
	int i, j, digito1 = 0, digito2 = 0;
	if (strlen(cp_f) != 11)
	{
		return 0;
	}
	else if ((strcmp(cp_f, "00000000000") == 0) || (strcmp(cp_f, "11111111111") == 0) || (strcmp(cp_f, "22222222222") == 0) ||
		(strcmp(cp_f, "33333333333") == 0) || (strcmp(cp_f, "44444444444") == 0) || (strcmp(cp_f, "55555555555") == 0) ||
		(strcmp(cp_f, "66666666666") == 0) || (strcmp(cp_f, "77777777777") == 0) || (strcmp(cp_f, "88888888888") == 0) ||
		(strcmp(cp_f, "99999999999") == 0))
	{
		return 0;
	}
	else
	{
		for (i = 0, j = 10; i < strlen(cp_f) - 2; i++, j--)
		{
			digito1 += (cp_f[i] - 48) *j;
		}

		digito1 %= 11;
		if (digito1 < 2)
		{
			digito1 = 0;
		}
		else
		{
			digito1 = 11 - digito1;
		}

		if ((cp_f[9] - 48) != digito1)
		{
			return 0;
		}
		else
		{
			for (i = 0, j = 11; i < strlen(cp_f) - 1; i++, j--)
			{
				digito2 += (cp_f[i] - 48) *j;
			}

			digito2 %= 11;
		}

		if (digito2 < 2)
		{
			digito2 = 0;
		}
		else
		{
			digito2 = 11 - digito2;
		}

		if ((cp_f[10] - 48) != digito2)
		{
			return 0;
		}
	}

	return 1;
}

float mediaa(float notas[], int tam)
{
	float media, soma = 0;

	for (int i = 0; i < tam; i++)
	{
		soma = soma + notas[i];
	}

	media = (float) soma / tam;

	return media;
}

float mediap(float notas[], float pesos[], int tam)
{
	float media, peso = 0, soma = 0;

	for (int i = 0; i < tam; i++)
	{
		soma = soma + (notas[i] *pesos[i]);
		peso = peso + pesos[i];
	}

	media = (float) soma / peso;

	return media;
}

float soma(float x, float y)
{
	return (x + y);
}

float subtracao(float x, float y)
{
	return (x - y);
}

float produto(float x, float y)
{
	return (x *y);
}

float divisao(float x, float y)
{
	if (x == 0 || y == 0)
	{
		printf("NÃ£o Ã© possivel dividir por zero!\n");
	}
	else
	{
		return (x / y);
	}
}

float quadrado(float x)
{
	return (x *x);
}

float cubo(float x)
{
	return (x *x *x);
}

int restoDivisao(int x, int y)
{
	return x % y;
}

int par(int x)
{
	if (x % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int multiplo(int x, int y)
{
	if (x % y == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int primo(int x)
{
	int i;
	int resultado = 0;

	for (i = 2; i <= x / 2; i++)
	{
		if (x % i == 0)
		{
			resultado++;
			break;
		}
	}

	if (resultado == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int *divisores(int x)
{
	int *vetor = calloc(x, sizeof(int));
	int ind = 0;

	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			vetor[ind++] = i;
		}
	}

	return (vetor);
}

char *entradastr(char *titulo)
{
	for (int i = 0; titulo[i] != '\0'; i++)
	{
		if (isdigit(titulo[i]) == 0)
		{
			printf("%c", titulo[i]);
		}
	}
}

char *entradaint(char *titulo)
{
	for (int i = 0; titulo[i] != '\0'; i++)
	{
		if (isalpha(titulo[i]) == 0)
		{
			printf("%c", titulo[i]);
		}
	}
}