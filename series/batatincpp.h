//////////
#include <iostream>
using namespace std;



float serie1 (float termos)
  {
  double result=1;// começa com um pq a fórmula começa com 1, olhe 1 + .....
	float denominador = 3;// denominador controla as potências de 3: 3 - 9 - 27 - 81 - 243
	int i;
	
  for (int i=2;i<=termos;i++) 
  {
      result = result + (1/denominador);
      denominador*=3;// neste caso o denominador deve ser uma nova variável
   }
   return(result);
   }