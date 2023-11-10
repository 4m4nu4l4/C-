/* FUP que verifique se o Número é Par ou Impar */

#include <stdio.h>

#include <conio.h>

#include <locale.h>

int main() { //inicio do bloco

  int par;
  int impar;
  int num;
  //setlocale(LC_ALL, "Portuguese"); 
  system("chcp 65001");
  printf("\n\t par ou impar? ");
  printf("\n\n\n Informe um Número: ");
  scanf("%d", & num);

  if (num % 2 == 0) {
    printf("e par");
  } else {
    printf("e impar");
  }
  //cout<<"\n\n\n";
}