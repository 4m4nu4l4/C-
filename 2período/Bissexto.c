/* FUP que verifique se o Número é Par ou Impar */

#include <stdio.h>

#include <conio.h>

#include <locale.h>

int main() { //inicio do bloco

  int ano;

  //setlocale(LC_ALL, "Portuguese");
  system("chcp 65001");
  //tela Inicial:
  printf("\n\t Verificando se o Ano é Bissexto ");
  printf("\n\n\n Informe um Número: ");
  scanf("%d", & ano);
  //int ano;

  if (ano % 4 == 0) {
    printf("esse ano e bissexto ");
  } else {
    printf("esse ano nao e bissexto");
  }

}