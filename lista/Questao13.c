/*
13. Seja x um vetor de 4 elementos, declarado da forma TIPO x[4]. Suponha que depois da
declaração, x esteja armazenado no endereço de memória 4092 (ou seja, o endereço de x[0]).
Suponha também que na máquina seja usada uma variável do tipo char ocupa 1 byte, do tipo
int ocupa 2 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes. Quais serão os
valores de x+1, x+2 e x+3 se:

 x for declarado como char(1 Bytes)?

x+1 = 4093

x+2 = 4094

x+3 = 4095

x for declarado como int(2 Bytes)?

x+1 = 4094

x+2 = 4096

x+3 = 4098

x for declarado como float(4 Bytes)?

x+1 = 4096

x+2 = 4100

x+3 = 4104

x for declarado como double(8 Bytes)?

x+1 = 4100

x+2 = 4108

x+3 = 4116

Implemente um programa de computador para testar estas suposições e compare as respostas
oferecidas pelo programa com as respostas que você idealizou.
*/

#include <stdio.h>

int main() {
    // Declarações de variáveis para cada tipo
    char x_char[4];
    int x_int[4];
    float x_float[4];
    double x_double[4];

    // Endereço base
    printf("Endereco base de x_char: %p\n", (void*)&x_char[0]);
    printf("x_char + 1: %p\n", (void*)&x_char[1]);
    printf("x_char + 2: %p\n", (void*)&x_char[2]);
    printf("x_char + 3: %p\n", (void*)&x_char[3]);

    printf("\nEndereco base de x_int: %p\n", (void*)&x_int[0]);
    printf("x_int + 1: %p\n", (void*)&x_int[1]);
    printf("x_int + 2: %p\n", (void*)&x_int[2]);
    printf("x_int + 3: %p\n", (void*)&x_int[3]);

    printf("\nEndereco base de x_float: %p\n", (void*)&x_float[0]);
    printf("x_float + 1: %p\n", (void*)&x_float[1]);
    printf("x_float + 2: %p\n", (void*)&x_float[2]);
    printf("x_float + 3: %p\n", (void*)&x_float[3]);

    printf("\nEndereco base de x_double: %p\n", (void*)&x_double[0]);
    printf("x_double + 1: %p\n", (void*)&x_double[1]);
    printf("x_double + 2: %p\n", (void*)&x_double[2]);
    printf("x_double + 3: %p\n", (void*)&x_double[3]);

    return 0;
}
// resposta do programa
/*
Endereco base de x_char: 0061FF1C
x_char + 1: 0061FF1D
x_char + 2: 0061FF1E
x_char + 3: 0061FF1F

Endereco base de x_int: 0061FF0C
x_int + 1: 0061FF10  podemos observar que o deslocamente é de 4 em 4 bytes devido o tamanho do INT tem 4bytes em C
x_int + 2: 0061FF14
x_int + 3: 0061FF18

Endereco base de x_float: 0061FEFC
x_float + 1: 0061FF00
x_float + 2: 0061FF04
x_float + 3: 0061FF08

Endereco base de x_double: 0061FED8
x_double + 1: 0061FEE0
x_double + 2: 0061FEE8
x_double + 3: 0061FEF0

*/