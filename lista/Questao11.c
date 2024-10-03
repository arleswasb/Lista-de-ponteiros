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

