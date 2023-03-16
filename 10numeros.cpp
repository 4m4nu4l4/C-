#include <iostream>
using namespace std;
int const TAM = 5;
int i, qntd_neg, num = 0;

main()
{
	system("chcp 65001");
	for(i=1;i<=TAM;i++)
	{
		cout<<"\n\tInforme o" <<i<< "numero:";
		cin>>num;
		if (num<0)
		{
			qntd_neg++;
		}
	}
}