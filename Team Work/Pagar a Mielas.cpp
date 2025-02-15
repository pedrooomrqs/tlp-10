#include <iostream>
#include <locale.h>
using namespace std;

// Sozinho :(

float preco()
{
	float valorconta;

	cout << "Quanto foi a conta >> ";
	cin >> valorconta;

	return valorconta;
}

int umnomebemfixe()
{
	int pessoas;

	cout << "\nSão quantas pessoas >> ";
	cin >> pessoas;

	return pessoas;
}

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float
		valorconta = preco();
	int 
		pessoas = umnomebemfixe();

	cout << "\nO valor que cada um deve pagar é " << valorconta / pessoas << "€";
}