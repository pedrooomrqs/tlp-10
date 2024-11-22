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
			cout << "\n\nVoc� esta acima do numero sorteado.\n";
		}

		if (numero < escolhido)
		{
			cout << "\n\nVoc� esta abaixo do numero sorteado.\n";
		}

	} while (numero != escolhido);

	if (numero == escolhido)
	{
		cout << "\n\nParab�ns! Voc� achou o numero sorteado!";
	}
}