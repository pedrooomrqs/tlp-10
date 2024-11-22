#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int conjunto[10], i, contar = 0, soma = 0;
	char letra;
	
	for (i = 0; i < 10; i++)
	{
		cout << "Dá-me uma lista de 10 números >> ";
		cin >> conjunto[i];
	}

	cout << "\nVocê quer contar(c) quantos negativos foram ou somar(s) todos os negativos? >> ";
    cin >> letra;
	
	switch (letra)
	{
		case '1':
	    case 'c':
		case 'C':

			system("cls");

			cout << "---> Escolheu Contar <---";

			for (i = 0; i < 10; i++)
			{
				if (conjunto[i] < 0)
				{
					contar = contar + 1;
				}
			}

			cout << "\nVocê tem " << contar << " numero(s) negativo(s).";

			break;

		case '2':
		case 's':
		case 'S':

			system("cls");

			cout << "---> Escolheu Somar <---";

			for (i = 0; i < 10; i++)
			{
				if (conjunto[i] < 0)
				{
					soma = soma - i;
				}
			}

			cout << "\nA soma dos numeros negativos é " << soma;

			break;

		default:
			cout << "Comes porcaria ?";
			break;
	}
}