#include <stdio.h>


// Função para exibir um número de 64 bits em binário
void printBinario(unsigned long num) {
    for (int i = 63; i >= 0; i--) {
        // Desloca o número `i` bits para a direita e faz AND com 1 para obter o bit atual
        printf("%lu", (num >> i) & 1);
        
        // Opcional: Adiciona um espaço a cada 8 bits para facilitar a leitura
        if (i % 8 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}


unsigned long MatrizBitaBit(unsigned char matriz[8][8]) {
    unsigned long saida = 0;  // Variável de 64 bits para armazenar o estado da matriz
    unsigned long bit = 1; // Variável de 64 bits para compara e verivicar o bit do estado da matriz

    // Percorremos a matriz linha a linha
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
           
            if (matriz[i][j] == 1) {// (linha i e coluna j), começando dos bits mais significativos.
                
                saida = saida | bit; 
            }
            bit = bit << 1; // Deslocamos o bit correspondente para a posição correta
        }
    }
   
    return saida; // Retorna o número de 64 bits codificado 
}



int main() {

    // Matriz 8x8 de exemplo
    unsigned char m[8][8] = {
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {1, 0, 1, 0, 1, 0, 1, 0}
    };

    unsigned long estado = MatrizBitaBit(m);


    printf("Estado enviado: %lx\n", estado);  // Exibe o valor em hexadecimal
    printf("Estado enviado (binario): ");
    printBinario(estado);  // Exibe o valor em binário
}
