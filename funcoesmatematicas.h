/*******************************************************************
 funcoesmatematicas.h;
 Cabecalhos das funcoes implementadas no modulo funcoesmatematicas.c,
 que servem para realizar diversos calculos matematicas e validacao.
*******************************************************************/

int validarcpf(char c_pf[]); //Valida um CPF (string) recebido em 0 ou 1;

float mediap(float notas[],float pesos[], int tam); //Retorna a media ponderada de um vetor recebido junto a seus pesos e seu tamanho;

float mediaa(float notas[], int tam); //Retorna a media aritmetica de um vetor recebido junto a seu tamanho;

float soma(float x, float y); //Retorna a soma entre dois numeros;

float subtracao(float x, float y); //Retorna a subtracao entre dois numeros;

float produto(float x, float y); //Retorna a produto entre dois numeros;

float divisao(float x, float y); //Retorna a divisao entre dois numeros;

float quadrado(float x); //Retorna o calculo do quadrado de um numero;

float cubo(float x); //Retorna o calculo do cubo de um numero;

int restoDivisao(int x, int y); //Retorna o calculo do resto da divisao entre dois numeros;

int par(int x); //Verifica se o numero recebido e par ou nao;

int multiplo(int x, int y); //Verifica se um dos numeros recebidos e multiplo do outro ou nao;

int primo(int x); //Verifica se o numero recebido e primo ou nao;

int *divisores(int x); //Retorna os divisores de um numero;

char *entradastr(char *titulo); //Retorna apenas o texto de vetor um de caracteres;

char *entradaint(char *titulo); //Retorna apenas os numeros de vetor um de caracteres.
