#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int fatias, pessoas, resto, resultado;

	cout << "Quantas fatias existem >> ";
	cin >> fatias;

	cout << "Quantas pessoas s�o >> ";
	cin >> pessoas;

	if (fatias < pessoas)
	{
		system("cls");
		cout << "N�o tem fatias o suficiente.";
		exit(0);
	}

	else if (fatias > pessoas)
	{
		resultado = fatias / pessoas;
		resto = fatias % pessoas;

		cout << "Ser�o " << resultado << " por pessoa.\n";
		cout << "Ir� sobrar " << resto;
	}
}