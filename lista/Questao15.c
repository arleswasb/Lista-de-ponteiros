/*
15. O que será mostrado na tela pelo seguinte programa? Justifique sua resposta.
#include <stdio.h>
int main(){
   unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6},
                           {7, 8, 9}, {10, 11, 12}};
   printf("%u, %u, %u", x+3, *(x+3), *(x+2)+3); x é uma variavel especial que armazena o endereço da primeira variavel do vetor, ou seja o endereço da primeira posição do vetor

esses printes ao tentar imprimir x na verdade esta imprimento o endereo da primeira posição do vetor como um unsigned int

entao vejamos 

em printf("%u",x+3) ele desloca o endereço do primeiro espaço de memoria do vetor(elemento 1) para a posição onde esta o elemento 10 e imprime 
o endereço de memoria da posição em unsigned int = 6422292

em printf("%u",*(x+3)) ele imprime o conteudo da variavel x deslocada de 3 unidades que é o endereço da posição 10 do vetor em unsigned int = 6422292

em printf("%u",*(x+3)+3)
}
*/

#include <stdio.h>
int main(){
    unsigned int x[4][3] = {
    {1, 2, 3}, {4, 5, 6},
    {7, 8, 9}, {10, 11, 12}
    };
    printf("%u, %u, %u", x+3, *(x+3), *(x+2)+3);
}

resultado da impressão

6422292, 6422292, 6422292
