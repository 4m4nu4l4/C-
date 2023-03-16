//fup que leia 5 notas e imprima a media
#include <iostream>
using namespace std;
int i, cont_menor5=0;
float nota, acum_nota, media;
main()
{

	system("chcp 65001");
	cout<<"\n\n";
	cout<<"\t acumulador e contador em c++";
	cout<<"média de notas:\n";
	for (i=0;i<5;i++){
	
	
		cout<<"informe a "<<i+1<<" nota";
		cin>>nota;
		acum_nota=acum_nota+nota;
		if(nota<5)
		{
			cont_menor5++;
		}
}
	media=acum_nota/5;
	cout<<"\nsua média é: "<<media<<"";
	cout<<"\nvc possui: "<<cont_menor5<<" notas baixas";
	cout<<"\n\n";
}

