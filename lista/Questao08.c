// 8. Assumindo que pulo[] é um vetor do tipo int, qual das seguintes expressões referenciam o valor
// do terceiro elemento do vetor?
// *(pulo + 2);
// *(pulo + 4);
// pulo + 4;
// pulo + 2;

// A resposta é a alternativa 1 que desloca a posição inicial do vetor em duas posiçoes ou 8 bytes e imprime o elemento da posição 3

#include <stdio.h>

int main(){
    int pulo[5] = {1,2,3,4,5};
    printf("%d\n",*(pulo +2)); //imprime 3
    printf("%d\n",*(pulo +4)); // imprime 5
    printf("%p\n",(pulo +2)); // imprime a posição da memoria do terceiro elemento
    printf("%p\n",(pulo +4)); // imprime a posição da memoria do quinto elemento
    return 0;
}