/*
14. Justifique porque a saída do seguinte programa é mostrado o valor 22
#include <stdio.h>
int f(int a, int *pb, int **ppc) {
  int b, c;
  **ppc += 1; /**pcc é o endereço de a que aponta para b que aponta para c que vale 5  e é incrementado em uma unidade logo passa a valer 6
  c = **ppc;
  *pb += 2; / *pb é o endereço de b que aponta para o endereço de c que vale 5 e é incrementado em 2 unidade logo passa a valer 7
  b = *pb;
  a += 3; /a é igual ao valor inteiro c que é igual a 5 e é incrementado em 8 unidades e passa a valer 8
  return a + b + c; a expressão será 8 +7 + 6 = 22
}

void main() {
  int c, *b, **a;
  c = 5;   /c recbe o valor inteiro 5
  b = &c;  /b recebe o endereço de c que aponta para o valor inteiro 5
  a = &b;  /a recebe o valor do endereço de b que aponta para o endereço de c que vale 5
  printf("%d\n", f(c, b, a));  / logo a expressão é equivamente a 8 + 7 + 6 que é igual a 22
  getchar();
}
*/

#include <stdio.h>
int f(int a, int *pb, int **ppc) {
    int b, c;
    **ppc += 1;
    c = **ppc;
    *pb += 2;
    b = *pb;
    a += 3;
    return a + b + c;
}

void main() {
    int c, *b, **a;
    c = 5;
    b = &c;
    a = &b;
    printf("%d\n", f(c, b, a));
    getchar();
}