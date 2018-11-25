#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
#include<locale.h>//usar acentos graficos em portugues
//codigo de Ariani Assunçao 2016

typedef struct cliente{ // definindo as variaveis para cliente
    int codigo;
    int senha;
    char nome[64];
    char endereco[64];
    int nasc;
    float investido;
    struct cliente *prox;// mantem a ordem do struct (sempre chama a proxima variavel)
} cliente[100];

typedef struct gerente{ // definindo as variaveis para cliente
    int codigo;
    int senha;
    char nome[64];
    struct gerente *prox;
} gerente[100];

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

//-----------------------------------------------------------------------
int main()
{
    setlocale(LC_ALL, "Portuguese");
    autenticar();
}
//-----------------------------------------------------------------------

int autenticar(){
int op;
    system("cls");
    system("color 0e");
    printf("\t\t\tAJ Financeira\n");
    printf("\n\t---------------------------------------------------\n");
    printf("1- Login cliente\n");
    printf("2- Login gerente\n");
    printf("3- Cadastro de cliente\n");
    fflush(stdin);
    scanf("%d",&op);

    switch(op){
        case 1: ;
            int senha,tentativas,codigoCl;
            system("cls");
            for (tentativas=3;tentativas>=0;tentativas--){
            printf("\n\t\t\tBem vindo Cliente\n\n");
            printf("Insira seu codigo:\n");
            scanf("%d",&codigoCl);
                //if (cod)
            printf("Insira sua senha para iniciar:\n");
            scanf("%d",&senha);
            if(senha==123){
                printf("Ok. \n");
                menu();
            }
            else {
                printf("\aVocê ainda tem %d tentativas.\n",tentativas);
                system("pause");
                system("cls");
 printf("\t\t\tAJ Financeira\n");
printf("\n---------------------------------------------------\n");           }
            }

            break;

        case 2:{
            int senha1,tentativas1=3;
            system("cls");
            for (tentativas1=3;tentativas1>=0;tentativas1--){
            printf("\n\t\t\tBem vindo Gerente\n\n");
            printf("Insira sua senha para iniciar:\n");
            scanf("%d",&senha1);
            if(senha1==123){
                printf("Ok. \n");
                menugerente();
            }
            else {
                printf("\aVocê ainda tem %d tentativas.\n",tentativas1);
                system("pause");
                system("cls");
 printf("\t\t\tAJ Financeira\n");
printf("\n---------------------------------------------------\n");           }
            }
        break;
      }

        case 3:
            cadastrar();
    }

}
//-----------------------------------------------------------------------

int menu(){
    int opc;
    system("cls");
    system("color 3F");
    printf("\t\t\tAJ Financeira\n");
    printf("\n---------------------------------------------------\n");
    printf("\n\n\t\t\t MENU\n\n");
    printf("\n---------------------------------------------------\n");
    printf("1- Cadastrar Cliente\n2- Ver Saldo do Cliente");
    printf("\n3- Saque\n4- Consultar Movimentação\n");
    printf("5- Realizar Deposito\n6- Sair\n ");
    printf("Escolha uma opção: ");
    fflush(stdin);
    scanf("%d",&opc);
        switch(opc)
        {
            case 1: cadastrar();break;
            //case 2: versaldo();break;
           // case 3: saque();break;
            //case 4: extrato(); break;
            //case 5: deposito(); break;
            //case 6: sair(); break;

            default: printf("Opção invalida!");
            system("pause");
            menu();
            break;
        }
}

//-----------------------------------------------------------------------

int menugerente(){
    int opc;
    system("cls");
    system("color 4F");
    printf("\t\t\tAJ Financeira\n");
    printf("\n---------------------------------------------------\n");
    printf("\n\n\t\t\t MENU (Gerencia)\n\n");
    printf("\n---------------------------------------------------\n");
    printf("1- Cadastrar  Cliente\n2- Ver Saldo do Cliente");
    printf("\n3- Saque\n4- Consultar Movimentação\n");
    printf("5- Realizar Deposito\n 6-Excluir usuario\n7-listar usuarios\n8- Sair\n");
    printf("Escolha uma opção: ");
    fflush(stdin);
    scanf("%d",&opc);
        switch(opc)
        {
            case 1: cadastrar();break;
            //case 2: versaldo();break;
           // case 3: saque();break;
            //case 4: extrato(); break;
            //case 5: deposito(); break;
            //case 6: Excluir usuários(); break;
            //case 6: Listar usuários(); break;
            //case 8: sair(); break;

            default: printf("Opção invalida!");
            system("pause");
            menugerente();
            break;
        }
    }
