#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

void main()
{

	srand(time(0));
	int escolhido = rand() % 100+1, numero;
	setlocale(LC_ALL, "Portuguese");

	do
	{
		cout << "\nEscolha um numero >> ";
		cin >> numero;

		if (numero > escolhido)
		{
			cout << "Você esta acima do numero sorteado.\n";
		}

		if (numero < escolhido)
		{
			cout << "Você esta abaixo do numero sorteado.\n";
		}

	} while (numero != escolhido);

	if (numero == escolhido)
	{
		cout << "\nParabéns! Você achou o numero sorteado!";
	}
}
