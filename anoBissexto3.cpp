//FUP que peça um ano e verifique se o ano informadoé bissexto.Imprima essaInformação.

#include <iostream>
using namespace std;
int ano;
 
main()
{
	system ("chcp 65001");
	system ("cls");
	 cout<<"\n digite um ano:";
	 cin>>ano;
	 
	 if (ano%4==0) 
	 {
	 cout<<"\n " << ano<< " é ano bissexto";
	 }
	 else
	 {
	 cout<<"\n " << ano<< " não é bissexto";	
	 }
	 
}