// Mostre o que será impresso pelo programa supondo que a variável i ocupa o
// endereço 4094 na memória e que nessa arquitetura os inteiros possuem 2 bytes
// de tamanho.

#include <stdio.h>

int main(void) {
  int i = 5, *p;
  p = &i;
  printf("%p %p %d %d %d %d\n", p, p + 1, *p + 2, **&p, 3 **p, **&p + 4);

  //p guarda o endereço de i = 4094 assim:
  // printf("%p", p) deve imprimir o endereço de i que é 4094
  // printf("%p", p + 1) deve imprimir o endereço 4094 acrescido de dois bytes devido sua arquitetura, logo será 4096
  // printf("%d", *p + 2) deve imprimir o conteudo localizado a onde o ponteiro aponta que era o conteudo de i = 5 mais o inteiro 2 logo será 7
  // printf("%d", **&p ) deve imprimir o conteúdo do endereço de i *(*&p) que será 5. ATENCAO *(&p) é o conteudo do endereço de p que é o endereço de i.
  // printf("%d", 3**p) deve imprimir a multiplicação (primeiro *) de 3 pelo conteudo do ponteiro p que será igual a 15.
  // printf("%d", **&p + 4) deve imprimir o conteudo do endereco de i, pois *(&p) é o conteudo do endereço de p que é o endereço de i, mais o inteiro 4 que será 9.

  return 0;
}