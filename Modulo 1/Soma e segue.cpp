#include <iostream>
#include <locale.h>
using namespace std;

void main ()
{
	setlocale(LC_ALL, "Portuguese");
	int qvps, parasomar = 0, vqvs = 0, somados = 0;

	cout << "Quantos numeros você quer somar? >> ";
	cin >> qvps;

	do 
	{
		vqvs = vqvs + 1;
		cout << "Diga numeros para somar >> ";
		cin >> parasomar;
		somados = somados + parasomar;
	} while (vqvs != qvps);

	cout << "O resultado é " << somados;
}