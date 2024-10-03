/*
16. Suponha que as seguintes declarações tenham sido realizadas:
float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;

Identifique quais dos seguintes comandos é válido ou inválido:

aloha[2] = value; / válido pois vc atribui um valor em float na posição dois do vetor aloha
scanf("%f", &aloha); / invalido vc enta tentando fazer uma entrada tipo float para o endereço do vetor aloha
aloha = "value"; / invalido vc esta tentando atribuir uma string a uma variavel vetor que é do tipo float alem de nao determinar a posição no vetor "aloha[3]""
printf("%f", aloha); /invalido vc precisa passar a posição do vetor para imprimir seu conteudo ex:"aloha[5]"
coisas[4][4] = aloha[3]; /correto vc esta inserindo na posião i = 4, j = 4 do arrey bidimensional o valor da posição [3] do vetor aloha; 
coisas[5] = aloha; /invalido vc precisar informar em qual posição do vetor esta o valor "aloha[3] a ser passado para matriz e tambem precisa informa linha e coluna da matriz coissas ex: coisas[2][4]
pf = value;/invalido a varialvel pf é um ponteiro que aponta para um float e values é um valor float, o correto é passar o endereço de value "&value"
pf = aloha; /invalido a variavel ponteiro deve receber apenas valore de endereço de memoria
*/



