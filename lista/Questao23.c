/*
Escreva uma função em linguagem C que escreva em um vetor a soma dos elementos
correspondentes de outros dois vetores. Os tamanhos dos vetores devem ser fornecidos pelo
usuário, portanto processos de alocação dinâmica de memória são necessários. Por exemplo, se
o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor contiver os elementos 3, 5,
-3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A função deve receber 4
argumentos: os nomes dos três vetores e o número de elementos presentes em cada vetor.
Exemplo:
int n=4;
// ...
soma_vetores(vet1, vet2, resultado, n);
*/

#include <stdio.h>
#include <stdlib.h>

// Função que realiza a soma dos elementos de dois vetores e armazena no vetor de resultado

void soma_vetores(int *vet1, int *vet2, int *resultado, int n) {
    for (int i = 0; i < n; i++) {
        resultado[i] = vet1[i] + vet2[i];
    }
}

int main() {
    int n;

    // Solicitando ao usuário o tamanho dos vetores
    printf("Digite o numero de elementos dos vetores: ");
    scanf("%d", &n);

    // Alocação dinâmica dos vetores

    int *vet1 = (int *)malloc(n * sizeof(int));
    int *vet2 = (int *)malloc(n * sizeof(int));
    int *resultado = (int *)malloc(n * sizeof(int));

    // Leitura dos elementos do primeiro vetor

    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vet1[i]);
    }

    // Leitura dos elementos do segundo vetor
    
    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vet2[i]);
    }

    // Chamada da função para somar os vetores
    soma_vetores(vet1, vet2, resultado, n);

    // Exibindo o vetor resultante
    printf("Vetor de soma:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    // Liberando a memória alocada
    free(vet1);
    free(vet2);
    free(resultado);

    return 0;
}