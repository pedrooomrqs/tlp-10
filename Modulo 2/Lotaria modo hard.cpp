#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

void main()
{
	srand(time(0));
	setlocale(LC_ALL, "Portuguese");
	int numale[5], i, escolhidos[5], j, acertados = 0;

	for (i = 0; i < 5; i++)
	{
		numale[i] = rand() % 50 + 1;
		cout << "\n" << numale[i];
	}

	for (i = 0; i < 5; i++)
	{
		cout << "\n Escolha o " << i + 1 << "º numero >> ";
		cin >> escolhidos[i];
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (escolhidos[i] == numale[j])
			{
				acertados++;

				break;
			}
		}
	}

	cout << "Você acertou " << acertados << " numeros";
}