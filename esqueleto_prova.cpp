/* 
Faculdade SENAC - Joinville - SC
Profª: Cláudia Werlich
Atividade Avaliativa de Introdução a Programação de Computadores

Insira Seu nome completo aqui:__________________________________

Data: <<versão 01 ou versão_final>> :___________________________ 
(Altere a data conforme a entrega)

*/

#include <iostream>
#include <stdlib.h> 
#include <iomanip>
#include <conio.h> // Para usar o getch();

int op;
using namespace std;
main ()
{
   system("chcp 65001");// para usar acentos
   cout << fixed << setprecision(2);// deixar o float com 2 casas decimais
   system ("cls"); // limpar a tela
   system ("color 2"); // usar a cor verde
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
   cout<<"\n ==============PERSONALIZE A INTERFACE DO PROGRAMA===============================================";
   cout<<"\n [1] Questão 01 - << >>";
   cout<<"\n [2] Questão 02 - << >>";
   cout<<"\n [3] Questão 03 - << >>";
   cout<<"\n [4] Questão 04 - << >>";
   cout<<"\n [5] Questão 05 - << >>";
   cout<<"\n [6] FIM <<Bônus >>.";
   cout<<"\n\n\n\n ESCOLHA UMA OPÇÃO --> ";
   cin>>op;
  switch (op)
  {
    case  1:{
             system ("color 2");
             cout<<"\n Opção 01";
             cout<<" \n APERTE UMA TECLA";
             getch(); // espera digitar algo
             break;
           }
    case 2:{
             system ("color 3");
             cout<<"\n Opção 02";
             cout<<" \n APERTE UMA TECLA";
             getch(); //ou system("pause");
             break;
           }
    case 3:{
             system ("color 3");
             cout<<"\n Opção 03";
             cout<<" \n APERTE UMA TECLA";
             getch(); //ou system("pause");
             break;
           }
    case 4:{
             system ("color 3");
             cout<<"\n Opção 04";
             cout<<" \n APERTE UMA TECLA";
             getch(); //ou system("pause");
             break;
           }
    case 5:{
             system ("color 3");
             cout<<"\n Opção 02";
             cout<<" \n APERTE UMA TECLA";
             getch(); //ou system("pause");
             break;
           }
    case 6:{
             system ("color 8");
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
