/*********************************************************************
 funcoesbanco.h;
 Cabecalhos das funcoes implementadas no modulo funcoesbanco.c,
 que servem para realizar operacoes bancarias e formatacoes na interface.
*********************************************************************/

static float saldo = 2022.00; //Valor fixado do saldo;

void saudacao(); //Exibe a mensagem de inicio;

void aviso(); //Exibe a mensagem de aviso;

void verde(); //Colore o texto em verde;

void vermelho(); //Colore o texto em vermelho;

int validasenha(char *senha); //Valida uma senha (string) recebido em 0 ou 1;

void telalogin(); //Exibe a interface de login;

void opbanco(); //Exibe a interface de menu de opcoes;

float depositar(float valorDeposito); //Realiza a operacao de deposito;

float sacar(float valorSaque); //Realiza a operacao de saque;

void checasaldo(); //Exibe o saldo disponivel.
