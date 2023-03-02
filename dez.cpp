//. Leia dois valores A e B, faça um programa que efetue a troca 
//dos valores de forma que a variável A passe a possuir o valor da variável B e a variável B 
//passe a possuir o valor da variável A. 

#include <iostream>
using namespace std;
int A, B, A1, B1;

main(){
	system ("chcp 65001");
	system ("cls");
	 cout<<"\n diga o valor de A:";
	 cin>>A;
	 cout<<"\n diga o valor de B";
	 cin>>B;
	 
	 A = B;
	 B = A;
	 B1 = B;
	 A1 = A;
	 
	 cout<<"\t \n\n A:"<<B<<"\t \n B:"<<A<<"";
}