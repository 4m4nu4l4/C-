//FUP que leia um valor em quilometros e converta para metros.
#include <iostream>
using namespace std;
int km, conta;

main(){
	system ("chcp 65001");
	system ("cls");
	 cout<<"\n digite aqui o valor em KM:";
	 cin>>km;
	 
	 conta = km*1000;
	 
	 cout<<"\n"<<conta<<"m";
}