/*
17. O que é memory leak? Crie um exemplo de programa em C que contenha um memory leak e
proponha uma correção para o mesmo.
*/

void aloca_memoria(int *a) {
    // Aloca memória para um vetor de inteiros com a elementos
    int *vetor = (int *)malloc(*a * sizeof(int));

    // Usa o vetor para alguma operação (por exemplo, inicializando-o)
    for (int i = 0; i < *a; i++) {
        vetor[i] = i;
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    // Aqui, a memória não é liberada com free, causando o vazamento de memória
}

int main() {
    int tamanho = 5;
    aloca_memoria(&tamanho);
    // O programa termina sem liberar a memória alocada em aloca_memoria
    printf("Fim do programa.\n");
    return 0;
}

/*
No exemplo acima podemos observar que a função aloca memoria faz a alocação da memoria dinamicamente para inicializar um vetor 
com n valorser conforme o tamanho definidao pela variavel tamanho, porem ao finalizar o programa não foi feita a liberação dessa memoria reservada
com o comando free(a) assim causando um vazamento de memoria (memory leak)
*/



