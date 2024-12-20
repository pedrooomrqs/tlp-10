#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int
		letras
		;
	char
		vogais[5] = { 'a', 'e', 'i', 'o', 'u' },
		frase[100]
		;

	cout << "Quantas letras tem a tua frase/palavra >> ";
		cin >> letras;

	cout << "Diz-me a frase para usar a liguagem dos P's >> ";
	for (int i = 0; i < letras; i++)
	{
		cin >> frase[i];
	}

	system("cls");

	cout << "Esta é a tua frase traduzida para lingua dos P's >> ";
	for (int i = 0; i < letras; i++)
	{
		cout << frase[i];
		if (frase[i] == vogais[i])
		{
			cout << "p" << vogais[i];
		}
	}
}
