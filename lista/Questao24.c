/*
Crie uma função capaz de realizar multiplicação matricial da forma C = AxB. A função deve
receber 6 argumentos: os ponteiros para as matrizes A, B e C, o número de linhas e colunas de A
e o número de colunas de B (assuma que o número de coluna de A é igual ao número de linhas
de B). O resultado da multiplicação deve ficar armazenado em C. Crie um programa para testar
sua implementação, capaz de utilizar a função de multiplicação e imprimir as três matrizes. A
função criada para multiplicação não deve realizar nenhum tipo de saída de dados no terminal.
Exemplo: para multiplicar duas matrizes (A e B) de dimensões 2x3 e 3x4, respectivamente (o
resultado deve ficar armazenado em C).
multiplica_matrizes(A, B, C, 2, 3, 4);
*/

#include <stdio.h>
#include <stdlib.h>
//função para criar uma matriz nXm

int** criarMatriz(int *linhas, int *colunas){
    int **matriz;
    int i, j;
    // 1. alocar vetor de ponteiros auxiliar
    matriz = malloc(*linhas * sizeof(int *));
    if (matriz == NULL) {
        exit(0);
    }
    // 2. alocar as linhas da matriz
    for (i = 0; i < *linhas; i++) {
        matriz[i] = malloc(*colunas * sizeof(int));
    }
    for (i = 0; i < *linhas; i++) {
        for (j = 0; j < *colunas; j++) {
          matriz[i][j] = (rand() %100);
        }
    }
    return matriz;
}

// Função para liberar a memória da matriz
void liberarMatriz(int** matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);  // Liberando cada linha
    }
    free(matriz);  // Liberando o array de ponteiros
}

// Função para imprimir uma matriz
void imprime_matriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}


// Função para multiplicar as matrizes
int** multiplica_matrizes(int **A, int **B, int *linA, int *colA, int *colB) {
    //criando a matriz C
    int **C;
    int i;
    // 1. alocar vetor de ponteiros auxiliar
    C = malloc(*linA * sizeof(int *));
    if (C == NULL) {
        exit(0);
    }
    // 2. alocar as linhas da matriz
    for (i = 0; i < *linA; i++) {
        C[i] = malloc(*colB * sizeof(int));
    }
    
    // Iterando sobre as linhas de A e as colunas de B para preencher C
    for (int i = 0; i < *linA; i++) {
        for (int j = 0; j < *colB; j++) {
            C[i][j] = 0;  // Inicializando o elemento C[i][j] como 0
            for (int k = 0; k < *colA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}


int main() {
    int linA, colA, colB;

    // Definindo as dimensões das matrizes
    
    printf("Digite o numero de linhas matriz A: ");
    scanf("%d", &linA);

    printf("Digite o numero de colunas matriz A: ");
    scanf("%d", &colA);

    printf("Digite o numero de colunas da matriz B: ");
    scanf("%d", &colB);
    

    // Criando a matriz dinamicamente
    int** matrizA = criarMatriz(&linA, &colA);
    int** matrizB = criarMatriz(&colA, &colB);
    
    //criando a matriz C com a multiplicação da duas matrizas anteriores
    int** matrizC = multiplica_matrizes(matrizA, matrizB, &linA, &colA, &colB);
    
    //imprimindo as matrizes
    
    printf("\nMatriz: A\n");
    imprime_matriz(matrizA, linA, colA); 
    printf("\nMatriz: B\n");
    imprime_matriz(matrizB, colA, colB); 
    printf("\nMatriz: C\n");
    imprime_matriz(matrizC, colA, colB);

    //liberando a memoria

    liberarMatriz(matrizA, linA);
    liberarMatriz(matrizB, colB);
    liberarMatriz(matrizC, linA);

}