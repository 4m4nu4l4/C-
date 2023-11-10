/* FUP que verifique se a pessoa poderá ir na Igreja
sozinha (o) nas seguintes condiçõe:
Rapaz só poderá ir na Igreja sozinho se for maior
 de 18 anos.

Garota só poderá ir na Igreja sozinha se for m
 maior de 35 anos.
*/

#include <stdio.h>

#include <conio.h>

#include <locale.h> // PARA O setlocale

#include <ctype.h> // PARA a função toupper ()

int main() {
  char sexo;
  int idade;
  system("chcp 65001");
  //setlocale(LC_ALL, "Portuguese"); 

  printf(" \n\t SERÁ QUE VOCÊ PODERÁ SAIR SOZINHO(A)? ");
  printf("\n\n\n Informe uma letra para o Sexo:  ");

  scanf("%c", & sexo);

  //sexo = toupper (sexo); //TRANSFORMA EM MAIUSCULO

  printf("\n\n\n Informe sua Idade:  ");
  scanf("%d", & idade);

  if ((sexo == 'M') && (idade >= 18) || (sexo == 'm') && (idade >= 18))
    printf("\n\n Poderá ir na Igreja sozinho");
  else

  if ((sexo == 'F') && (idade >= 35) || (sexo == 'f') && (idade >= 35))
    printf("\n\n Poderá ir na Igreja sozinha");

  else
    printf("\n\n Ai ai ai:  Vai ficar em casa!");

  //cout<<"\n\n\n";
} //fecha o bloco