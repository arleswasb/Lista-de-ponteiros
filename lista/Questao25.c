/*
25. (ENADE, 2023) Memory leak, ou vazamento de memória, é um problema que ocorre em
sistemas computacionais quando uma parte da memória, alocada para uma determinada
operação, não é liberada quando se torna desnecessária. Na linguagem C, esse tipo de problema
é quase sempre relacionado ao uso incorreto das funções malloc( ) e free( ). Esse erro de
programação pode levar a falhas no sistema se a memória for completamente consumida. Um
dos trechos abaixo apresenta um vazamento de memória. Identifique-o e justifique sua
resposta.
*/

/*
//(A)
void f( ){
  void *s;
  s = malloc(50);
  free(s);               //este esta correto pois liberou a memoria dinamica alocada da variavel s,portanto nao houve vazamento de memoria
}


//(B)
int f( ){
  float *a;
  return 0;             //Nao houve vazamento de memoria pois nao houve alocação dinmica de memoria.
}

//(C)
int f(char *data){
  void *s;
  s = malloc(50);
  int size = strlen(data);
  if (size > 50)
    return(-1);
  free(s);
                        // Neste caso há vazamento de memoria pois caso o tamanho de size seja maior que 50 o programa retorna -1 e não libera a memoria com free
  return 0;
}

//(D)
int *f(int n){
  int *num = malloc(sizeof(int)*n);
  return num;
}
int main(void){
  int *num;
  num = f(10);
  free(num);        //não há vazamento de memoria pois o free é aplicado a variavel ponteiro que apontava para o bloco de memoria reservada por malloc
  return 0;
}

//(E)
void f(int n){
  char *m = malloc(10);
  char *n = malloc(10);
  free(m);          //o endereço reservado m foi liberado pelo free
  m = n;            //m recebe o ponteiro n que aponta para o bloco de memoria reservado
  free(m);         //não há vazamento de memoria pois ao liberar m estamos liberando o bloco de memoria reservado para n
  free(n);          // da um erro de liberação duplicada de memoriamas náo é erro de vazamento de memoria
}
*/

