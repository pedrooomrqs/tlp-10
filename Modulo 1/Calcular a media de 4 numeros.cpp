#include <iostream>
#include <locale.h>

void main() 
{
	int P1, P2, P3, P4;
	setlocale(LC_ALL, "Portuguese");

	std::cout << "Escolha P1 >> ";
	std::cin >> P1;
	std::cout << "Escolha P2 >> ";
	std::cin >> P2;
	std::cout << "Escolha P3 >> ";
	std::cin >> P3;
	std::cout << "Escolha P4 >> ";
	std::cin >> P4;

	std::cout << "A média é " << (P1 + P2 + P3 + P4) / 4;
}