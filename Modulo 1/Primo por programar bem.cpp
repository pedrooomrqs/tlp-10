#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	int numero, i, contar;
	setlocale(LC_ALL, "Portuguese");

	do
	{
		contar = 0;

		cout << "Escolha um numero >> ";
		cin >> numero;

		if (numero == 0)
		{
			exit(0);
		}

		for (i = numero; i > 0; i--)
		{
			if (numero % i == 0)
			{
				contar = contar + 1;
			}
		}

		if (contar == 2)
		{
			cout << "O numero " << numero << " é primo.\n\n";
		}

		else
		{
			cout << "O numero não é primo porque da para dividir por " << contar << "\n\n";
		}

	} while (numero != 0);
}