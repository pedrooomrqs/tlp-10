#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	char escolha;
	int numero;
	
	cout << "Escolha uma opção Celcius(C) / Fahrenheit(F) >> ";
	cin >> escolha;

	switch (escolha)
	{
	case 'c':
	case 'C':
		system("cls");
		cout << "---> Escolha é Celsius <---\n";

		cout << "Escolha um valor >> ";
		cin >> numero;

		cout << numero << "ºC" << " é " << (numero * 9 / 5) + 32 << "ºF\n";
		break;

	case 'f':
	case 'F':
		system("cls");
		cout << "---> Escolha é Fahrenheit <---\n";
		
		cout << "Escolha um valor >> ";
		cin >> numero;

		cout << numero << "ºF" << " é " << (numero - 32) * 5 / 9 << "ºC\n";
		break;

	default:
		cout << "Apenas F ou C imbecil, burro, otario, estupido";
	}
}