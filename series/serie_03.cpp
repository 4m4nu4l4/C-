//FUP que calcule a série:
// S = 1 + 2/3 + 4/9 + 4/27 - item B

#include <iostream>
#include <iomanip>
using namespace std;

double result=1;// começa com um pq a fórmula começa com 1, olhe 1 + .....
float numerador = 2,denominador = 3;// denominador controla as potências de 3: 3 - 9 - 27 - 81 - 243
int i, termos; 
main()
{
  system("chcp 65001");// para usar acentos
  cout << fixed << setprecision(8);// para que as casas decimais ser mais exatas
  cout<<"\n\n\t\t ****  Série: 1 + 2/3 + 4/9 + 8/27 = ....    *** \n\n";
  cout<< "\n Informe a quantidade de termos ";
  cin>>termos;//termos é a quantidade de cálculos que será feita
  
  
  
  for (i=2;i<=termos;i++) 
  { 
      result = result + (numerador/denominador);
      denominador*=3;// neste caso o denominador deve ser uma nova variável
      numerador *=2;
   }
   cout<<"\n O resultado é: "<<result;
   cout<<"\n\n\n\n\n"; 
}
