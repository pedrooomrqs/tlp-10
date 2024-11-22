#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero, i;

	do
	{
		cout << "Escolha um numero >> ";
		cin >> numero;

		if (numero == 0)
		{
			break;
		}

		cout << "\nNumeros: \n";

		for (i = numero; i > 0; i--)
		{
			cout << i << "\n";
		}

		cout << "\n";

	} while (numero != 0);
}