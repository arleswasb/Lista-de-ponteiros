/*
26. (ENADE, 2023) Na programação de sistemas embarcados, algumas posições de memória servem
para diferentes propósitos, não apenas para armazenar valores. Em algumas dessas memórias,
cada um os bits possui um significado diferente, sendo necessário manipulá-los
individualmente ou em pequenos grupos. Por isso, o conhecimento da álgebra booliana, bem
como dos operadores tilizados para realizar operações binárias nas linguagens de programação,
é essencial para o desenvolvimento desse tipo de sistema. A partir dessas informações, observe
o código apresentado a seguir, escrito na linguagem C, que faz uso de operações binárias sobre
variáveis inteiras.
#include <stdio.h>
int main(){
  int a, b;
  int x, y, z;
  scanf("%d %d", &a, &b);
  x = a; y = b; z = a + b;
  while (a) {
    x = x | b;
    y = y ^ a;
    z = z & (a+b);
    a = a >> 1;
    b = b << 1;
  }
  printf ("%d %d %d\n", x, y, z);
  return 0;
}
Após a chamada desse programa, caso o usuário entre com os valores 10 e 1, nessa ordem, qual
será, exatamente, o valor da saída do programa? Explique, PASSO-A-PASSO, os cálculos
realizados pelo programa para chegar a esse resultado.
*/

