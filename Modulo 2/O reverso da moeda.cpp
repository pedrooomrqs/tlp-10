#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	char letra;
	string nomes[5];

	do {
		system("cls");
		for (int i = 0; i < 5; i++)
		{
			cout << "Escolha o " << i + 1 << "� nome >> ";
			cin >> nomes[i];
		}

		for (int i = 4; i >= 0; i--)
		{
			cout << "\n" << nomes[i];
		}

		cout << "\n\nVoc� quer sair Sim(s), N�o(n) >> ";
		cin >> letra;

	} while (letra == 'n' && 'N');

	if (letra == 's' && 'S')
	{
		exit(0);
	}

}