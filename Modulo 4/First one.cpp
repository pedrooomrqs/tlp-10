#include <iostream>
#include <locale.h>
using namespace std;

void media(int numeros[])
{
	float total = 0;
	setlocale(LC_ALL, "Portuguese");

	for (int i = 0; i < 10; i++)
	{
		total = total + numeros[i];
	}

	cout << "A m�dia dos 10 numeros �: " << total / 10;
}

void menor(int numeros[])
{
	int menor = numeros[0];
	setlocale(LC_ALL, "Portuguese");

	for (int i = 1; i < 10; i++)
	{
		if (numeros[i] < menor)
		{
			menor = numeros[i];
		}
	}

	cout << "\nO menor numero � o " << menor;
}

void maior(int numeros[])
{
	int maior = numeros[0];
	setlocale(LC_ALL, "Portuguese");

	for (int i = 1; i < 10; i++)
	{
		if (numeros[i] > maior)
		{
			maior = numeros[i];
		}
	}

	cout << "\nO maior numero � o " << maior;
}

void main() 
{
	int numeros[10], escolha;
	setlocale(LC_ALL, "Portuguese");

	for (int i = 0; i < 10; i++)
	{
		cout << "Diz-me o " << i + 1 << "� numero >> ";
		cin >> numeros[i];
	}

	cout << "\n1 - Calcular a m�dia dos numeros\n";
	cout << "2 - Achar o menor numero\n";
	cout << "3 - Achar o maior numero\n\n";

	cout << "0 - Sair\n\n";

	cout << "Escolha >> ";
	cin >> escolha;

	switch (escolha)
	{
		case 0:
			system("cls");

			cout << "Digitou 0 ira sair do programa.";

			break;

		case 1:

			media(numeros);

			break;

		case 2:

			menor(numeros);

			break;

		case 3:

			maior(numeros);

			break;
	}
}