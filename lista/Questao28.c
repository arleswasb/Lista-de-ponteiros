
#include <stdio.h>
    char *a[] = {"AGOSTINHO", "MEDEIROS", "BRITO", "JUNIOR"};
    char **b[] = {a + 3, a + 2, a + 1, a};
    char ***c = b;
int main() {
    printf("%s ", **++c);
    printf("%s ", *--*++c + 3);
    printf("%s ", *c[-2] + 3);
    printf("%s ", c[-1][-1] + 1);
    return 0;
}

/* impressao do programa acima
BRITO STINHO IOR EDEIROS
*/


/*
A variavel a e do tipo ponteiro para char e é um array de ponteiros 

char *a[] = {"AGOSTINHO", "MEDEIROS", "BRITO", "JUNIOR"};

a[0] = "AGOSTINHO";
a[1] = "MEDEIROS";
a[2] = "BRITO";
a[3] = "JUNIOR";

com essas posições dentro do vetor

A  variavel **b[] é um array de ponteiros duplos, que armazena ponteiros para os elementos de a em ordem inversa.

b[0] = a + 3; // Aponta para "JUNIOR"
b[1] = a + 2; // Aponta para "BRITO"
b[2] = a + 1; // Aponta para "MEDEIROS"
b[3] = a;     // Aponta para "AGOSTINHO"

A variavel ***c[] é um ponteiro triplo, inicializado com b, ou seja, c aponta para o início do array b, para cada letra inicial de cada nome.

agora vamos analizar as proposições

a) printf("%s ", **++c);

 ++c incrementa o ponteiro c em uma unidade,(atenção como antes apontava para b[0] agora aponta para b[1]) no qual aponta para a + 2, que aponta para "BRITO".
 **c desreferencia c duas vezes. Primeiro, *c acessa b[1], que é a + 2 (um ponteiro para o segundo índice de a, que contém "BRITO"). 
 Em seguida, **c acessa o conteúdo desse ponteiro, ou seja, a string "BRITO".

 logo a primeira impressão será "BRITO".

b) printf("%s ", *--*++c + 3);

++c move o ponteiro c para b[2], (como no passo anterior ele estava em b[1]), logo passa a apontar para a + 1, que aponta para "MEDEIROS").

*++c acessa o valor de b[2], que é a + 1. (atenção o valor de C passa a ser b[2])
O --* decrementa esse ponteiro, fazendo-o apontar para a[0] (que contém "AGOSTINHO").

agora *(--*++c), ele desreferencia o conteudo do endereço e acessa a string "AGOSTINHO". 

Em seguida, +3 desloca o ponteiro da posição inicial da palavra agostinho para o quarto caractere da string "AGOSTINHO", que é 'S'.

logo a impressão começará a partir de 'S', resultando em "STINHO".

c) printf("%s ", *c[-2] + 3);


c[-2] acessa b[0] (porque c atualmente está em b[2]) e -2 passa o ponteiro para duas posições atrás. 
Ou seja, c[-2] aponta para b[0], que contém a + 3 (a string "JUNIOR").

*c[-2] desreferencia a posição e acessa o valor de a[3], que é a string "JUNIOR". 

Depois o +3 desloca o ponteiro da posição inicial da palavra "junior" para o quarto caractere da palavra"JUNIOR", que é 'I'.

logo a impressão começará a partir do "I", resultando em "IOR".

d) printf("%s ", c[-1][-1] + 1);


c[-1][-1] acessa a[2], que é "BRITO". 
O +1 desloca o ponteiro relacionado a coluna do array bidimensional em um bity (para o segundo caractere de "BRITO"), que é a posição do 'R'.
logo a impressão começará a partir do "R", resultando em "RITO".

*/


