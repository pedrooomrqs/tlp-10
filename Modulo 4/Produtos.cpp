#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

string 
	produtos[2] = { "Batatas", "Cenouras" },
	meses[2] = { "Janeiro", "Fevereiro" };

int 
	gastos[100][100];

int totalproduto()
{
	int totalproduto[2] = { 0,0 }, i, j;
	setlocale(LC_ALL, "Portuguese");

	for (i = 0; i < 2; i++)
	{

		for (j = 0; j < 2; j++)
		{
			totalproduto[i] = totalproduto[i] + gastos[i][j];
		}

	}

	for (i = 0; i < 2; i++)
	{
		cout << "E esse é o total de produtos: " << totalproduto[i] << " de " << produtos[i] << "\n";
	}

	return 0;
}

int valores()
{
	setlocale(LC_ALL, "Portuguese");

	system("cls");

	for (int i = 0; i < 2; i++)
	{

		for (int j = 0; j < 2; j++)
		{
			cout << "Quantas " << produtos[i] << " comeste no mês de " << meses[j] << " >> ";
			cin >> gastos[i][j];
		}

	}

	return 0;
}

int verfify()
{
	setlocale(LC_ALL, "Portuguese");

	for (int i = 0; i < 2; i++)
	{

		int resultado = 0;

		for (int j = 0; j < 2; j++)
		{
			resultado = gastos[j][i] + resultado;
		}

		cout << "No mês de " << meses[i] << " você comeu " << resultado << " produtos\n";
	}

	return 0;
}

void main()
{
	int escolha;
	setlocale(LC_ALL, "Portuguese");

	do
	{
		cout << "\n1 - Calcular totais mensais\n";
		cout << "2 - Calcular totais por produto\n";
		cout << "3 - Inserir valores\n\n";

		cout << "0 - Sair\n\n";

		cout << "Escolha >> ";
		cin >> escolha;

		cout << "\n";

		switch (escolha)
		{
			case 1:
			{
				verfify();
	
				break;
			}
			case 2:
			{
				totalproduto();

				break;
			}
			case 3:
			{
				valores();

				break;
			}
		}
	} while (escolha != 0);
}