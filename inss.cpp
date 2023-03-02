//Modifique o progama 2(da lista) deduza 13% do valor
//a receber pelo trabalhador. Esse valor é do INSS.
//Imprima: o salário bruto, quanto de imposto foi 
//tirado do salário e o salário final.
#include <iostream>
using namespace std;
int valorHora, horas, conta, salarioBruto, inss, final;

main(){
	system ("chcp 65001");
	system ("cls");
	 cout<<"\n quanto vc ganha a hr?:";
	 cin>>valorHora;
	 cout<<"\n quantas horas vc trabalhou esse mes?:";
	 cin>>horas;
	 
	 salarioBruto = valorHora*horas;
	 inss = salarioBruto*13/100;
	 final = salarioBruto-inss;
	 
	 cout<<"\t \n\n seu salario seria:"<<salarioBruto<<"\t \n o valor descontado do inss será:"<<inss<<"\t \nentao seu salario final será:"<<final <<"";
}