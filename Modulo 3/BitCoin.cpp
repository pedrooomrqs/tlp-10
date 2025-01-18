#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int deposito(int saldo)
{
	int paradepositar = 0;

	cout << "Qual o valor que queres depositar >> ";
	cin >> paradepositar;

	if (paradepositar < 0)
	{
		cout << "\nErro, não podes depositar valores menores que 0!\n\n";
	}

	else
	{
		saldo = saldo + paradepositar;

		cout << "\nDepósito concluido.\n\n";

		
	}
	return saldo;
}

int retirar(int saldo)
{
	int pararetirar = 0;

	cout << "Qual o valor que você irá retirar >> ";
	cin >> pararetirar;

	if (pararetirar > saldo)
	{
		cout << "\nErro, não podes retirar mais que o que tens!\n\n";
	}

	else if (pararetirar < 0)
	{
		cout << "\nErro, não podes retirar valores menores que 0!\n\n";
	}

	else
	{
		saldo = saldo - pararetirar;

		cout << "\nDébito concluido!\n\n";

		
	}
	return saldo;
}

int enviardinheiro(int saldo)
{
	string nome;
	int subtrair = 0;

	cout << "Para quem quer enviar o dinheiro >> ";
	cin >> nome;

	cout << "Qual o montante >> ";
	cin >> subtrair;

	if (subtrair > saldo)
	{
		cout << "\nErro, não podes retirar mais que o que tens!\n\n";
	}

	else if (subtrair < 0)
	{
		cout << "\nErro, não podes retirar valores menores que 0!\n\n";
	}

	else
	{
		saldo = saldo - subtrair;

		cout << "\nDébito concluido!\n\n";

		
	}return saldo;
}

void verificarsaldo(int saldo)
{
	cout << "O seu saldo atual é " << saldo << "\n\n";
}

void start()
{
	setlocale(LC_ALL, "Portuguese");
	int
		escolha,
		saldo = 1000;

	do {

		cout << "1 - Depositar\n";
		cout << "2 - Retirar\n";
		cout << "3 - Enviar Dinheiro\n";
		cout << "4 - Verificar Saldo\n\n";

		cout << "0 - Sair\n\n";

		cout << "Escolha >> ";
		cin >> escolha;

		switch (escolha)
		{
		case 0:
			system("cls");
			cout << "Digitou 0 irá sair do programa.";
			break;
		case 1:
			system("cls");
			saldo=deposito(saldo);
			break;
		case 2:
			system("cls");
			saldo=retirar(saldo);
			break;
		case 3:
			system("cls");
			saldo=enviardinheiro(saldo);
			break;
		case 4:
			system("cls");
			verificarsaldo(saldo);
			break;
		}
	} while (escolha != 0);
}



void main()
{
	start();
}
