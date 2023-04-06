CPP
/* 
Faculdade SENAC - Joinville - SC
Profª: Cláudia Werlich
Atividade Avaliativa de Introdução a Programação de Computadores
Insira Seu nome completo aqui:Emanuele Vitória Pries
Data: <<versão 01 ou versão_final>> :26/03/2023
(Altere a data conforme a entrega)
*/
#include <iostream>
#include <stdlib.h> 
#include <iomanip>
#include <conio.h> // Para usar o getch();
float lado, altura, area, base, raio, volume;

int op, quest1, quest2;

using namespace std;

main ()

{

   system("chcp 65001");

   system ("cls");

   system ("color 5");

   cout << fixed << setprecision(4);

   cout<<"ATIVIDADE AVALIATIVA DE INTRODUÇÃO A PROGRAMAÇÃO <3 \n";

   cout<<"INDICADORES: \n";

   cout<<"1. Realiza operações matemáticas de acordo com os fundamentos e o contexto apresentado.\n";

   cout<<"2. Utiliza adequadamente os tipos de variáveis em algoritmos de acordo com o contexto.\n";

   cout<<"3. Utiliza operações aritméticas em programas.\n";

   cout<<"4. Utiliza os comandos de leitura e escrita em algoritmos de acordo com o contexto.\n";

   cout<<"5. Utiliza as estruturas condicionais em algoritmos de acordo com o contexto.\n";

   cout<<"6. Utiliza as estruturas de repetição em algoritmos de acordo com o contexto. \n";

   do{

   system ("cls");

   system ("color 1"); 

   cout<<"\n 🌼🌻🌺🌹💐 atividades 🌼🌻🌺🌹💐";

   cout<<"\n [1] Questão 01 ";

   cout<<"\n [2] Questão 02 ";

   cout<<"\n [3] Questão 03 ";

   cout<<"\n [4] Questão 04 ";

   cout<<"\n [5] Questão 05 ";

   cout<<"\n [6] FIM <<Bônus >>.";

   cout<<"\n\n\n\n Escolha uma questão --> ";

   cin>>op;

  switch (op)

  {

    case  1:{         

        do{

         system ("cls");

         system ("color 2"); 

         cout<<"\n 🌼Escolha a forma que vc quer saber a área ou o volume🌼";

         cout<<"\n [1] retangulo ";

         cout<<"\n [2] quadrado ";

         cout<<"\n [3] triangulo isóceles ";

         cout<<"\n [4] cone";

         cout<<"\n [5] circulo";

         cout<<"\n [6] esfera";

         cout<<"\n [7] cubo";

         cout<<"\n\n escolha uma forma geométrica:";

        cin>>quest1;

    switch (quest1){

    case  1:{

    system ("color 1");        

            cout<<"informe o lado do retangulo: ";

            cin>>lado;

            cout<<"informe a altura: ";

            cin>>altura;

            area = lado*altura;

            cout<<"a área do seu retangulo é: "<<area;      

             getch(); 

             break;

           }

  case 2:{

           ("color 2");       

            cout<<"informe o lado do quadrado: ";

            cin>>lado;

            area = lado*lado*lado*lado;

            cout<<"a área do seu quadrado é: "<<area;  

             getch();

             break;

           }

    case 3:{

            ("color 3");

            cout<<"informe o a altura do quadrado: ";

            cin>>altura;

            cout<<"informe o a base do quadrado: ";

            cin>>base;

            area = base*altura/2;

            cout<<"a área do seu triangulo isoceles é: "<<area;

             getch();

             break;

           }

    case 4:{

             ("color 4");

             cout<<"informe a altura do cone:";

             cin>>altura;

             cout<<"informe o raio do cone:";

             cin>>raio;

             volume = (raio * raio) * 3.14159 * altura /3;

             cout<<"o volume do cone é:"<<volume;

             getch(); 

             break;

           }

    case 5:{

             ("color 5");

             cout<<"informe o raio do círculo:";

             cin>>raio;

             area = 3.14159 * (raio*raio);

             cout<<"o volume do círculo é:"<<area;

             getch(); 

             break;

         }

    case 6:{         

            cout<<"informe o raio da esfera: ";

            cin>>raio;

            volume = 4*3.14*raio*raio;

            cout<<"o volume da esfera é: "<<volume;        

             getch();

             break;

           }

   default: {

               cout<<"\n❌❌❌❌❌ dado incorreto❌❌❌❌❌.";

               getch();

               break;

            }

 }

}

    while(quest1!=7);

             getch(); 

             break;

           }

        case 2:{

        do{

         system ("cls");

         system ("color 9"); 

         cout<<"\n selecione uma unidade de medida🌻 ";

         cout<<"\n [1] Esfera ";

         cout<<"\n [2] Anel ";

         cout<<"\n pra qual vc quer converter? ";

        cin>>quest2;

        switch (quest2){

        case 1:{

             cout<<"\n Opção 03";

             cout<<" \n Não tem ainda";

             getch(); //ou system("pause");
             break;

           }

        case 2:{

             cout<<"\n Opção 04";

             cout<<" \n Não tem ainda";

             getch(); //ou system("pause");
             break;

           }

        case 3:{

             cout<<"\n Opção 05";

             cout<<" \n Não tem ainda";

             getch(); //ou system("pause");
             break;

           }

        case 4:{

             cout<<"\n\n <<Insira aqui uma mensagem de despedida.>>\n ";

             getch();

             break;

            }

        default: {

               cout<<"\n INFORMOU UMA OPÇÃO ERRADA.";

               getch();

               break;

            }

 }

} while(quest2!=4);

            getch(); 

            break;

    case 1:{

             cout<<"\n Opção 03";

             cout<<" \n Não tem ainda";

             getch(); //ou system("pause");
             break;

           }

    case 2:{

             cout<<"\n Opção 04";

             cout<<" \n Não tem ainda";

             getch(); //ou system("pause");
             break;

           }

    case 3:{

             cout<<"\n Opção 05";

             cout<<" \n Não tem ainda";

             getch(); //ou system("pause");
             break;

           }

    case 4:{

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