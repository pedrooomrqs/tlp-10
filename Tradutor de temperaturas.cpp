#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int tipo, numero;

	do
	{
		cout << "1 - Celsius\n";
		cout << "2 - Fahrenheit\n\n";

		cout << "Escolha uma opção >> ";
		cin >> tipo;

		if (tipo == 0)
		{
			exit(0);
		}

		cout << "Escolha um valor >> ";
		cin >> numero;

		if (numero == 0)
		{
			exit(0);
		}

		cout << "\n";

		if (tipo == 1)
		{
			cout << numero << "ºC" << " é " << (numero * 9 / 5) + 32 << "ºF\n";
		}

		else if (tipo == 2)
		{
			cout << numero << "ºF" << " é " << (numero - 32) * 5 / 9 << "ºC\n";
		}

		cout << "\n";

	} while (numero != 0);
}