/*

Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria
função de ordenação, mas que seja capaz de ordenar apenas inteiros do tipo int. Para isso, sua
função deverá receber, entre outros argumentos, um ponteiro para a função de comparação
que determinará como os elementos do array serão ordenados.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const int *a, const int *b) {     // no head a função deve receber como parametro os dados fornecidos pela função qsort
    if (*(int*)a > *(int*)b) return 1;          // a função compara valores em int se a for maior que b retorna 1
    else if (*(int*)a < *(int*)b) return -1;    //a função compara valores em int se a for menor que b retorna -1
    else return 0;                              // Se a for igual aa b retorna o valor 0
}


int OrdenaVetor(int *valores,int n,int *comparar(const void*,const void*)){
    int i, j, temp;

    // Algoritmo de ordenação simples
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            // Usando a função de comparação fornecida pelo ponteiro
            if (comparar(&valores[j], &valores[j + 1]) == 1) {
                // Troca os elementos se estiverem fora de ordem
                temp = valores[j];
                valores[j] = valores[j + 1];
                valores[j + 1] = temp;
            }
        }
    }
}



int main() {
    int n,i;
    int *valores;

    // Lendo a quantidade de valores que serão lidos
    printf("Digite o numero de valores: ");
    scanf("%d", &n);

    

    // Alocando dinamicamente a memória para armazenar os valores
    valores = (int*) malloc(n * sizeof(int));


    // Lendo os valores
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // imprimindo os valores
    printf("\nValores no vetor e:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");
 
       
    // Ordenando os valores usando com a função criada
     OrdenaVetor(valores,n,compare);//a função OrdenaVetorrecebe como parametro o vetor de valores desordenados, o ponteiropara função que vai comparar os numeros 


    // Exibindo os valores em ordem crescente
    printf("\nValores em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", valores[i]);
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