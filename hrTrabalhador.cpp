//FUP que leia o valor da hora do trabalhador e a 
// quantidade de horas trabalhadas. Imprima o valor
// que o trabalhador deverá receber ao final do mês.
#include <iostream>
using namespace std;
int valorHora, horas, conta;

main(){
	system ("chcp 65001");
	system ("cls");
	 cout<<"\n \t quanto vc ganha a hr?:";
	 cin>>valorHora;
	 cout<<"\n quantas horas vc trabalhou esse mes?:";
	 cin>>horas;
	 
	 conta = valorHora*horas;
	 
	 cout<<"\n\n esse mes vc ganhará:"<<conta<<"";
}