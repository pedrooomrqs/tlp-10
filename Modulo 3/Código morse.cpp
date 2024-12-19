#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int
		letras,
		escolha;
	char 
		frase[100], 
		abecedario[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	string
		morse[100],
		codigomorse[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

	cout << "---> Tradutor Morse <---\n";
	cout << "1 - Português para Morse\n";
	cout << "2 - Morse para Português\n\n";

	cout << "0 - Exit\n\n";

	cout << "Escolha >> ";
	cin >> escolha;

	switch (escolha)
	{
	case 0:
		system("cls");
		cout << "Seleccionaste 0 vais sair do programa.";
		exit(0);
	case 1:
		system("cls");

		cout << "Quantas letras tem a tua frase/palavra >> ";
		cin >> letras;

		cout << "Diz-me a frase para traduzir >> ";
		for (int i = 0; i < letras; i++)
		{
			cin >> frase[i];
		}

		system("cls");

		cout << "Esta é a tua frase traduzida para Morse >> ";
		for (int i = 0; i < letras; i++)
		{
			for (int j = 0; j < 26; j++)
			{
				if (frase[i] == abecedario[j])
				{
					cout << codigomorse[j] << " ";
				}
			}
		}

		break;
	case 2:
		system("cls");

		cout << "Quantas letras tem a tua frase/palavra >> ";
		cin >> letras;

		cout << "Diz-me a frase para traduzir >> ";
		for (int i = 0; i < letras; i++)
		{
			cin >> morse[i];
		}

		system("cls");

		cout << "Esta é a tua frase traduzida para Português >> ";
		for (int i = 0; i < letras; i++)
		{
			for (int j = 0; j < 26; j++)
			{
				if (morse[i] == codigomorse[j])
				{
					cout << abecedario[j] << " ";
				}
			}
		}

		break;
	default:
		system("cls");
		cout << "Escolha entre 1, 2 ou 0.";
		break;
	}
}
