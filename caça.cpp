#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct cadastro_jogador
  {
    char nome[50];
    char apelido[50];
    char contato [50];
    float idade;
    float creditos = 0;

    
  };
  
    //float validaNota
    

	cadastro_jogador Jogador;
	
	char escolha;

	int main() {
		system("chcp 65001");
   	 	srand(time(NULL)); // semente aleatória

	cout<<" \n Voce entrou no jogo! \n";
  	cout<<" \n * Nome: ";
  	fflush(stdin);
 
  	gets(Jogador.nome);
  	//tabelaNaFrente.nome
  
  	cout<<" \n * Apelido: ";
  	fflush(stdin);
  
  	gets(Jogador.apelido);
  
  	cout<<" \n * meio para contato: ";
 	 fflush(stdin);
  
  	gets(Jogador.contato);
  
  	cout<<"\n * idade: ";
  	//cout<<"\n";
  	cin>>Jogador.idade;
  do{
  
   if (Jogador.idade<=18){
 	cout<<"vc nao pode participar!";
 	//qro fazer um neg pra voltar p inicio
	cin>>Jogador.idade;
 }
} while(Jogador.idade<=0);


    char simbolos[6] = {'E', 'M', 'A', 'N', 'U', 'L'}; // bar, cereja, limão, laranja, uva, sino

    cout << "\n Bem-vindo ao caça-níquel!\n\n";
    cout << "\n Antes de jogar vc precisa ter créditos, quantos pontos deseja comprar?\n";
    cin >>Jogador.creditos;
    Jogador.creditos = 0 + Jogador.creditos;
  	cout <<"\n agr vc tem "<<Jogador.creditos<<" pontos";
    //cout<<" \n Agr vc tem "<<Jogador.creditos<<" pontos" ";
 	 //fflush(stdin);
  
  	//gets(Jogador.creditos);
    
    
    cout << "\n Pressione S para continuar ou N para sair.\n";
    cin >> escolha;
    if (escolha == 'N' || escolha == 'n') {
            cout << "Até a próxima!\n";
            return 0;
        }
    while ((escolha=='S')|| (escolha=='s')) 
	{
       if (escolha == 'N' || escolha == 'n') {
            cout << "Até a próxima!\n";
            break;
        }

        // girar os rolos
        char rolo1 = simbolos[rand() % 6];
        char rolo2 = simbolos[rand() % 6];
        char rolo3 = simbolos[rand() % 6];
        char rolo4 = simbolos[rand() % 6];

        cout << "\n" << rolo1 << " " << rolo2 << " " << rolo3 << " " << rolo4 << """\n\n";

        // verificar os resultados
        if (rolo1 == rolo2 && rolo2 == rolo3 && rolo3 == rolo4 ) {
            cout << "Jackpot! Você ganhou 100 créditos.\n";
            Jogador.creditos = Jogador.creditos + 100;
            
        } else if (rolo1 == rolo2 || rolo2 == rolo3 || rolo1 == rolo3 || rolo3 == rolo4 || rolo2 == rolo4 || rolo1 == rolo4 ) {
            cout << "Par! Você ganhou 10 créditos.\n";
            Jogador.creditos = Jogador.creditos + 10; 
        } else {
            cout << "Nada! Tente novamente.\n";
        }
        
        cout << "Pressione S para jogar ou N para sair.\n";
        cout <<"\n agr vc tem "<<Jogador.creditos<<" pontos";
        cin >> escolha;
        
    }

    return 0;
}
