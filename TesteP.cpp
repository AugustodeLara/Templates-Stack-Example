#include<iostream>
using namespace std;

#include "pilha.h"

int main()
{
	Pilha<float> floatPilha(3);
	float valor = 1.0;
	cout << "Insere" << endl;

	while (floatPilha.InsereP(valor))
	{
		cout << valor << endl;
		valor += 1.1;
	}
	
	cout << "A pilha esta cheia" << endl;

	system("pause");

	return 0;
}