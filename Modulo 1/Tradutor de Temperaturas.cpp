#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	char escolha;
	int numero;
	
	cout << "Escolha uma op��o Celcius(C) / Fahrenheit(F) >> ";
	cin >> escolha;

	switch (escolha)
	{
	case 'c':
	case 'C':
		system("cls");
		cout << "---> Escolha � Celsius <---\n";

		cout << "Escolha um valor >> ";
		cin >> numero;

		cout << numero << "�C" << " � " << (numero * 9 / 5) + 32 << "�F\n";
		break;

	case 'f':
	case 'F':
		system("cls");
		cout << "---> Escolha � Fahrenheit <---\n";
		
		cout << "Escolha um valor >> ";
		cin >> numero;

		cout << numero << "�F" << " � " << (numero - 32) * 5 / 9 << "�C\n";
		break;

	default:
		cout << "Apenas F ou C imbecil, burro, otario, estupido";
	}
}