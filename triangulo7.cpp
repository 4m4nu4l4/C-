#include <iostream>
using namespace std;
float lado1, lado2, lado3;

main()
{
	system ("chcp 65001");
 	cout<<"\n digite o tamanho do lado1 do triangulo:";
 		cin>>lado1;
 	cout<<"\n digite o tamanho do lado2 do triangulo:";
 		cin>>lado2;
 	cout<<"\n digite o tamanho do lado3 do triangulo:";
 		cin>>lado3;
 
    if((lado1 == lado2) && (lado2 == lado3)){
        cout<<"\n o tipo do triangulo é equilátero: \n";
        }
     else{
        if((lado1 == lado2) || (lado2 == lado3) || (lado1 == lado3)){
            cout<<"\n o tipo do triangulo é isóceles \n";
        } else{
               cout<<"\n o tipo do triangulo é escaleno \n";
    		}
  		}
	}



        