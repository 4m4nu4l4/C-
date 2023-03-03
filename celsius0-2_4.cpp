//FUP que leia uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit.
// A fórmula de conversão é: F = (9*C+32) / 5, sendo F a temperatura emFahrenheit e C a temperatura em Celsius.
// Imprima uma mensagem diferente paracada situação, conforme a temperatura calculada.
//* Mensagem para temperatura negativa.
//* Mensagem para temperaturas entre 10 e 38 graus
//* Mensagem para temperaturas maiores que 38 graus.
#include <iostream>
using namespace std;
float c, F;

main()
{
	system ("chcp 65001");
	system ("cls");
	 cout<<"\n digite aqui os graus celsius:";
	 cin>>c;
	 
	 F = (9*c+32)/5;
	 
	 if (F <= 0)
	 {
	 	cout<<"\n é negativo";
	 }
	 else 
	 {
	 	if (F >= 10 && F<= 38)
		 {
	 		cout<<"\n a temperatura é entre 10 e 38 graus";
		 }
		 else {
		 	if (F > 38)
		 	{
		 		cout<<"\n a temperatura maior que 38 graus";
			 }
		 }
	 }
}