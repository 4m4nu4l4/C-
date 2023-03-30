/* 
Faculdade SENAC - Joinville - SC
Profª: Cláudia Werlich
Atividade Avaliativa de Introdução a Programação de Computadores

Insira Seu nome completo aqui:Kauã Neneve

Data: <<versão 01 ou versão_final>> :26/03/2023
(Altere a data conforme a entrega)

*/

#include <iostream>
#include <stdlib.h> 
#include <iomanip>
#include <conio.h> // Para usar o getch();

float esfera,resultado_esf,raio;// variaveis da primeira atividade esfera
float raio_maior,raio_menor,resultado_anel;// variaveis da primeira atividade anel
float lado,resultado_icosaedro;// variaveis da primeira atividade icosaedro
float lado1,resultado_dodecaedro;// variaveis da primeira atividade icosaedro
int op,at1;
using namespace std;
main ()
{
   system("chcp 65001");// para usar acentos
   cout << fixed << setprecision(2);// deixar o float com 2 casas decimais
   system ("cls"); // limpar a tela
   system ("color 5"); // usar a cor verde
   cout<<"ATIVIDADE AVALIATIVA DE INTRODUÇÃO A PROGRAMAÇÃO \n";
   cout<<"INDICADORES: \n";
   cout<<"1. Realiza operações matemáticas de acordo com os fundamentos e o contexto apresentado.\n";
   cout<<"2. Utiliza adequadamente os tipos de variáveis em algoritmos de acordo com o contexto.\n";
   cout<<"3. Utiliza operações aritméticas em programas.\n";
   cout<<"4. Utiliza os comandos de leitura e escrita em algoritmos de acordo com o contexto.\n";
   cout<<"5. Utiliza as estruturas condicionais em algoritmos de acordo com o contexto.\n";
   cout<<"6. Utiliza as estruturas de repetição em algoritmos de acordo com o contexto. \n";
   
   
   do{
   system ("cls");
   system ("color 5"); 
   cout<<"\n ==============PERSONALIZE A INTERFACE DO PROGRAMA===============================================";
   cout<<"\n [1] Questão 01 ";
   cout<<"\n [2] Questão 02 ";
   cout<<"\n [3] Questão 03 ";
   cout<<"\n [4] Questão 04 ";
   cout<<"\n [5] Questão 05 ";
   cout<<"\n [6] FIM <<Bônus >>.";
   cout<<"\n\n\n\n ESCOLHA UMA OPÇÃO --> ";
   cin>>op;
  switch (op)
  {
    case  1:{         
        do{
         system ("cls");
         system ("color 4"); 
         cout<<"\n ♦♦♦♦♦♦♦♦♦♦♦♦ Escolha a forma que vc quer saber a area ♦♦♦♦♦♦♦♦♦♦♦♦";
         cout<<"\n [1] Esfera ";
         cout<<"\n [2] Anel ";
         cout<<"\n [3] Icosaedro ";
         cout<<"\n [4] Dodecaedro ";
         cout<<"\n [5] Questão 05 ";
         cout<<"\n [6] FIM ";
         cout<<"\n [7] FIM ";
         cout<<"\n\n\n\n ESCOLHA UMA OPÇÃO  ";
        cin>>at1;
        switch (at1)
  {
    case  1:{         
            cout<<"informe o raio da esfera: ";
            cin>>esfera;
            resultado_esf = 4*3.14*esfera*esfera;
            cout<<"resultado: "<<resultado_esf<<"";        
             getch(); // espera digitar algo
             break;
           }
    case 2:{           
             cout<<"informe o raio maior: ";
             cin>>raio_maior;
             cout<<"informe o raio menor";
             cin>>raio_menor;
             resultado_anel = (3.1415 * (raio_maior*raio_maior)) - (3.1415 * (raio_menor*raio_menor));
            cout<<"resultado: "<<resultado_anel<<"";
             getch(); //ou system("pause");
             break;
           }
    case 3:{
             cout<<"informe o comprimento de um dos lados: ";
             cin>>lado;
             resultado_icosaedro = (8.66 * (lado*lado));
             cout<<"resultado: "<<resultado_icosaedro<<"";
             getch(); //ou system("pause");
             break;
           }
    case 4:{
             cout<<"informe o comprimento de um dos lados: ";
             cin>>lado1;
             resultado_dodecaedro = (20.65 * (lado*lado));
             cout<<"resultado: "<<resultado_dodecaedro<<"";
             getch(); //ou system("pause");
             break;
           }
    case 5:{
             cout<<"informe a área da base maior: ";
             cin>>lado;
             cout<<"informe a área da base menor: ";
             cin>>lado;
             cout<<"informe a área lateral: ";
             cin>>lado;
             resultado_icosaedro = (8.66 * (lado*lado));
             cout<<"resultado: "<<resultado_icosaedro<<"";
             getch(); //ou system("pause");
             break;
           }
    case 6:{
             cout<<"\n\n <<Insira aqui uma mensagem de despedida.>>\n ";
             getch();
             break;
            }
    case 7:{
        
             getch();
             break;
            }
   default: {
               cout<<"\n INFORMOU UMA OPÇÃO ERRADA.";
               getch();
               break;
            }
 }// fecha o SWITCH
} while(at1!=7);
             getch(); // espera digitar algo
             break;
           }
    case 2:{           
             cout<<"\n Opção 02";
             cout<<" \n APERTE UMA TECLA";
             getch(); //ou system("pause");
             break;
           }
    case 3:{
             cout<<"\n Opção 03";
             cout<<" \n Não tem ainda";
             getch(); //ou system("pause");
             break;
           }
    case 4:{
             cout<<"\n Opção 04";
             cout<<" \n Não tem ainda";
             getch(); //ou system("pause");
             break;
           }
    case 5:{
             cout<<"\n Opção 05";
             cout<<" \n Não tem ainda";
             getch(); //ou system("pause");
             break;
           }
    case 6:{
             cout<<"\n\n <<Insira aqui uma mensagem de despedida.>>\n ";
             getch();
             break;
            }
   default: {
               cout<<"\n INFORMOU UMA OPÇÃO ERRADA.";
               getch();
               break;
            }
 }// fecha o SWITCH
} while(op!=6);
cout<<"\n\n\n ";
}