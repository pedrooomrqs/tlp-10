#include <iostream> 
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int
		contador = 0,
		letras,
		contador1[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		contador2[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	char
		palavra1[100],
		palavra2[100],
		abecedario[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','u','v','w','x','y','z' };

	cout << "Quantas letras tem a tua frase/palavra >> ";
	cin >> letras;

	cout << "Diz-me a primeira palavra >> ";
	for (int i = 0; i < letras; i++)
	{
		cin >> palavra1[i];
	}

	cout << "Diz-me a segunda palavra >>";
	for (int i = 0; i < letras; i++)
	{
		cin >> palavra2[i];
	}
	
	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < letras; j++)
		{
			if (palavra1[j] == abecedario[i])
			{
				contador1[i] = contador1[i] + 1;
			}

			if (palavra2[j] == abecedario[i])
			{
				contador2[i] = contador2[i] + 1;
			}
		}
	}
	
	for (int i = 0; i < 26; i++)
	{
		if (contador1[i] == contador2[i])
		{
			contador = contador + 1;
		}
	}

	if (contador == 26)
	{
		system("cls");

		cout << "A tua frase/palavra é um Anagrama.";
	}

	else
	{
		system("cls");

		cout << "A tua frase/palavra não é um Anagrama.";
	}
}