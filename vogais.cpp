//fup que leia um caracter e imprima uma mensagem se a letra é vogal,
// caso nao for imprima uma mensagem que o caracter não é vogal 
#include<iostream>
#include<ctype.h>
using namespace std;
char vogal;
main()
{
	system("chcp 65001");
	cout<<"\n programa letra";
	cout<<"\n digite qualquer letra:";
	cin>>vogal;
	vogal = toupper (vogal); //trasnforma a letra em maiuscula 
	if ((vogal=='a') || (vogal='e') || (vogal='i') || (vogal='o') || (vogal='u'))
	{
		cout<<"\n "<<vogal<<"\n" "é uma vogal";
	}
	else
	{	
		cout<<"\n nao é uma vogal";
	}
	
}