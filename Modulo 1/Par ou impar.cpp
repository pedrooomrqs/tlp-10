#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero;

	do
	{
		cout << "Escolha um numero >> ";
		cin >> numero;

		if (numero == 0)
		{
			cout << "Você digitou 0 irá sair do programa.";
		}

		else if (numero % 2 == 0)
		{
			cout << "Seu numero é par.\n\n";
		}

		else if (numero % 2 == 1)
		{
			cout << "Seu numero é ímpar.\n\n";
		}

	} while (numero != 0);
}