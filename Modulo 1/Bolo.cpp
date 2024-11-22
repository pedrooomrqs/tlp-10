#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int fatias, pessoas, resto, resultado;

	cout << "Quantas fatias existem >> ";
	cin >> fatias;

	cout << "Quantas pessoas são >> ";
	cin >> pessoas;

	if (fatias < pessoas)
	{
		system("cls");
		cout << "Não tem fatias o suficiente.";
		exit(0);
	}

	else if (fatias > pessoas)
	{
		resultado = fatias / pessoas;
		resto = fatias % pessoas;

		cout << "Serão " << resultado << " por pessoa.\n";
		cout << "Irá sobrar " << resto;
	}
}