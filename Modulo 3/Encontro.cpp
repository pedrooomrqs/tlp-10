#include <iostream>
#include <locale.h>
#include <time.h>
#include <string>
using namespace std;

void main()
{
	srand(time(0));
	setlocale(LC_ALL, "Portuguese");
	string huzz[5] = { "Melody", "Inês", "Daniela", "Marta", "Clara" },
		lugares[5] = { "Bowling", "Bar", "Praia", "Escola", "Restaurante" };
	cout << "A " << huzz[rand() % 5] << " vai te encontrar na/no " << lugares[rand() % 5];
}
