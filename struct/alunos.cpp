#include <iostream>
#include <string.h>

using namespace std;

  /*Criando a struct */
  struct dados_aluno
  {
    char nome[50];
    char disciplina[50];
    float nota_prova1;
    float nota_prova2;
    
  };
  	int const TAM = 2; //constante
    int i;
    
// mina variavel é aluno, aluno é do tipo dados_aluno
	dados_aluno Aluno[TAM];  //criar a variavel do tipo struct
	
main()
{
   
 
	for(i=0; i<TAM; i++){
	system("chcp 65001");// para usar acentos
  /*Criando a variável aluno que será do
  tipo struct dados_aluno */
		
 
  cout<<" \n---------- Cadastro de aluno -----------\n\n\n";
  cout<<"Nome do aluno ......: ";
  fflush(stdin); //Para limpar o buffer em Windows, use o: fflush(stdin) 
 
  gets(Aluno[i].nome); //somente para vetores de caracteres 
  //tabelaNaFrente.nome
  
  cout<<" \n Disciplina ......: ";
  fflush(stdin);
  
  gets(Aluno[i].disciplina);
  
  
  cout<<"\nInforme a 1a. nota ..: ";
  cin>>Aluno[i].nota_prova1;
  do{
  
   if ((Aluno[i].nota_prova1<=0)||(Aluno[i].nota_prova1>=10)){
 	cout<<"nota inválida, escreva novamente ";
	cin>>Aluno[i].nota_prova1;
 }
} while((Aluno[i].nota_prova1<=0)||(Aluno[i].nota_prova1>=10));


  cout<<"\nInforme a 2a. nota ..: ";
  cin>>Aluno[i].nota_prova2;
  do{
  
   if ((Aluno[i].nota_prova2<=0)||(Aluno[i].nota_prova2>=10)){
 	cout<<"nota inválida, escreva novamente ";
	cin>>Aluno[i].nota_prova2;
 }
} while((Aluno[i].nota_prova2<=0)||(Aluno[i].nota_prova2>=10));

}
    for(i=0; i<TAM; i++){
  cout<<"\n\n --------- IMPRIMINDO os dados da struct ---------\n\n";
  cout<<"\n Nome ...........:";
  puts (Aluno[i].nome);
  cout<<"\n Disciplina .....: ";
  puts(Aluno[i].disciplina);
  cout<<"\n Nota da Prova 1 ...: " << Aluno[i].nota_prova1;
  cout<<"\n Nota da Prova 2 ...: " << Aluno[i].nota_prova2;
 
 
}
 
}
