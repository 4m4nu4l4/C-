/* FUP que verifique se a letra informada
é referente ao sexo da pessoa */

#include <stdio.h>

#include <conio.h>

#include <locale.h>

#include <ctype.h>


int main() {
  char letra;
  system("chcp 65001");

  printf(" \n\t Verificando se a  Letra é uma VOGAL ");
  printf("\n\n\n Informe uma Letra: ");
  scanf("%c", & letra);
  if ((letra == 'A') || (letra == 'a')) {
    printf("\n\n A letra informada é uma VOGAL");
  } else
  if ((letra == 'E') || (letra == 'e')) {
    printf("\n\n A letra informada é uma VOGAL");
  } else

  if ((letra == 'I') || (letra == 'i')) {
    printf("\n\n A letra informada é uma VOGAL");
  } else
  if ((letra == 'O') || (letra == 'o')) {
    printf("\n\n A letra informada é uma VOGAL");
  } else
  if ((letra == 'U') || (letra == 'u')) {
    printf("\n\n A letra informada é uma VOGAL");
  } else {
    printf("\n\n Esse caracter Não é VOGAL");
  }

}