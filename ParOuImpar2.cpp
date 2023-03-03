// FUP que peça um número.
// Verifique e imprima uma mensagem se esse número é PAR ou se é ÍMPAR.
// Dica:Pares ou Ímpares?
// Utilize:if (num%2==0)cout<<"\n " << num<< " é Par";elsecout<<"\n " << num<< " é Ímpar";

#include <iostream>
using namespace std;
int num;
 
main(){
	system ("chcp 65001");
	system ("cls");
	 cout<<"\n digite o número:";
	 cin>>num;
	 
	 if (num%2==0)
	 {
	 cout<<"\n " << num<< " é Par";
	 }
	 else
	 {
	 cout<<"\n " << num<< " é Ímpar";	
	 }
	 
}