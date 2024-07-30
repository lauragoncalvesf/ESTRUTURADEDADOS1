#include <stdio.h>
#include <stdlib.h>

float * cria_vetor(int tamanho){
    float * vetor = (float*) malloc (tamanho * sizeof(float));
    if (vetor == NULL)
    {
        printf("Nao ha espaço na memoria");
        exit(1);
    } else{
        printf("vetor alocado!");
    }      
    return vetor;
}

void ler_vetor(float * vetor, int tamanho){
    printf("Informe os valores para o vetor: \t");
    for(int index=0; index<tamanho; index++){
        scanf("%f", &vetor[index]);
    }
}
void imprime_vetor(float * vetor, int tamanho){
    for(int index=0; index<tamanho; index++){
        printf("%f\t", vetor[index]);
    }
}

int main(void){
    float * vetor = cria_vetor(5);
    ler_vetor(vetor, tamanho);
    imprime_vetor(vetor, tamanho);
    free(vetor);
    return 0;
    }