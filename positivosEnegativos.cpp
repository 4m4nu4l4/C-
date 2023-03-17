/*FUP que leia a quantidade de números queo usuário desejar e verifique quantos destes números são
negativos e quantos são positivos.
Imprima uma mensagem na tela.*/
#include <iostream>
using namespace std;

float num_neg;

int numeros, i, oi=0, po=0;
main()
{
	//system("chcp 65001");
	cout<<"\n digite a qntd de numeros desejar:";
	cin>>numeros;
	
	for (i=0;i<numeros;i++){
		cout<<"\n digite o numero"<<i+1<<": ";
		cin>>num_neg;
		if (num_neg<0){
			oi++;
		} else{
			if (num_neg>0){
				po++;
			}
		}
	} 
	cout<<"\n os numeros negativos sao:"<<oi<<"os positivos sao:"<<po<<"\n";
}
