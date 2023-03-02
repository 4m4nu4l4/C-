//testar a letra 
#include<iostream>
#include<ctype.h>
using namespace std;
char letra;
main()
{
	cout<<"\n programa teste uma letra";
	cout<<"\n digite f ou m:";
	cin>>letra;
	letra=toupper (letra); //trasnforma a letra em maiuscula 
	if ((letra=='f')|| (letra=='F'))
	{
		cout<<"\n F-feminino";
		cout<<"\n passe livre";
	}
	else
	{if ((letra=='m')|| (letra=='M'))
		{
		cout<<"\n M-masculino";
		}
	}
	cout<<"\n\n";
}