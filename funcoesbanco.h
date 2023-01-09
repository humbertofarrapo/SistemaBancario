/******************************************************************
 funcoesbanco.h;
 Cabecalhos das funcoes implementadas no modulo funcoesbanco.c,
 que servem para realizar operacoes bancarias e formatacoes na interface.
******************************************************************/

static float saldo = 2023.00; //valor fixado do saldo

void saudacao();

void azul();

void verde();

void vermelho();

void telalogin();

int validasenha(char senha[]);

void opbanco();

float depositar(int valorDeposito);

float sacar(int valorSaque);

void checasaldo(int valorSaldo);
