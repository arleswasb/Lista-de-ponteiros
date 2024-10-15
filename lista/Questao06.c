/* Assumindo que um inteiro tem 4 bytes de tamanho, qual será a saída do seguinte programa?
Justifique sua resposta.*/

#include <stdio.h>
void funcao(char **p){
    char *t; // t é declarado como umponteiro para char logo com tamanho de um byte
    t = (p += sizeof(int))[-1]; //O endereço de memoria que t recebe é o endereço que aponta para a quarta posição do vetor "a"  menos uma posição "[-1]" que resulta em "gh"
    printf("%s\n", t);
}
int main(){
    char *a[] = { "ab", "cd", "ef", "gh", "ij", "kl"};
    funcao(a);
    return 0;
}