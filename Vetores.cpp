//vetor: leitura de um vetor
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>

int i, cont=0;
int const TAM=5;//criação de uma constante de tamanho para ser usada no vetor!!
float media=0,acum_notas;//media=0 -> para não pegar número lixo
float notas[TAM];//gerencia o tamanho do vetor
using namespace std;
main(){
 	system("chcp 65001");
	cout<<"\n\tinforme "<<TAM<<" notas";
	for(i=0;i<TAM;i++){
		cout<<"\n\ninforme a "<<i+1<<" notas: ";
		cin>> notas[i];
		if(notas[i]<7){ //tem que ser o i para que possamos usar a nota declarada pelo usuário 
		cont++; //qunado só tem uma linha não tem necessidade de usar as chaves 
		}
		acum_notas += notas[i];
	 }
	  media = acum_notas/TAM;
	   cout<<"\na media é: "<<media;
	   cout<<"\nnotas abaixas de sete: "<<cont++;
	   cout<<"\n\n\n\n";
	}
