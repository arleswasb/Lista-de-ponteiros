/*
12. Qual será a saída do seguinte programa
#include <stdio.h>
void main(){
  int const *x = 3;
  printf("%d", ++(*x));
}
*/
/*
O programa apresenta dois erros:
Primeiro erro:  É errado atribuir um valor numerio diretamente a uma variavel do tipo ponteiro que aponta para endereços de meoria.
Assim o correto seria colocar em x o endereço de uma variavel constante cujo valor é 3.
desta forma o correto seria:
int valor = 3;
int const *x = &valor

Segundo erro: na impressão de x há uma tentativa de incrementar a variavel valor que fou declarada como constante e portanto invariavel

codigo sugerido:
*/

#include <stdio.h>
void main(){
    int valor = 3;
    int const *x = &valor;
    printf("%d", *x);
}

