#include <stdio.h>
#include <stdlib.h>

int count = 0;

typedef struct pessoas{
    char nome[20];
    int idade;
}Pessoas;

void preenche_pessoas(Pessoas * pessoas){
    printf("Informe o nome da pessoa %d: ", count + 1);
    scanf(" %[^\n]", pessoas->nome);
    printf("Informe a idade da pessoa %d", count + 1);
    scanf("%d", &pessoas->idade);

}

void imprime_pessoas(Pessoas * pessoas){
    printf("=================================\n");
    printf("Dados da %d pessoa: \n");
    printf("Nome: %s", pessoas->nome);
    printf("Idade: %d", pessoas->idade);
}

int main(void){
    int quant_nomes;
    char ** nomes = (char**)malloc(quant_nomes * sizeof(char*)); //PONTEIRO P MATRIZ DE STRINGS E ALOCACAO
    if(nomes == NULL){
        printf("MEMORIA NAO ALOCADA!\n");
        return 1;
    }
    
    

    /*Pessoas * pessoas = (Pessoas*) malloc(num_pessoas* sizeof(Pessoas));*/
    if()
}