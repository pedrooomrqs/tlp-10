#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	srand(time(0));
	int escolhido = rand(), numero;
	setlocale(LC_ALL, "Portuguese");

	do
	{
		cout << "Escolha um numero >> ";
		cin >> numero;

		if (numero > escolhido)
		{
			cout << "\n\nVocê esta acima do numero sorteado.\n";
		}

		if (numero < escolhido)
		{
			cout << "\n\nVocê esta abaixo do numero sorteado.\n";
		}

	} while (numero != escolhido);

	if (numero == escolhido)
	{
		cout << "\n\nParabéns! Você achou o numero sorteado!";
	}
}