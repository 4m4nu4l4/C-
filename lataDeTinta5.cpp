//FUP para calcular o valor do volume de uma lata de óleo, utilizando a fórmula:VOLUME = 3.14159 *R² * altura

#include <iostream>
using namespace std;
float altura, raio, volume;

main ()
{
	system ("chcp 65001");
		cout<<"\n digite aqui a altura da sua lata:";
		cin>>altura;
		cout<<"\n digite aqui o raio da lata:";
		cin>>raio;
		volume = 3.14159 *(raio*raio) * altura;
		
		cout<<"\n o volume é:"<<volume<<"";
}