#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int n, somar = 0, contar = 0, total = 0;

	do
	{
		cout << "Escolha o numero que voce quer adicionar >> ";
		cin >> n;
		somar = somar + n;
		contar = contar + 1;
		total = total + n;
	} while (somar < 1000);
	cout << "Perdeste, a m�dia dos numeros que colocaste � " << somar / contar << ", e perdeste no numero " << total;
}