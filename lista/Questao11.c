/*
11. Um programador pretendia armazenar em um struct (acessível através de um ponteiro) o nome
de um usuário e um valor inteiro associado e preparou o seguinte programa. Há algum erro
presente no código? Se sim, qual é ele e como pode ser corrigido?



#include <stdio.h>
struct teste{
    int x = 3;
    char nome[20] = "jose";
};

int main(){ 
    struct teste *s;
    printf("%d", s->x);
    printf("%s", s->nome);
}
*/
/*
para acessar a struct atraves de um ponteiro devemos primeiro alocar o espaço de memoria 
para onde o ponteiro aponta e depois inicializar as variaveis no main, portanto devemos criar com malloc o espaço de memoria
*/

#include <stdio.h>
#include <string.h>
struct teste{
    int x;
    char nome[20];
};

int main(){ 
    struct teste *s = (struct teste*) malloc (sizeof (struct teste)); //alocao espaço de memoria para a struct s
    s->x = 3;  // Inicializa os membros da struct
    strcpy(s->nome, "jose");// Usa strcpy para copiar strings
    printf("%d \n", s->x);
    printf("%s", s->nome);
    free(s); // libera a memoria alocada
}