#include <stdio.h>
#include <stdlib.h>

typedef struct pessoas {
    char nome[30];
    int idade;
}Pessoas;

void preenche_pessoa(Pessoas *pessoas){
        printf("Informe o nome:\t");
        scanf(" %[^\n]", &pessoas->nome);
        printf("Informe a idade:\t");
        scanf("%d", &pessoas->idade);
    }


void imprime_pessoa(Pessoas *pessoa, int num_pessoas){
    printf("Nome: %s\nIdade: %d", pessoa->nome, pessoa->idade);
}

void {

}

int main(void){
    int num_pessoas;   
    int quant_pessoas;

    //ALOCAÇÃO DINAMICA PESSOAS
    Pessoas * pessoas = (Pessoas *)malloc(num_pessoas * sizeof(Pessoas));
    if(pessoas == NULL) {
        printf("MEMORIA NAO ALOCADA.\n");
        return 1;
    }
    int * idade = (int *) malloc (num_pessoas *(sizeof(int)));
    if(idade == NULL) {
        printf("MEMORIA NAO ALOCADA.\n");
        return 1;
    }
    printf("Informe quantas pessoas deseja armazenar (ate %d): ", MAX_PESSOAS);
    scanf("d", &quant_pessoas);
    preenche_pessoa(pessoas, num_pessoas);
    imprime_pessoa(pessoas, num_pessoas);
    for(int count = 0; count < num_pessoas; count++){
        free(pessoas);
    }
    free(idade);
    return 0;


}