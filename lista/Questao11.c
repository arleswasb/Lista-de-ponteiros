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

//O erro do codigo é que os valores de x nome[20] não podem ser atribuidos na definição da struct
// a correção pode ser feita realizando a atribuição na funçãao principal

#include <stdio.h>
struct teste{
    int x;
    char nome[20];
};

int main(){ 
    struct teste *s;
    s->x = 3;  // Inicializa os membros da struct
    strcpy(s->nome, "jose");// Usa strcpy para copiar strings
    printf("%d \n", s->x);
    printf("%s", s->nome);
}