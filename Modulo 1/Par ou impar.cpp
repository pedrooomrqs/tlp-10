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
			cout << "Voc� digitou 0 ir� sair do programa.";
		}

		else if (numero % 2 == 0)
		{
			cout << "Seu numero � par.\n\n";
		}

		else if (numero % 2 == 1)
		{
			cout << "Seu numero � �mpar.\n\n";
		}

	} while (numero != 0);
}