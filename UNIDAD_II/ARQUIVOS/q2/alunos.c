#include <stdio.h>
#include <stdlib.h>
/*Função para abrir- criar arquivo e retornar este arquivo*/
FILE * open_file(char * nome, char * modo){
    FILE * arquivo = fopen(nome, modo);
    if(arquivo == NULL){
        printf("Can't open the file\n");
        exit(1);
    }else{
        printf("File open!\n");
    }
    return arquivo;
}

int main(void){
    FILE * arquivo_de_entrada, * arquivo_de_saida;
    char * nome_aluno[20];
    float nota1, nota2, nota3, media;
    arquivo_de_entrada = fopen("lista_alunos.txt", "r"); //Ler o arquivo de entrada
    arquivo_de_saida = open_file("saida_lista.txt", "w"); // Cria o arquivo de saída

    //Ler os dados dentro do arquivo fgets, fgetc, fscanf, sscanf
    while(!feof(arquivo_de_entrada)){ //enquanto não chegar ao final do arquivo
    fscanf(arquivo_de_entrada, "%s\t%f\t%f\t%f\n", nome_aluno, &nota1, &nota2, &nota3); //ler os dados do arquivo
    // Calcular media
    media = (nota1 + nota2 + nota3)/3.0;
    // Escreve no arquivo de saída
    if (media >= 7){
        fprintf(arquivo_de_saida, "%s\t%.1f\tAPROVADO\n");
    } else{
        fprintf(arquivo_de_saida, "%s\t%.1f\tREPROVADO\n");
    }    
    }
    fclose(arquivo_de_entrada);
    fclose(arquivo_de_saida);
    return 0;
}