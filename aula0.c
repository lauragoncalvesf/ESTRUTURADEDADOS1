#include <stdio.h>
#include <stdlib.h>

int main(void){
    int tamanho, novo_tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int * vetor = (int * ) calloc (tamanho, sizeof (int));
    if(vetor == NULL)
    {
        printf("Nao ha espaço na memoria");
        exit(1);
    } else{
        printf("vetor alocado!");
    }       

    printf("\nDigite um novo tamanho: ");
    scanf("%d", &novo_tamanho);
    vetor = (int* ) realloc (vetor, novo_tamanho*sizeof(int));
    free(vetor);
    return 0;
}
