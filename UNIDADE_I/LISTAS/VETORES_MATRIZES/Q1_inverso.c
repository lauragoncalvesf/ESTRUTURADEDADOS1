#include <stdio.h>
#include <stdlib.h>

int main(void){
    int tamanho;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int *v = (int*) malloc(tamanho*sizeof(int)); //DECLARAÇÃO DO VETOR
    //VERIFICAÇÃO DE MEMORIA
    if(v == NULL){
        printf("NO MEMORY!");
        exit(1);
    }
    else{
        printf("VETOR ALOCADO!\n");
    }
    //ELEMENTOS DO VETOR  
    printf("Digite os elementos do vetor: \n");
    for(int count = 0; count < tamanho; count++){
        scanf("%d", &v[count]);
    }  
    //IMPRIME VETOR INVERSO
    printf("VETOR INVERSO: \n");
    for(int count = tamanho - 1; count >= 0; count--){
        printf("%d \t", v[count]);
    } 
    free(v);
    return 0;
}