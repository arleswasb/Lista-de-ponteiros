/*

22. Procure na internet mecanismos que possibilitem medir tempos de execução de rotinas
computacionais. Geralmente, estas medidas são realizadas com o auxílio de funções em C que
lêem a hora no sistema (sistemas Unix e Windows geralmente usam funções diferentes).
Utilizando os conhecimentos que você obteve com sua pesquisa, meça os tempos de execução
das implementações que você criou para os dois problemas de ordenação anteriores (com seu
método de ordenação e com qsort()), considerando apenas arrays de elementos tipo int e
compare os resultados obtidos. O que se conclui nesse caso?

*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void ordenador(int *valor, int n) {
    int i, j, indice_0;
    int temp;

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


int compare(const void *a, const void *b) {     // no head a função deve receber como parametro os dados fornecidos pela função qsort
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
    int n;
    int *valores;
    clock_t start1,start2, end1, end2;
    double tempoDeCPU1,tempoDeCPU2;

    // Lendo a quantidade de valores que serão lidos
    printf("Digite o numero de valores: ");
    scanf("%d", &n);

    

    // Alocando dinamicamente a memória para armazenar os valores
    valores = (int*) malloc(n * sizeof(int));


    // Lendo os valores aleatorios para o velor de valores
    for (int i = 0; i < n; i++) {
        valores[i] = rand() %100 + 2000;
    }

    printf("\n");
    
    start1 = clock(); // Captura do tempo de clock 

      
    // Ordenando os valores usando com a função criada 
     OrdenaVetor(valores,n,compare);//a função OrdenaVetorrecebe como parametro o vetor de valores desordenados, o ponteiropara função que vai comparar os numeros 

    end1 = clock();// Captura do tempo de clock 

    // Lendo os valores novamente para o vetor valores
    for (int i = 0; i < n; i++) {
        valores[i] = rand() %100 + 2000;
    }


    start2 = clock(); // Captura do tempo de clock

    // Ordenando os valores usando com a função qsort e compare
    qsort (valores, n, sizeof(int), compare); //a função qsort recebe como parametro o vetor de valores desordenados, o tamanho do vetor de valores, o tamanho de espaço entre os enereços de memoria de cada posição (que depende do tipo)

    end2 = clock();// Captura do tempo de clock

    tempoDeCPU1 = ((double)(end1 - start1))/CLOCKS_PER_SEC;
    tempoDeCPU2 = ((double)(end2 - start2))/CLOCKS_PER_SEC;

    printf("\n");

    printf("Tempo de execucao: %e segundos\n", tempoDeCPU1);
    printf("Tempo de execucao: %e segundos\n", tempoDeCPU2);

    // Liberando a memória alocada
    free(valores);

    return 0;
}

/*
Feito um teste com um vetor de valores com 50000 numeros podemos observar os seguintes temppos de execução

Digite o numero de valores: 50000


Digite o numero de valores: 50000

Tempo de execucao: 9.849000e+000 segundos usando a função OrdenaVetor
Tempo de execucao: 5.000000e-003 segundos usando a função qsort

podemos observar que usando a função qsort temos um menor tempo de uso do processador


*/