#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
#include<locale.h>

//definindo as estruturas
typedef struct cliente{ // definindo as variaveis para cliente
    int codigo;
    int senha;
    char nome[64];
    char endereco[64];
    char nasc[64];
    float saldo;
    float invest;

} Cliente;

typedef struct gerente{ // definindo as variaveis para cliente
    int codigo;
    int senha;
    char nome[64];
    //struct gerente *prox;
} Gerente;
//-----------------------------------------------------------------------
/* Declaração das Funções*/
int cadastrar();
int versaldo();
int saque();
int autenticar();
int extrato ();
int deposito ();
int sair();
int menu();
int operacional();
void lerArquivoClientes();
void removeCliente(char *nome);
void gravarArquivoClientes();
int menugerente();


Cliente *cabecaCliente = NULL;
//Revista *cabecaRevista = NULL;
//Socio *cabecaSocio = NULL;
//Emprestimo *cabecaEmprestimo = NULL;

//-----------------------------------------------------------------------
int cadastrar(){
    int i =1;
    Cliente reg[100];

    printf("Digite seus dados: \n\n");

    fflush(stdin);
    printf("Codigo: ");
    scanf("%d", &reg[i].codigo);

    fflush(stdin);
    printf("Senha: ");
    scanf("%d", &reg[i].senha);

    fflush(stdin);
    printf("Nome: ");
    scanf("%[^\n]", reg[i].nome);

    fflush(stdin);
    printf("Data de nascimento (dd/mm/aa): ");
    scanf("%s", reg[i].nasc);

    fflush(stdin);
    printf("Endereco: ");
    scanf("%[^\n]", reg[i].endereco);


    autenticar();
}
//-----------------------------------------------------------------------

int versaldo(){
    int i=1;
    Cliente sald[100];
system("cls");
printf("\nInsira o codigo do cliente: ");
scanf("%d",&i);
printf("\n\n Cliente: %s \n  Codigo: %d  Saldo: %.2f\n\n");
scanf("%s %d %f",&sald[i].nome,&sald[i].codigo, &sald[i].invest);
system("pause");
menu();
}
//-----------------------------------------------------------------------


