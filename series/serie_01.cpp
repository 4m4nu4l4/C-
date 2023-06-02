//FUP que calcule a série:
// S = 1+1/3+ 1/9 + 1/27 - item A

#include <iostream>
#include <iomanip>
#include "batatincpp.h"

using namespace std;
int i;

main()
{
float termos;
  system("chcp 65001");// para usar acentos
  cout << fixed << setprecision(8);// para que as casas decimais ser mais exatas
  cout<<"\n\n\t\t ****  Série: 1 + 1/3 + 1/9 + 1/27    *** \n\n";
  cout<< "\n Informe a quantidade de termos ";
  cin>>termos;//termos é a quantidade de cálculos que será feita
  
  termos = serie1(termos);
  // o i começa com 3 pq na série a denominador da divisão começa com 3 
  
}
  
  

