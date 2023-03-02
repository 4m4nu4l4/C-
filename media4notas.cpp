#include <iostream>
using namespace std;
int num1,num2,num3,num4,media;

main(){
	system ("chcp 65001");
	system ("cls");
	
	cout<<"\n\n \t calculando a media de 4 notas";
	cout<<"\n digite a primeira nota:";
	cin>>num1;
	cout<<"\n digite a segunda nota:";
	cin>>num2;
	cout<<"\n digite a terceira nota:";
	cin>>num3;
	cout<<"\n digite a quarta nota:";
	cin>>num4;
	
	media = (num1+num2+num3+num4)/4;
	cout<<"\n sua média é:"<<media;
	cout<<"\n\n\n";
}
