#include <iostream>
#include <ctype.h>
using namespace std;
int numero,numero1;
main()
{
	system("chcp 65001");
    cout<<"\n Digite um caracter";
    cin>>numero;
    cout<<"\n Digite um caracter";
    cin>>numero1;
    if (numero > numero1)
     {
        cout<<"\n o numero "<<numero<<"\n e maior que "<<numero1<<"";
     }
    else
    { if(numero1>numero){
        cout<<"\n o numero "<<numero1<<"\n e maior que "<<numero<<"";
    }
    else{
        cout<<"\n os dois numeros sao iguais ";
    }
    }
    co