// Determine o que será mostrado pelo seguinte programa. Compile-o, execute-o e explique se
// foram obtidas as respostas esperadas. Justifique o porque de cada uma.

int main(void){
float vet[5] = {1.1,2.2,3.3,4.4,5.5};
float *f;
int i;
f = vet;

printf("contador/valor/valor/endereco/endereco\n");

for(i = 0 ; i <= 4 ; i++){
    printf("i = %d",i);
    printf(" vet[%d] = %.1f",i, vet[i]);
    printf(" *(f + %d) = %.1f\n",i, *(f+i));
    }
}
//contador/valor/valor/endereco/endereco
//i = 0 vet[0] = 1.1 *(f + 0) = 1.1
//i = 1 vet[1] = 2.2 *(f + 1) = 2.2
//i = 2 vet[2] = 3.3 *(f + 2) = 3.3
//i = 3 vet[3] = 4.4 *(f + 3) = 4.4
//i = 4 vet[4] = 5.5 *(f + 4) = 5.5

// o resultado  acima é a saida do programa
// o resultado apresenta duas formas de imprimir valores de um vetor

// utilizando a simbologia com "[]" e o numero da posição dos elementos do vetor vet[0],vet[1],...

//  utilizando o deslocamento do endereço apontado pelo ponteiro em unidade de bytes conforme o tipo ao qual o ponteiro aponta.
