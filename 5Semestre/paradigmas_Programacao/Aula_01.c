//tipo data exemplo 01
typedef struct{
  int dia;
  int mes;
  int ano
}
int main(void){
  data hoje;
  hoje.dia = 17;
  hoje.mes = 02;
  hoje.ano = 2020;

  data p*; //p é um ponteiro para registros do tipo data
  data hoje;
  p = &hoje; //agora p aponta para hoje
  (*p).dia = 31; //mesma coisa que p->dia
return 0;
}

//exemplo 02 escopo de variável
int soma=0;
int calcula( int vetor[], int tam){
  int soma=0,i;
  for( i=0; i < tam; i++){
  soma = soma + vetor[i];
}
return soma;
}
int main (void) {
  int v[]={1,2,3,4};
  printf("soma1=%d\n",calcula(v,4)); //printa 10
  printf("soma=%d\n",soma); //printa 0
  return 0;
}
