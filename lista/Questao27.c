
#include <stdio.h>
#define TAM 10 // define a variavel TAM vale 10
int funcao1(int vetor[], int v){
    for (int i = 0; i < TAM; i++){
        if (vetor[i] == v) //identifica em qual posição do vetor esta o valor de v e retorna a posição
        return i;
    }
    return -1;//se o valor de v não pertencer ao vetor retorna -1
    //esta função varre tosdas as posições do vetor[] em busca do valor de V
}

int funcao2(int vetor[], int v, int i, int f){
    int m = (i + f) / 2;    //encontra o ponto central do vetor[]
    if (v == vetor[m])      //verifica se o valor na posição m do vetor[] é igual ao valor de V
        return m;           //retorna m que é o local no vetor V
    if (i >= f)
        return -1;                          //sai da função quando não encontra o valor de V na função
    if (v > vetor[m])                       //se o valor de V for maior que o valor da posição m do vetro[] ele retorna a função 2 novamente
        return funcao2(vetor, v, m+1, f);   //agora a função 2 recebe parametros da metade superior do vetor[]
    else
        return funcao2(vetor, v, i, m-1);   //se V for menor que o valor da posição m do vetro[] a função 2 recebe parametros da metade inferior do vetor[]
}
    int main(){
    int vetor[TAM] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    printf("%d - %d", funcao1(vetor, 15), funcao2(vetor, 15, 0, TAM-1));
    return 0;
}

/*

Funcionamento do programa:

O vetor é inicializado com os valores {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}.

A função funcao1 (busca em todos os elementos do vetor) é chamada para buscar o valor 15, e o resultado da posição de 15 é impresso.

A função funcao2 (busca recursiva usando a metade do vetor de busca) também é chamada para buscar o valor 15, e o resultado da posição é impresso.
Ambas as funções devem retornar o mesmo índice (7), pois 15 está na posição 7 do vetor.

apesar da mesma resposta pode-se observar que a função dois é mais eficiente pois percorre um menor numero de posições do vetor.

A saída no terminal será: 7 - 7.

analizando as respostas

A respeito das funções implementadas, avalie as afirmações a seguir.

I. O resultado da impressão na linha 24 é: 7 - 7. esta esta correta pois a resposta é essa.

II. A função funcao1(), no pior caso, é uma estratégia mais rápida do que a função funcao2(). Não esta correta pois a função mais rapida é a função 2

III. A função funcao2() implementa uma estratégia ////iterativa/// na concepção do algoritmo. esta errada tambem pois a estrategia implementada é "RECURSIVA"


É correto o que se afirma em:
a. I, apenas.////////////////ESTA É A RESPOSTA CORRETA
b. III, apenas.
c. I e II, apenas.
d. II e III, apenas.
e. I, II e III.



*/