/*

analizando cada linha do programa que utiliza operadores binarios

#include <stdio.h>
int main(){
    int a, b;
    int x, y, z;
    scanf("%d %d", &a, &b);         // Lê os valores de 'a' e 'b'
    x = a; y = b; z = a + b;        // Inicializa x, y e z
    while (a) {                     // Executa enquanto 'a' for diferente de 0
        x = x | b;                  // 'x' recebe a operação OR bit a bit entre x e b
        y = y ^ a;                  // 'y' recebe a operação XOR bit a bit entre y e a
        z = z & (a + b);            // 'z' recebe a operação AND bit a bit entre z e (a + b)
        a = a >> 1;                 // 'a' é deslocado 1 bit para a direita
        b = b << 1;                 // 'b' é deslocado 1 bit para a esquerda
    }
    printf("%d %d %d\n", x, y, z);
    return 0;
}

Passo 1: Entrada de dados
Entrada: a = 10, b = 1

Passo 2: Inicialização das variaveis x,y,e z

x = a = 10
y = b = 1
z = a + b = 10 + 1 = 11

enquanto a diferente de 0 temos:

Iteração 1:

x = x | b implica  x = 10 | 1

O operador | faz o OR bit a bit entre 10 e 1:
10 em binário: 1010
1 em binário:  0001
OR bit a bit:  1011 (equivale a 11 em decimal)

Portanto, x passa a valer 11 
/////////////////////////////////////////////////////

y = y ^ a implica y = 1 ^ 10

O operador ^ faz o XOR bit a bit entre 1 e 10:

1 em binário:     0001
10 em binário:    1010
XOR bit a bit:    1011 (equivale a 11 em decimal)

Portanto, y passa a valer 11 tambem.
////////////////////////////////////////////////////

z = z & (a + b) implica em z = 11 & (10 + 1):

Primeiro, calculamos a + b: 10 + 1 = 11

Agora fazemos a operação AND bit a bit entre z e a + b:

z = 11  que é em binário:    1010
a + b = 11que é em binário:  1011
AND bit a bit:               1011 (equivale a 11 em decimal)

Portanto, z continua a valer 11.
////////////////////////////////

a = a >> 1:

Desloca a 1 bit para a direita: 10 >> 1

10 em binário é 1010 e ao deslocar um bit à direita passa para 0101 (equivale a 5 em decimal)

Portanto, a passa a valer 5.
/////////////////////////////////

b = b << 1:

Desloca b 1 bit para a esquerda: 1 << 1

1 em binário é 0001, e ao deslocar um bit à esquerda passa a valer 0010 (equivale a 2 em decimal)

Portanto, b passa a valer 2.
//////////////////////////////////////////////

valor das variaveis ao fim da iteração 1: 

a = 5, b = 2
x = 11,y = 11,z = 11
///////////////////////////////////////////////

Iteração 2:

x = x | b implica em x = 11 | 2

OR bit a bit entre 11 e 2:
11 em binário:  1011
2 em binário:   0010
OR bit a bit:   1011 (equivale a 11 em decimal)

Portanto, x continua com o mesmo valor 11
//////////////////////////////////////

y = y ^ a implica em y = 11 ^ 5:

XOR bit a bit entre 11 e 5:

11 em binário:  1011
5 em binário:   0101
XOR bit a bit:  1110 (equivale a 14 em decimal)

Portanto, y passa a valer 14
//////////////////////////////////////

z = z & (a + b) implica em z = 11 & (5 + 2)

Primeiro, calculamos a + b: 5 + 2 = 7

Agora fazemos AND bit a bit entre 11 e 7:

11 em binário:  1011
7 em binário:   0111
AND bit a bit:  0011 (equivale a 3 em decimal)

Portanto, z passa a valer 3
///////////////////////////////

a = a >> 1:

Desloca a 1 bit para a direita: 5 >> 1

5 em binário:   0101, e ao deslocar um bit à direita: 0010 (equivale a 2 em decimal)

Portanto, a passa a valer 2.
////////////////////////////////////

b = b << 1:

Desloca b 1 bit para a esquerda: 2 << 1

2 em binário: 0010, e ao deslocar um bit à esquerda: 0100 (equivale a 4 em decimal)

Portanto, b passa a valer 4.
///////////////////////////////////////////////////

As variaveis passam a valer:

a = 2, b = 4
x = 11,y = 14,z = 3:

////////////////////////////////////////////////////


Iteração 3:

x = x | b implica em x = 11 | 4

OR bit a bit entre 11 e 4:

11 em binário:      1011
4 em binário:       0100
OR bit a bit:       1111 (equivale a 15 em decimal)

Portanto, x pasa a valer 15.
//////////////////////////////////////

y = y ^ a implica em y = 14 ^ 2

XOR bit a bit entre 14 e 2:

14 em binário:      1110
2 em binário:       0010
XOR bit a bit:      1100 (equivale a 12 em decimal)

Portanto, y passa a valer 12.
/////////////////////////////////////////////

z = z & (a + b) implica em z = 3 & (2 + 4)

Primeiro, calculamos a + b: 2 + 4 = 6

Agora fazemos AND bit a bit entre 3 e 6:
3 em binário:       0011
6 em binário:       0110
AND bit a bit:      0010 (equivale a 2 em decimal)

Portanto, z passa a valer 2.
//////////////////////////////////////////////

a = a >> 1:

Desloca a 1 bit para a direita: 2 >> 1

2 em binário: 0010, e ao deslocar um bit à direita: 0001 (equivale a 1 em decimal)

Portanto, a passa a valer 1.
//////////////////////////////////////////

b = b << 1:

Desloca b 1 bit para a esquerda: 4 << 1

4 em binário: 0100, e ao deslocar um bit à esquerda: 1000 (equivale a 8 em decimal)

Portanto, b passa a valer 8.

//////////////////////////////////////////////////////

As variaveis passam a valer:

a = 1, b = 8
x = 15,y = 12,z = 2:

///////////////////////////////////

Iteração 4:

x = x | b implica em x = 15 | 8

OR bit a bit entre 15 e 8:

15 em binário:      1111
8 em binário:       1000
OR bit a bit:       1111 (equivale a 15 em decimal)

Portanto, x continua valendo 15.
//////////////////////////////////////////////

y = y ^ a implica em y = 12 ^ 1

XOR bit a bit entre 12 e 1:

12 em binário:      1100
1 em binário:       0001
XOR bit a bit:      1101 (equivale a 13 em decimal)

Portanto, y passa a valer 13.
/////////////////////////////////////////////////////

z = z & (a + b):

z = 2 & (1 + 8)

Primeiro, calculamos a + b: 1 + 8 = 9

Agora fazemos AND bit a bit entre 2 e 9:

2 em binário:       0010
9 em binário:       1001
AND bit a bit:      0000 (equivale a 0 em decimal)

Portanto, z passa a valer 0.
///////////////////////////////////////////////

a = a >> 1:

Desloca a 1 bit para a direita: 1 >> 1

1 em binário: 0001, e ao deslocar um bit à direita: 0000 (equivale a 0 em decimal)

Portanto, a passa a valer 0.
///////////////////////////////////////////////////////////////

Fim do laço while pois a ficou igual a zero


Saída final do programa:

No final, os valores de x, y e z são:

x = 15
y = 13
z = 0
*/

#include <stdio.h>
int main(){
    int a, b;
    int x, y, z;
    scanf("%d %d", &a, &b);
    x = a; y = b; z = a + b;
    while (a) {
        x = x | b;
        y = y ^ a;
        z = z & (a+b);
        a = a >> 1;
        b = b << 1;
    }
    printf ("%d %d %d\n", x, y, z);
    return 0;
}

