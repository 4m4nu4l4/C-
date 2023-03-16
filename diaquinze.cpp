/* FUP que peça um número e imprima a tabuada deste número.
*/
#include<iostream> 
using namespace std;
int num,i;
main() 
{
 //setlocale(LC_ALL, "Portuguese"); //para usar acentuação
 system("chcp 65001"); //para usar acentuação
 cout<<"\n\t ****   PROGRAMA TABUADA ****"; 
 cout<<" \n\n Informe um número:  "; 
 cin>>num;
 for(i=0;i<10;i++);              
 { cout<<"\n"<<num<<"*"<<i<<"="<<num*i; 	
 }
 cout<<"\n\n\n\n"; 
}