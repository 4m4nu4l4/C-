//Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. 
//A fórmula de conversão é : F = (9*C+160)/5
//Sendo F a temperatura em Fahrenheit e C a temperatura em Celsius. 

#include <iostream>
using namespace std;
float cel, F;

main(){
	system ("chcp 65001");
	system ("cls");
	 cout<<"\n digite aqui os graus celsius:";
	 cin>>cel;
	 
	 F = (9*cel+160)/5;
	 
	 cout<<"\n seu Fahrenheit é:"<<F<<"";
}