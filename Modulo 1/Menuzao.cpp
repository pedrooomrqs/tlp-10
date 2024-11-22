#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	Start:
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	int moduloescolha;
	

	cout << "|*---------------------------MENU---------------------------*|"
		<< endl;

	cout << "1 | Módulo 1                                     (Fluxogramas)"
		<< endl;

	cout << "2 | Módulo 2                                       (Programas)"
		<< endl;

	cout << "3 | Módulo 3                                             (???)"
		<< endl;

	cout << "4 | Módulo 4                                             (???)"
		<< endl;

	cout << "\n0 | Exit"
		<< endl;

	cout << "\nEscolha o seu módulo >> ";
	cin >> moduloescolha;

	if (moduloescolha == 0)
	{
		system("cls");

		cout << "Digitou 0 você irá sair do programa.";
	}

	else if (moduloescolha == 1)
	{
		Modulo1:
		system("cls");
		int escolha;

		cout << "|*------------------------FLUXOGRAMAS-----------------------*|"
			<< endl;

		cout << "1 | Calcular a média de 4 números"
			<< endl;

		cout << "2 | Viagem de carro"
			<< endl;

		cout << "3 | Qual o maior"
			<< endl;

		cout << "4 | Somar até cair"
			<< endl;

		cout << "5 | Soma e segue"
			<< endl;

		cout << "6 | Negativo ou positivo"
			<< endl;

		cout << "7 | Par ou ímpar"
			<< endl;

		cout << "\n8 | Testes"
			<< endl;

		cout << "\n0 | Back"
			<< endl;

		cout << "\nEscolha um exercicío >> ";
		cin >> escolha;

		if (escolha == 0)
		{
			goto Start;
		}

		else if (escolha == 1)
		{
			system("cls");
			int n1, n2, n3, n4;

			do
			{
				cout << "Escolha o numero 1 >> ";
				cin >> n1;

				if (n1 == 0)
				{
					goto Modulo1;
				}

				cout << "Escolha o numero 2 >> ";
				cin >> n2;

				if (n2 == 0)
				{
					goto Modulo1;
				}

				cout << "Escolha o numero 3 >> ";
				cin >> n3;

				if (n3 == 0)
				{
					goto Modulo1;
				}

				cout << "Escolha o numero 4 >> ";
				cin >> n4;

				if (n4 == 0)
				{
					goto Modulo1;
				}

				cout << "A média desses 4 numeros é " << (n1 + n2 + n3 + n4) / 4 << "\n\n";
			} while (n1 || n2 || n3 || n4 != 0);
		}

		else if (escolha == 2)
		{
			system("cls");
			int KMA, KMD, LG;

			do
			{
				cout << "Quantos Kilometros você tinha antes >> ";
				cin >> KMA;

				if (KMA == 0)
				{
					goto Modulo1;
				}

				cout << "Quantos Kilometros você tem agora >> ";
				cin >> KMD;

				if (KMD == 0)
				{
					goto Modulo1;
				}

				cout << "Quantos Litros você gastou >> ";
				cin >> LG;

				if (LG == 0)
				{
					goto Modulo1;
				}

				cout << "\nVocê gasta " << LG * 100 / (KMD - KMA) << " Litros a cada 100 Kilometros\n\n";
			} while (LG != 0 || KMD != 0 || KMA != 0);
		}

		else if (escolha == 3)
		{
			system("cls");
			int n1, n2, n3;


			do
			{
				cout << "Escolha o numero 1 >> ";
				cin >> n1;

				if (n1 == 0)
				{
					goto Modulo1;
				}

				cout << "Escolha o numero 2 >> ";
				cin >> n2;

				if (n2 == 0)
				{
					goto Modulo1;
				}

				cout << "Escolha o numero 3 >> ";
				cin >> n3;

				if (n3 == 0)
				{
					goto Modulo1;
				}

				if (n1 == n2 || n2 == n3 || n3 == n1)
				{
					cout << "\n";
					cout << "Você não pode escolher numeros iguais.\n\n";
				}

				else if (n1 > n2 && n1 > n3)
				{
					cout << "\n";
					cout << "O numero maior é o numero: " << n1;
					cout << "\n\n";
				}

				else if (n2 > n1 && n2 > n3)
				{
					cout << "\n";
					cout << "O numero maior é o numero: " << n2;
					cout << "\n\n";
				}

				else if (n3 > n2 && n3 > n1)
				{
					cout << "\n";
					cout << "O numero maior é o numero: " << n3;
					cout << "\n\n";
				}
			} while (n1 != 0 || n2 != 0 || n3 != 0);
		}

		else if (escolha == 4)
		{
			system("cls");
			int numero, contar = 0, soma = 0;
			somar_ate_cair:

			do
			{

				cout << "Escolha os numeros >> ";
				cin >> numero;

				if (numero == 0)
				{
					goto Modulo1;
				}

				soma = soma + numero;
				contar = contar + 1;

			} while (soma < 1000);

			if (soma > 1000)
			{
				cout << "\nPERDEU, o numero " << soma << " é maior que o numero 1000."
					<< endl;
				cout << "A média desses numeros é " << soma / contar;

				goto somar_ate_cair;
			}
		}

		else if (escolha == 5)
		{
			system("cls");
			int soma = 0, contagem = 0, psomar = 0, vezes;

			cout << "Quantos numeros você quer somar >> ";
			cin >> vezes;
			cout << "\n";

			do
			{
				cout << "Quais numeros você quer somar >> ";
				cin >> psomar;

				contagem = contagem + 1;
				soma = soma + psomar;

			} while (contagem != vezes);

			cout << "\nA soma dos numeros que pediu é " << soma;
		}

		else if (escolha == 6)
		{
			system("cls");
			int numero;

			do
			{
				cout << "Escolha um numero >> ";
				cin >> numero;

				if (numero == 0)
				{
					goto Modulo1;
				}

				else if (numero > 0)
				{
					cout << "\nSeu numero é positivo.\n\n";
				}

				else if (numero < 0)
				{
					cout << "\nSeu numero é negativo\n\n";
				}
			} while (numero != 0);
		}

		else if (escolha == 7)
		{
			system("cls");
			int numero;

			do
			{
				cout << "Escolha um numero >> ";
				cin >> numero;

				if (numero == 0)
				{
					goto Modulo1;
				}

				else if (numero % 2 == 0)
				{
					cout << "O numero " << numero << " é par.\n\n";
				}

				else if (numero % 2 == 1)
				{
					cout << "O numero " << numero << " é ímpar.\n\n";
				}
			} while (numero != 0);
		}

		else if (escolha == 8)
		{
			Testes:
			system("cls");
			int escolhateste;

			cout << "|*---------------------------TESTES-------------------------*|"
				<< endl;

			cout << "1 | Multibanco"
				<< endl;

			cout << "\n0 | Back"
				<< endl;

			cout << "\nEscolha um teste >> ";
			cin >> escolhateste;

			if (escolhateste == 0)
			{
				goto Modulo1;
			}

			else if (escolhateste == 1)
			{
				system("cls");
				int escolhamulti, saldo = 15, depositar = 0, levantar;

				do
				{
					cout << "1 | Depositar\n";
					cout << "2 | Levantar                        SALDO = " << saldo << "\n\n";

					cout << "0 | Back\n\n";

					cout << "Escolha uma opção >> ";
					cin >> escolhamulti;

					if (escolhamulti == 0)
					{
						goto Testes;
					}

					else if (escolhamulti == 1)
					{
						system("cls");

						cout << "Quanto você quer depositar >> ";
						cin >> depositar;

						if (depositar < 0)
						{
							cout << "\n\nERRO, não podes depositar menos que 0 Euros";
						}

						else
						{
							saldo = saldo + depositar;
							cout << "\nDepositado com sucesso.";
							cout << "\nSeu saldo atual é " << saldo << "\n\n";
						}
					}

					else if (escolhamulti == 2)
					{
						system("cls");

						cout << "Escolha a quantia que você quer levantar >> ";
						cin >> levantar;

						if (levantar > saldo)
						{
							cout << "\nERRO, não podes levantar mais do que o saldo que tens disponivel.\n\n";
						}

						else if (levantar < saldo)
						{
							saldo = saldo - levantar;
							cout << "\nSucesso foi levantado " << levantar << " da sua conta\n\n";
							cout << "Seu saldo atual é " << saldo << "\n\n";
						}
					}
				} while (escolhamulti != 0);
			}
		}
	}

	else if (moduloescolha == 2)
	{
		Modulo2:
		int escolha;
		system("cls");

		cout << "|*-------------------------PROGRAMAS------------------------*|"
			<< endl;

		cout << "1 | Complicaçao Multiplicada"
			<< endl;

		cout << "2 | ???"
			<< endl;

		cout << "3 | ???"
			<< endl;

		cout << "\n0 | Back"
			<< endl;

		cout << "\nEscolha um exercicío >> ";
		cin >> escolha;

		if (escolha == 0)
		{
			goto Start;
		}

		else if (escolha == 1)
		{
			system("cls");
			int numero = 0, tabuada = 0, i;

			do
			{
				cout << "Escolha o numero que você quer ver a Tabuada >> ";
				cin >> numero;

				if (numero == 0)
				{
					goto Modulo2;
				}

				cout << "Escolha a Tabuada até quanto >> ";
				cin >> tabuada;
				cout << "\n";

				if (tabuada == 0)
				{
					system("cls");
					cout << "Digitou 0 irá sair do programa.";
					exit(0);
				}

				for (i = 1; i <= tabuada; i++)
				{
					cout << i << " x " << numero << " = " << i * numero << "\n";
				}

			} while (numero || tabuada != 0);
		}

		else if (escolha == 2)
		{

		}

		else if (escolha == 3)
		{

		}
	}
}