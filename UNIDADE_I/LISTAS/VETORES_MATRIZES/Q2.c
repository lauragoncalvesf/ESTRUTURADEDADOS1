#include <stdio.h>
#include <stdlib.h>

int main(void){
    int linhas, colunas;

    printf("Informe o numero de linhas e colunas da matriz: ");
    scanf("%d %d", &linhas, &colunas);

    //ALOCAÇÃO DE MATRIZ 
    int **matriz = (int**) malloc(linhas *sizeof(int*));
    if(matriz == NULL){
        printf("NO MEMORY");
        exit(1);
    }

    for(int linha = 0; linha < linhas; linha++){ 
        matriz[linha] = (int*) malloc(colunas * sizeof(int));
    }

    //ELEMENTOS MATRIZ
    printf("Digite os elementos da matriz: \n");
    for(int linha = 0; linha < linhas; linha++){
        for(int coluna = 0; coluna < colunas; coluna++){
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    //IMPRIMIR MATRIZ
    printf("Matriz original\n");
    for(int linha = 0; linha < linhas; linha++){
        for(int coluna = 0; coluna < colunas; coluna++){
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n");
    }

    //IMPRIMIR A MATRIZ TRANSPOSTA
    printf("Matriz transposta\n");
    for(int coluna = 0; coluna < colunas; coluna++){
        for(int linha = 0; linha < linhas; linha++){
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n");
    }

    //LIBERA A MEMORIA ALOCADA P MATRIZ
    for(int linha = 0; linha < linhas; linha++){
        free(matriz[linha]);
    }
    free(matriz);
    return 0;
}