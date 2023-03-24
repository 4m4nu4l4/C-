//FUP que leia a quantidade de números queo usuário desejar e verifique 
//quantos destes números são negativos e quantos são positivos.Imprima uma mensagem na tela. 
//A quantidade de números negativos
//A quantidade de pares
//A quantidade denúmeros múltiplos de 7
#include <iostream>
using namespace std;

float num_neg;

int numeros, i, neg=0, po=0, par=0, set=0;
main()
{
	//system("chcp 65001");
	cout<<"\n digite a qntd de numeros desejar:";
	cin>>numeros;

	for (i=0;i<numeros;i++){
		cout<<"\n digite o numero"<<i+1<<": ";
		cin>>num_neg;
		if (num_neg<0){
			neg++;
		} else{
			if (num_neg>0){
				po++;
			}
			else{
				
				}
			}
		if (num_neg%2==0){
			par++;
		} else{
			if (num_neg%7==0){
				set++;
			} else{ 
					
				
		}
	}
	cout<<"\n os numeros negativos sao:"<<neg<<" os positivos sao:"<<po<<"\n";
	cout<<"\n os numeros pares sao:"<<par<<"\n;
	cout<<"\n os numeros multiplos"<<set<<"\n;
}