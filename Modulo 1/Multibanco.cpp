#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	int saldo = 15, levantar, deposito, sair, escolha;
	setlocale(LC_ALL, "Portuguese");

	do
	{
		cout << "1 | Levantamento\n";
		cout << "2 | Dep�sito\n\n";

		cout << "0 | Sair\n\n";

		cout << "Escolha uma op��o >> ";
		cin >> escolha;

		if (escolha == 1)
		{
			system("cls");

			cout << "Quanto voc� quer levantar? >> ";
			cin >> levantar;

			if (levantar > saldo)
			{
				cout << "ERRO! Voc� apenas tem " << saldo << " Euros\n\n";
			}

			else
			{
				saldo = saldo - levantar;
				cout << "Agora voc� tem " << saldo <<" Euros\n\n";
			}
		}

		else if (escolha == 2)
		{
			system("cls");

			cout << "Quanto voc� quer depositar? >> ";
			cin >> deposito;

			saldo = saldo + deposito;

			cout << "Atualmente voc� tem " << saldo << " Euros\n\n";
		}

	} while (escolha != 0);

	if (escolha == 0)
	{
		system("cls");

		cout << "Digitou 0 voc� vai sair do programa.";
	}
}