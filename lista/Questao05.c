// Um programador construiu o seguinte código e esperava na saída o texto gostinho, mas não
// obteve essa saída. Justifique o porquê de não ter obtido o resultado esperado.


#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void funcao(char **str){
    str++;
}
int main(){
    char *str = (void*)malloc(50*sizeof(char));
    strcpy(str, "Agostinho");
    funcao(&str);
    puts(str+1);//temos que deslocar o ponteiro da posição inicial (0) para posição inicial (1) incrementando em um byte a direita.
    free(str);
    return 0;
}