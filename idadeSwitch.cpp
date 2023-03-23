#include <iostream>
#include <stdlib.h> 
#include <iomanip>
#include <conio.h> // Para usar o getch();

int i, idade, acumula, media;
using namespace std;
main ()
{
	
	for (i=1; i<=3; i++)
	{
		do{
			cout<<"\n\n digite a idade da"<<i<<"pessoa:";
			cin>>idade;
			if((idade<0)||(idade>145))
			{
				cout<<"\n\n atenção idade errada";
				cout<<"\n\n digite a idade novamente da"<<i<<"pessoa:";
				cin>>idade;
			}
		} while ((idade<0)||(idade>145));
		
		acumula = acumula+idade;
	}
	media = acumula/i;
	
	 }