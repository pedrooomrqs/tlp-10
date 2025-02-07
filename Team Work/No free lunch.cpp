#include <iostream>
#include <time.h>
#include <locale.h>
using namespace std;

int main()
{
	int i, 
		apostas[20], 
		numerodejogadores, 
		maior = 0, 
		numeromaior = 0,
		numeroaleatorio = rand() % 98 + 1;

	srand(time(0));

	cout << "How many players >> ";
	cin >> numerodejogadores;

	cout << numeroaleatorio;
	for (i = 0; i < numerodejogadores; i++)
	{
		cout << "What is the bet of the " << i + 1 << " player >> ";
		cin >> apostas[i];
	}

	for (i = 0; i < numerodejogadores; i++)
	{
		if (apostas[i] <= numeroaleatorio)
		{
			if (apostas[i] > maior)
			{
				maior = apostas[i];
			}
		}
	}

	for (i = 0; i < numerodejogadores; i++)
	{
		if (apostas[i] > numeroaleatorio)
		{
			numeromaior = numeromaior + 1;
		}

		if ((apostas[i] < numeroaleatorio) && (apostas[i] == maior))
		{
			cout << "The " << i + 1 << " bet won";
			break;
		}

		else if (apostas[i] == numeroaleatorio)
		{
			cout << "The " << i + 1 << " bet won";
			break;
		}

		else if (numeromaior == numerodejogadores)
		{
			cout << "No one won";
		}
	}
}