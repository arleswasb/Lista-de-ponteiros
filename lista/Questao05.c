// Um programador construiu o seguinte código e esperava na saída o texto gostinho, mas não
// obteve essa saída. Justifique o porquê de não ter obtido o resultado esperado.


#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void funcao(char **str){
    //ou fodifica aqui o valor a ser alterado do parametro da função ou acrescenta 1 unidade em puts
    //(*str)++;
    str++;
}
int main(){
    char *str = (void*)malloc(50*sizeof(char));
    strcpy(str, "Agostinho");
    funcao(&str);
    puts(str+1);//temos que deslocar o ponteiro da posição inicial (0) para posição inicial (1) incrementando em um byte a direita ou modificando o parametro na função
    free(str);
    return 0;
}

/*Quando chamamos funcao(&str), estamos passando o endereço do ponteiro str, ou seja, o valor de &str é um ponteiro para o ponteiro str 
(um char**). Dentro da função funcao(), o parâmetro str é uma cópia do ponteiro &str passado como argumento.
 Ou seja, ele aponta para o ponteiro str original do main. Porém, a operação str++ dentro da função simplesmente 
 modifica essa cópia local, não alterando o ponteiro original no main.
*/