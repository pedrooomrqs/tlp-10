#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	int escolha;
	setlocale(LC_ALL, "Portuguese");
	
	do
	{
		cout << "1 | Calcular a m�dia de 4 n�meros\n";
		cout << "2 | Viagem de carro\n";
		cout << "3 | Passar de ano\n";
		cout << "4 | Qual o maior\n";
		cout << "5 | Somar at� cair\n";
		cout << "6 | Soma e segue\n";
		cout << "7 | Negativo ou positivo\n";
		cout << "8 | Par ou �mpar\n";
		cout << "\n0 | Exit\n";
		cout << "\nEscolha uma op��o >> ";
		cin >> escolha;
	} while (escolha != 1 && 2 && 3 && 4 && 5 && 6 && 7 && 8 && 0);

	if (escolha == 0)
	{
		system("cls");
		
		cout << "Voc� digitou 0 ir� sair do programa.";
	}

	else if (escolha == 1)
	{
		int P1, P2, P3, P4;
		system("cls");

		cout << "Escolha um numero para P1 >> ";
		cin >> P1;
		cout << "Escolha um numero para P2 >> ";
		cin >> P2;
		cout << "Escolha um numero para P3 >> ";
		cin >> P3;
		cout << "Escolha um numero para P4 >> ";
		cin >> P4;

		cout << "\nA m�dia � --> " << (P1 + P2 + P3 + P4) / 4;
	}

	else if (escolha == 2)
	{
		system("cls");
		int KMA, KMD, LGastos;

		cout << "Quantos KMs voc� tinha antes? >> ";
		cin >> KMA;
		cout << "Quantos KMs voc� tem agora? >> ";
		cin >> KMD;
		cout << "Quantos Litros voc� gastou? >> ";
		cin >> LGastos;

		cout << "\nO seu carro gasta " << LGastos * 100 / (KMD - KMA) << " Litros a cada 100KMs.";
	}

	else if (escolha == 3)
	{
		system("cls");
		float nota;

		cout << "Diga-me a sua nota >> ";
		cin >> nota;

		if (nota > 20 || nota < 0)
		{
			cout << "ERRO! APENAS NOTAS DE 0 A 20!";
		}

		else if (nota >= 9.5)
		{
			cout << "Voc� passou, parab�ns!";
		}

		else if (nota < 9.5)
		{
			cout << "Voc� reprovou, desculpe.";
		}
	}
	else if (escolha == 4)
	{
		system("cls");
		int P1, P2, P3;

		cout << "Escolha um numero >> ";
		cin >> P1;
		cout << "Escolha um numero >> ";
		cin >> P2;
		cout << "Escolha um numero >> ";
		cin >> P3;

		if (P1 == P2 || P1 == P3 || P2 == P3)
		{
			cout << "ERRO! N�o podes escrever os mesmos numeros!";
		}

		else if (P1 > P2 && P1 > P3)
		{
			cout << "O numero " << P1 << " � o maior.";
		}

		else if (P2 > P1 && P2 > P3)
		{
			cout << "O numero " << P2 << " � o maior.";
		}
		else if (P3 > P1 && P3 > P2)
		{
			cout << "O numero " << P3 << " � o maior.";
		}
	}

	else if (escolha == 5)
	{
		system("cls");
		int numero, soma = 0;

		do
		{
			cout << "Escolha um numero >> ";
			cin >> numero;	

			soma = soma + numero;

		} while (soma < 1000);

		cout << "ERRO! Perdeste no numero " << soma;
	}

	else if (escolha == 6)
	{

		system("cls");
		int numeropsomar, vezes = 0, vezespsomar = 0, soma = 0;

		cout << "Quantos numeros voc� quer somar? >> ";
		cin >> vezespsomar;

		do
		{
			cout << "Escolha numeros para somar >> ";
			cin >> numeropsomar;

			soma = soma + numeropsomar;
			vezes = vezes + 1;
		} while (vezes != vezespsomar);

		cout << "\nO seu resultado � " << soma;
	}

	else if (escolha == 7)
	{
		system("cls");
		int numero;
		
		do
		{
			cout << "\nEscolha um numero >> ";
			cin >> numero;

			if (numero > 0)
			{
				cout << "Seu numero � positivo.\n";
			}

			else if (numero < 0)
			{
				cout << "Seu numero � negativo.\n";
			}

		} while (numero != 0);

		cout << "\nDigitou 0 voc� ir� sair do programa.";
	}

	else if (escolha == 8)
	{
		system("cls");
		int numero;

		do
		{
			cout << "Escolha um numero >> ";
			cin >> numero;

			if (numero == 0)
			{
				cout << "Voc� digitou 0 ir� sair do programa.";
			}

			else if (numero % 2 == 0)
			{
				cout << "Seu numero � par.\n\n";
			}

			else if (numero % 2 == 1)
			{
				cout << "Seu numero � �mpar.\n\n";
			}
		} while (numero != 0);

	}
}