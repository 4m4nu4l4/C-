#include <iostream>
using namespace std;
float nota_final, frequencia;
main()
{
	system("chcp 65001");
   cout<<"\n Digite a nota final do aluno: ";
   cin>>nota_final;
   cout<<" \n Informe a frequencia do aluno: ";
   cin>>frequencia; 
   //se(nota_final ==10 ou frequencia >= 75) 
   if ((nota_final >=5 || frequencia >= 75) || (nota_final==10))
     cout<<"\n Aluno APROVADO \n\n"; 
   else 
     cout<<"\n Aluno REPROVADO \n\n"; 
}