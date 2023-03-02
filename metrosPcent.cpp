//FUP que leia um valor em metros e converta para centímetros.
#include <iostream>
using namespace std;
int metros, conta;

main(){
	system ("chcp 65001");
	system ("cls");
	 cout<<"\n digite aqui o valor em METROS:";
	 cin>>metros;
	//cin>>cent;
	 
	 conta = metros*100;
	 
	 cout<<"\n"<<conta<<"cm";
}