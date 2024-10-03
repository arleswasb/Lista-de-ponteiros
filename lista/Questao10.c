// 10. O que fazem os seguintes programas em C?

/*
 #include <stdio.h>
int main(){
    int vet[] = {4, 9, 13};
    int i;
    for(i=0;i<3;i++){
    printf("%d ", *(vet+i));
    }
}

*/

/* 
Este programa percore o vetor vet[] com um for e imprime os seus elementos 
deslocando o endereço da posição inicial do vetor de quatro em quatro bytes.
*/

#include <stdio.h>
int main(){
    int vet[] = {4, 9, 13};
    int i;
    for(i=0;i<3;i++){
        printf("%X ",vet+i);
    }
}

/* 
Este programa percore o vetor vet[] com um for e imprime os endereços de memoria dos seus elementos 
deslocando o endereço da posição inicial do vetor de quatro em quatro bytes usando o printf("%X").
*/
