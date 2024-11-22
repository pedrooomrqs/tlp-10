#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero;

	do {
		cout << "Diga um numero >> ";
		cin >> numero;

		if (numero < 0)
		{
			cout << "O numero " << numero << " é negativo. ";
		}
		else if (numero > 0)
		{
			cout << "O numero " << numero << " é positivo. ";
		}
		else if (numero == 0)
		{
			cout << "Digitaste 0, vais sair do programa.";
		}
	} while (numero != 0);
}