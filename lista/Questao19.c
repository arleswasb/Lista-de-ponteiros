
/*
19. Implemente em linguagem C uma função em um programa de computador que leia n valores do
tipo float do teclado e os apresente em ordem crescente. Utilize alocação dinâmica de memória
para armazenar o conjunto de pontos lidos.
*/

#include <stdio.h>
#include <stdlib.h>

// Função para ordenar o vetor
void ordenador(float *valor, int n) {
    int i, j, indice_0;
    float temp;

    // Percorre o vetor valor inteiro
    for (i = 0; i < n - 1; i++) {
        // Define o índice mínimo como o primeiro elemento não ordenado (variavel de referencia de indice)
        indice_0 = i;
        // Encontra o menor elemento no restante do vetor valor
        for (j = i + 1; j < n; j++) {
            if (valor[j] < valor[indice_0]) {
                indice_0 = j;
            }
        }
        // Troca o menor elemento encontrado com o elemento atual
        if (indice_0 != i) {
            temp = valor[i];// variavel trono
            valor[i] = valor[indice_0];
            valor[indice_0] = temp;
        }
    }
}

int main() {
    int n;
    float *valores;

    // Lendo o número de valores
    printf("Digite o numero de valores: ");
    scanf("%d", &n);

    // Alocando dinamicamente a memória para armazenar os valores
    valores = (float*) malloc(n * sizeof(float));


    // Lendo os valores
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }

    // Exibindo os valores desordenados
    printf("\nValores desordenados:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", valores[i]);
    }
    printf("\n");

    // Ordenando os valores usando a função ordenador
    ordenador(valores, n);

    // Exibindo os valores em ordem crescente
    printf("\nValores em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", valores[i]);
    }
    printf("\n");

    // Liberando a memória alocada
    free(valores);

    return 0;
}