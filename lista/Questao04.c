// 4. Determine o que será mostrado pelo seguinte program nos trechos (a) até (n). Compile-o,
// execute-o e verifique se foram obtidas as respostas esperadas. Justifique o porque de cada uma.

#include <stdio.h>

int main() {
    int    valor;
    int   *p1;
    float  temp;
    float *p2;
    char   aux;
    char  *nome = "Ponteiros";
    char  *p3;
    int    idade;
    int    vetor[3];
    int   *p4;
    int   *p5;

/* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor);

    // o valor impresso será 20 pois o valor armazenado no endereco para onde o ponteiro p1 aponta foi alterado para 20.

/* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n", temp);

    // o valor impresso será 29.0 pois o valor armazenado no endereco para onde o ponteiro p2 aponta foi alterado para 29.0.

/* (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux);

    // o valor impresso será apenas "P" pois o endereço armazenado em p3 aponta para a posição 0 do vetor nome, portanto aux recebe apena o caractere P

/* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);

    // o valor impresso será apenas "e" pois o endereço armazenado em p3 aponta para a posição 4 do vetor nome, portanto aux recebe apena o caractere "e"
    
    /* (e) */
    p3 = nome;
    printf("%c \n", *p3);

    // o valor impresso será apenas "P" pois o endereço armazenado em p3 aponta para a posição 0 do vetor nome sempre que não for especificado a posição no vetor, portanto aux recebe apena o caractere P

/* (f) */
    p3 = p3 + 4;
    printf("%c \n", *p3);

    // o valor impresso será apenas "e" pois o endereço armazenado em p3 foi incrementado em 4 bytes e passou a apontar para a posição da memoria onde esta o e, assim aux recebe o caractere e

    
/* (g) */
    p3--;
    printf("%c \n", *p3);

    // o valor impresso será apenas "t" pois o endereço armazenado em p3 foi decrementado em 1 bytes e passou a apontar para a posição da memoria onde esta o "t", assim aux recebe o caractere "t"



/* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade);
    // o valor impresso será apenas 31 pois o endereço armazenado em p4 foi a posição zero da variavel vetor por padrão como não foi especificado. Assim idade recebe o conteudo da memoria da posição 0 de vetor.

/* (i) */
    p5 = p4 + 1;
    idade = *p5;
    printf("%d \n", idade);

    // o valor impresso será apenas 45 pois o endereço armazenado em p5 foi a posição zero da variavel vetor incrementado em 1 byte.


/* (j) */
    p4 = p5 + 1;
    idade = *p4;
    printf("%d \n", idade);

    // o valor impresso será apenas 27 pois o endereço armazenado em p4 foi a posição 1 da variavel vetor incrementado em 1 byte.


/* (l) */
    p4 = p4 - 2;
    idade = *p4;
    printf("%d \n", idade);

    // o valor impresso será 31 pois o endereço armazenado em p4 foi a posição 2 da variavel vetor decrementado em 2 byte, voltando assim p4 para a posição zero do vetor.


/* (m) */
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);

    // o valor impresso será apenas 45 pois o endereço armazenado em p5 foi a posição 2 da variavel vetor decrementado em 1 byte.

    
/* (n) */
    p5++;
    printf("%d \n", *p5);

    // o valor impresso será apenas 27 pois o endereço armazenado em p5 foi a posição 1 da variavel vetor incrementado em 1 byte.


  return 0;
}