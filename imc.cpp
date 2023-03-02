//Tendo como dados de entrada a altura de uma pessoa, 
//construa   um programa que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) – 58.
#include <iostream>
using namespace std;
float altura, conta;

main(){
	system ("chcp 65001");
	system ("cls");
	 cout<<"\n digite aqui sua altura:";
	 cin>>altura;
	 
	 conta = (72.7*altura) - 58;
	 
	 cout<<"\n seu imc é:"<<conta<<"";
}