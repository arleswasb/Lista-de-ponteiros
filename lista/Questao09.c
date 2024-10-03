/*
 9. Considerando a declaração int mat[4], *p, x;
quais das seguintes expressões são válidas? Justifique.

p = mat + 1;
p = mat;
p = mat;
x = (*mat);
*/

#include <stdio.h>

int main(){
    int mat[4], *p, x;
    
    p = mat;
    printf("%p\n",p); // p recebe a posição da memoria do primeiro elemento de mat

    p = mat+1;
    printf("%p\n",p); // p recebe a posição da memoria do segundo elemento de mat ou seja deslocou 4 bytes do primeiro endereço de memoria do vetor

    x = (*mat); // esta declaração não estara correta pois vai associar o conteudo do vetor no inteiro x mas o vetor não foi inicializado  com valores inteiros.
    
    return 0;
}