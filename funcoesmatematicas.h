/******************************************************************
 funcoesmatematicas.h;
 Cabecalhos das funcoes implementadas no modulo funcoesmatematicas.c,
 que servem para realizar diversos calculos matematicas e validacao.
******************************************************************/

int validarcpf (char c_pf[]);

float mediap(float notas[],float pesos[], int tam);

float mediaa(float notas[], int tam);

float soma(float x, float y);

float subtracao(float x, float y);

float produto(float x, float y);

float divisao(float x, float y);

float quadrado(float x);

float cubo(float x);

int restoDivisao(int x, int y);

int par(int x);

int multiplo(int x, int y);

int primo(int x);

int *divisores(int x);

char *entradastr(char *titulo);

char *entradaint(char *titulo);
