/*
18. O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e
escreva um pequeno programa exemplificando o uso deste recurso. Explique seu programa,
comentando cada uma das linhas de código.
*/

/*
Um ponteiro para função em C é uma maneira de armazenar o endereço de uma função em uma variável. 
Assim como os ponteiros para variáveis, esses ponteiros podem ser usados para chamar funções de forma indireta, permitindo maior flexibilidade, 
como escolher qual função chamar em tempo de execução. A sintaxe para declarar um ponteiro de função pode ser um pouco complexa devido
aos parênteses que são necessários ao redor do ponteiro.

MAIS ABAIXO TEMOS UM EXEMPLO DE UMA FUNÇÃO COM PONTEIRO PARA UMA FUNÇÃO


Explicação do código:
Podemos chamar funçoes com ponteiros passando ou não parametros para as funções, exemplo

PONTEIRO SEM ARGUMENTOS:

DigaOla imprime uma mensagem, enquanto dobro recebe um inteiro e imprime seu dobro.
Ponteiro para função: funcPtr é declarado como ponteiro para uma função que não recebe parâmetros e não retorna nada.
Atribuição de função ao ponteiro: A variável funcPtr é atribuída à função DigaOla, o que significa que o ponteiro agora "aponta" para essa função.
Chamando a função através do ponteiro: Usando funcPtr(), chamamos a função para a qual ele aponta.


PONTEIROS COM ARGUMENTOS:

 funcPtrcomarg é um ponteiro para uma função que recebe um argumento inteiro. Ele é usado para apontar À FUNÇÃO DOBRO, e chamamos a função com funcPtrcomarg(10).
Esse recurso é útil em situações onde o comportamento do programa pode mudar dinamicamente, como na implementação de CHAMADAS DE RETORNO (CALLBACKS) ou tabelas de funções​.

*/

#include <stdio.h>

// Função simples que imprime uma mensagem
void DigaOla() {
    printf("Ola. Mundo!\n");
}

// Função que recebe um número e imprime o dobro dele
void dobro(int n) {
    printf("O dobro de %d : %d\n", n, 2 * n);
}

int main() {
    // Declaração de um ponteiro para função que não recebe argumentos e não retorna nada
    void (*funcPtr)();
    
    // Apontando o ponteiro para a função 'DigaOla'
    funcPtr = DigaOla;
    
    // Chamando a função usando o ponteiro
    funcPtr();
    
    // Mudando o ponteiro para uma função que recebe um argumento
    void (*funcPtrcomarg)(int);
    funcPtrcomarg = dobro;
    
    // Chamando a função com argumento através do ponteiro
    funcPtrcomarg(10);
    
    return 0;
}



