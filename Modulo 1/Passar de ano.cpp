#include <iostream>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	float nota;

	std::cout << "Qual nota você teve? >> ";
	std::cin >> nota;

	if (nota>20 || nota<0)
	{
		std::cout << "ERRO! VOCÊ APENAS PODE COLOCAR NUMEROS ENTRE 0 E 20!";
	}
	else if (nota >= 9.5)
	{
		std::cout << "Você passou! Parabéns!";
	}
	else if (nota < 9.5)
	{
		std::cout << "Você falhou!";
	}
}