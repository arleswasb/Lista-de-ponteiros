// Determine o valor das seguintes expressões, justificando o porquê de cada resultado:
//p == &i;
// *p - *q;
// **&p;
// 3 - *p/(*q) + 7;

#include <stdio.h>

int main(void) {
  // float x;
  // scanf("%f", &x);
  // printf("%f\n", x);
  int i=3, j=5;
  int *p, *q;
  p = &i;
  q = &j;
  printf("%d\n", p == &i); // O printf retorna na tela o resultado da verificação se o conteudo da variavel p é igual ao endereço da variavel i. como o conteudo de p é igual ao endereço de i, o resultado é 1.
  
  printf("%d\n", *p - *q); // O printf retorna na tela o resultado da subtração do conteudo da variavel p com o conteudo da variavel q. Como o conteudo de p é o conteudo do endereço de i sera igual a 3 e o conteudo de q é o conteudo do endereço de j será igual a 5, o resultado dessa diferença será -2.
  
  printf("%d\n", **&p); // O printf retorna na tela o resultado de *(*(&p)), assim *(&p) é o conteudo do ponteiro para int "p", que é o endereço de i logo *(*(&p)) ´o conteudo do endereço de i que é 3.
  
  printf("%d\n", 3 - *p/(*q) + 7); // O printf retorna na tela o resultado da subtração de 3 com o resultado da divisão de *p por (*q) mais 7. Como o conteudo de p é igual a 3 e o conteuo de q é igual a 5, o resultado é 0.6 mas o resultado é arredondado para 0, pois tratam-se de numeros inteiros. Assim a expressão fica 3 - 0 + 7, que é igual a 10.
  
  
  return 0;
}