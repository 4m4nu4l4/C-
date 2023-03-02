//FUP que leia um número. Imprima o sucessor e o 
// antecessor do número informado. 
#include <iostream>
using namespace std;
int numero,sucessor, antecessor;

main()
{
	system ("chcp 65001");
	system ("cls");
	cout<<"informe um numero";
	
	cin>>numero;
	
	sucessor = numero+1;
	antecessor = numero-1;
	
	cout<<"\n\n sucessor:"<<sucessor<<"\n\n antecessor:"<<antecessor<<"";
}
