#include <iostream>
#include <locale.h>
using namespace std;

void aoQuadrado()
{
	int num;
	setlocale(LC_ALL, "Portuguese");

	cout << "Diga um numero >> ";
	cin >> num;

	cout << "\n" << num << "² = " << num * num;
}

void bissexto()
{
	int ano;
	setlocale(LC_ALL, "Portuguese");

	cout << "Diga o ano >> ";
	cin >> ano;

	if ((ano % 4 == 0) && (ano % 100 != 0))
	{
		cout << "\nO ano " << ano << ", é bissexto\n\n";
	}

	else if ((ano % 4 == 0) && (ano % 100 == 0) && (ano % 400 == 0))
	{
		cout << "\nO ano " << ano << ", é bissexto\n\n";
	}

	else
	{
		cout << "\nO ano " << ano << ", não é bissexto\n\n";
	}
}

void queNumero()
{
	int num;

	cout << "Diga um numero >> ";
	cin >> num;

	if (num % 2 == 0)
	{
		if (num == 2)
		{
			cout << "O numero " << num << " é primo e par\n\n";
		}

		else
		{
			cout << "O numero " << num << " é par e não primo\n\n";
		}
	}

	else if (num % 2 != 0)
	{
		if ((num > 1) && (num % num == 0))
		{
			cout << "O numero " << num << " é primo e impar\n\n";
		}

		else
		{
			cout << "O numero " << num << " é impar e não primo\n\n";
		}
	}

	else if ((num % 1 == 0) && (num % num == 0))
	{
		cout << "O numero " << num << " é primo\n\n";
	}
}

void potencia()
{
	int num, expoente, total = 1;

	cout << "Diga-me um numero >> ";
	cin >> num;

	cout << "Diga-me o expoente >> ";
	cin >> expoente;

	for (int i = 0; i < expoente; i++)
	{
		total = total * num;
	}

	cout << "A potência do numero " << num << " é " << total << "\n\n";
}

void osPesos()
{
	int escolha;
	float altura[10], peso[10];

	do
	{
		cout << "1 - Digitar a altura e o peso\n";
		cout << "2 - Calcular IMC de um dos utilizadores\n";
		cout << "3 - Calcular a média dos IMC's\n\n";

		cout << "0 - Voltar\n\n";

		cout << "Escolha >> ";
		cin >> escolha;

		switch (escolha)
		{
		case 0:
			system("cls");

			break;

		case 1:

			for (int i = 0; i < 10; i++)
			{
				cout << "\nDiga-me o peso da " << i + 1 << "º pessoa >> ";
				cin >> peso[i];

				cout << "Diga-me a altura da " << i + 1 << "º pessoa (EM METROS) >> ";
				cin >> altura[i];
			}

			cout << "\n";

			break;

		case 2:

			int qual;
			float alturacalculada, tudocalculado;

			cout << "Quer calcular o IMC de qual utilizador >> ";
			cin >> qual;

			qual = qual - 1;

			alturacalculada = altura[qual] * altura[qual];
			
			tudocalculado = peso[qual] / alturacalculada;

			system("cls");

			cout << "O IMC desse utilizador é " << tudocalculado << "\n";
			
			if (tudocalculado < 18.4)
			{
				cout << "IMC - Baixo Peso\n\n";
			}

			else if ((tudocalculado >= 18.5) && (tudocalculado < 24.9))
			{
				cout << "IMC - Peso Normal\n\n";
			}

			else if ((tudocalculado >= 25) && (tudocalculado < 29.9))
			{
				cout << "IMC - Excesso de Peso\n\n";
			}

			else if ((tudocalculado >= 30) && (tudocalculado < 34.9))
			{
				cout << "IMC - Obesidade\n\n";
			}

			else if (tudocalculado >= 35)
			{
				cout << "IMC - Obesidade Extrema\n\n";
			}

			break;

		case 3:

			float alturacalculadamasnocase3, tudocalculadomasnocase3, agoracalcularamedia = 0;

			for (int i = 0; i < 10; i++)
			{
				alturacalculadamasnocase3 = altura[i] * altura[i];

				tudocalculadomasnocase3 = peso[i] / alturacalculadamasnocase3;

				agoracalcularamedia = agoracalcularamedia + tudocalculadomasnocase3;
			}

			system("cls");

			cout << "\nA média dos IMC's é " << agoracalcularamedia / 10 << "\n\n";

			break;
		}
	} while (escolha != 0);
}

void main()
{
	int escolha;
	setlocale(LC_ALL, "Portuguese");

	do {

		cout << "1 - Ao Quadrado\n";
		cout << "2 - Bissexto\n";
		cout << "3 - Que número?\n";
		cout << "4 - Potência\n";
		cout << "5 - Os Pesos\n\n";

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

			aoQuadrado();
			cout << "\n\n";

			break;

		case 2:
			system("cls");

			bissexto();

			break;

		case 3:
			system("cls");

			queNumero();

			break;

		case 4:
			system("cls");

			potencia();

			break;

		case 5:
			system("cls");

			osPesos();

			break;
		}
	} while (escolha != 0);
}