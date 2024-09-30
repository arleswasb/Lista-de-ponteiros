//Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de
//atribuição produzem erro de compilação? Justifique.
// p = &i; // a variavel ponteiro recebe o endereço de i - esta correto
//*q = &j; // O endereço para onde aponta do ponteiro q recebe um endereço - não esta correto - como q aponta para um valor inteiro deveria receber valores inteiros
// p = &*&i; // a variavel ponteiro recebe o endereço relacionado ao conteudo contido no endereço de i - esta correto 
// i = (*&)j; O parentese não pode ser utilizado nesta declaração - não esta correto
// i = *&j; // a variavel inteira i recebe o conteudo contido onde o ponteiro j aponta - esta correto
// i = *&*&j; // a variavel i recebe o conteudo para onde o ponteiro j aponta - esta correto
// q = *p; // O ponteiro q não pode receber o conteudo inteiro para onde o ponteiro p aponta - esta errado 
// i = (*p)++ + *q; / A variavel i recebe o conteudo do ponteiro p acrescido de uma unidade e é somado ao conteudo do ponteiro q - esta correto 


#include <stdio.h>

int main(void) {
  int i = 5, j = 6, *p, *q;
   p = &i; 
   printf("%p \n", p);
   q = &j; 
    printf("%p \n", q);
   p = &*&i;
    printf("%p \n", p); 
   i = *&j; 
    printf("%d \n", i);
   //i = *&j;
   i = *&*&j;
    printf("%d \n", i);
   q = p;
    printf("%p \n", q);
   i = (*p)++ + *q;
    printf("%d \n", i);

  return 0;
}