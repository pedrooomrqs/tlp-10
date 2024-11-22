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
		cout << "2 | Depósito\n\n";

		cout << "0 | Sair\n\n";

		cout << "Escolha uma opção >> ";
		cin >> escolha;

		if (escolha == 1)
		{
			system("cls");

			cout << "Quanto você quer levantar? >> ";
			cin >> levantar;

			if (levantar > saldo)
			{
				cout << "ERRO! Você apenas tem " << saldo << " Euros\n\n";
			}

			else
			{
				saldo = saldo - levantar;
				cout << "Agora você tem " << saldo <<" Euros\n\n";
			}
		}

		else if (escolha == 2)
		{
			system("cls");

			cout << "Quanto você quer depositar? >> ";
			cin >> deposito;

			saldo = saldo + deposito;

			cout << "Atualmente você tem " << saldo << " Euros\n\n";
		}

	} while (escolha != 0);

	if (escolha == 0)
	{
		system("cls");

		cout << "Digitou 0 você vai sair do programa.";
	}
}