/*

20. Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu
código, explicando o que faz cada uma das linhas.
*/


#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {// no head a função deve receber como parametro os dados fornecidos pela função qsort
    if (*(float*)a > *(float*)b) return 1; // a função compara valores em float se a for maior que b retorna 1
    else if (*(float*)a < *(float*)b) return -1; //a função compara valores em float se a for menor que b retorna -1
    else return 0; // Se a for igual aa b retorna o valor 0
}


int main() {
    int n;
    float *valores;

    // Lendo a quantidade de valores que serão lidos
    printf("Digite o numero de valores: ");
    scanf("%d", &n);

    

    // Alocando dinamicamente a memória para armazenar os valores
    valores = (float*) malloc(n * sizeof(float));


    // Lendo os valores
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }

    // imprimindo os valores
    printf("\nValores no vetor e:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", valores[i]);
    }
    printf("\n");


    // Ordenando os valores usando com a função qsort e compare
    qsort (valores, n, sizeof(float), compare); //a função qsort recebe como parametro o vetor de valores desordenados, o tamanho do vetor de valores, o tamanho de espaço entre os enereços de memoria de cada posição (que depende do tipo)


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


/*
A qsort disponivel na biblioteca stdlib realiza o ordenamento do vetor mas é necessário criar apenas uma função que
compare os valores em float e retorne para a função qsort 1 para maior que zero, -1 para menor que zero 
e 0 se ambos forem iguais conforme solicitado pela funçao qsort. 
*/