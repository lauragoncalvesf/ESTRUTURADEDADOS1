#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    printf("DIGITE UM NUMERO INTEIRO: ");
    scanf("%d", &n);
    //VERIFICAÇÃO POSITIVO
    if(n <= 0){
        printf("O NUMERO DEVE SER POSITIVO!");
        return 1;
    }
    //ALOCAÇÃO DA MATRIZ
    int ** matriz = (int**) malloc(n * sizeof(int*))
    for(int linha = 0; linha < n; linha++){
        matriz[linha] = (int *)malloc(n * sizeof(int));
    }
    //PREENCHIMENTO DA MATRIZ
    srand(time(NULL)); //nao entendi
    printf("MATRIZ GERADA:\n");
    for(int linha = 0; linha < n; linha++){
        for(int coluna = 0; coluna < n; coluna++){
            matriz[linha][coluna] = rand() % 100 + 1; //NUM ALEATORIO ENTRE 1 E 100
            printf("%3d", matriz[linha][coluna]);
        }
        printf("\n");
    }

    //LIBERAR MEMORIA
    for(int linha = 0; linha < n; linha++){
        free(matriz[linha]);
    }
    free(matriz);
    return 0;

}