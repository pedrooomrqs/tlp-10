#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero1, numero2;
	char escolha;

	cout << "Escolha uma opção Somar(+), Subtrair(-), Multiplicar(*) ou Dividir(/) >> ";
	cin >> escolha;

	switch (escolha)
	{

	case '+':
		system("cls");
		cout << "---> Escolheu Somar <---\n";

		cout << "Escolha o Primeiro numero para Somar >> ";
		cin >> numero1;

		cout << "Escolha o Segundo numero para Somar >> ";
		cin >> numero2;

		cout << numero1 << " + " << numero2 << " = " << numero1 + numero2;

		break;

	case '-':
		system("cls");
		cout << "---> Escolheu Subtrair <---\n";

		cout << "Escolha o Primeiro numero para Subtrair >> ";
		cin >> numero1;

		cout << "Escolha o Segundo numero para Subtrair >> ";
		cin >> numero2;

		cout << numero1 << " - " << numero2 << " = " << numero1 - numero2;

		break;

	case '*':
		system("cls");
		cout << "---> Escolheu Multiplicar <---\n";

		cout << "Escolha o Primeiro numero para Multiplicar >> ";
		cin >> numero1;

		cout << "Escolha o Segundo numero para Multiplicar >> ";
		cin >> numero2;

		cout << numero1 << " x " << numero2 << " = " << numero1 * numero2;

		break;

	case '/':
		system("cls");
		cout << "---> Escolheu Dividir <---\n";

		cout << "Escolha o Primeiro numero para Dividir >> ";
		cin >> numero1;

		cout << "Escolha o Segundo numero para Dividir >> ";
		cin >> numero2;

		cout << numero1 << " / " << numero2 << " = " << numero1 / numero2;

		break;

	default:
		cout << "Apenas +, -, *, /";
	}
}