#include <iostream>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int P1, P2, P3;

	std::cout << "Escolha um numero para P1 >> ";
	std::cin >> P1;
	std::cout << "Escolha um numero para P2 >> ";
	std::cin >> P2;
	std::cout << "Escolha um numero para P3 >> ";
	std::cin >> P3;

	if (P1 == P2 || P1 == P3 || P2 == P3)
	{
		std::cout << "Voc� n�o pode colocar numeros iguais!";
	}
	else if (P1 > P2 && P1 > P3)
	{
		std::cout << "P1 � o numero maior.";
	}
	else if (P2 > P1 && P2 > P3)
	{
		std::cout << "P2 � o numero maior.";
	}
	else if (P3 > P1 && P3 > P2)
	{
		std::cout << "P3 � o numero maior.";
	}
}