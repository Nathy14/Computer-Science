/*1-) Para linguagens C, C++ e Java liste todos os tipos básicos suportados e seus tamanhos em bytes.
R.:
Linguagem C e C++
char - 1 byte
int - 2 bytes
float - 4 bytes
double - 8 bytes
void

Linguagem Java
boolean
byte
char
short
int
long
float
double

2-)Explique o seria uma linguagem fortemente tipada, de exemplos de linguagens fortemente tipadas e não fortemente tipadas.
R.: São aquelas que todas as variáveis possuem um tipo específico e seus tipos são importantes para a linguagem.
Exemplos: Fortran, Cobol, Java, C#

3-)Explique porque a expressão *p.dia tem significado muito diferente de (*p).dia.
R.: A expressão *p.dia irá acessar o "dia" do ponteiro p, como ele não existe, ocorrerá um erro de compilação.
Já a expressão (*p).dia irá acessar o "dia" do apontado por p*, e assim retornará seu respectivo valor.

4-)Leia a seção 5.4.3 do livro de Sebesta e responda qual é vantagem e desvantagens de se utilizar variáveis com tempo de vida estático.
R.: LER O LIVRO
*/

//5-)
#include <stdio.h>

struct tempo{
  int minutos;
  int horas;
};


int main(void) {
  int valor;
  struct tempo hm;
  printf("Escreva o tempo em minutos: ");
  scanf("%d", &valor);
  hm.horas = valor/60;
  hm.minutos = valor%60;
  printf("\n O horário é igual a %d:%d",hm.horas,hm.minutos);
  return 0;
}
//6-)
#include <stdio.h>

struct data{
  int dia;
  int mes;
  int ano;
};

int main(void) {
  int valor;
  struct data idade;
  printf("Digite sua idade: ");
  scanf("%d", &valor);
  idade.mes = valor*12;
  idade.dia = valor*365;
  printf("Você possui %d anos\n", valor);
  printf("Você possui %d meses\n", idade.mes);
  printf("Você possui %d dias\n", idade.dia);
  return 0;
}


