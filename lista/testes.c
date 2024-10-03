#include <stdio.h>
#include <time.h>

void funcaoParaMedir() {
    for (int i = 0; i < 100000000; i++); // Simulação de carga de trabalho
}

int main() {
    clock_t inicio, fim;
    double tempoDecorrido;

    inicio = clock();  // Captura o tempo inicial
    funcaoParaMedir(); // Função a ser medida
    fim = clock();     // Captura o tempo final

    // Cálculo do tempo em segundos
    tempoDecorrido = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
    printf("Tempo de execução: %f segundos\n", tempoDecorrido);

    return 0;
}