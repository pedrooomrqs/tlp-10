#include <iostream>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	float nota;

	std::cout << "Qual nota voc� teve? >> ";
	std::cin >> nota;

	if (nota>20 || nota<0)
	{
		std::cout << "ERRO! VOC� APENAS PODE COLOCAR NUMEROS ENTRE 0 E 20!";
	}
	else if (nota >= 9.5)
	{
		std::cout << "Voc� passou! Parab�ns!";
	}
	else if (nota < 9.5)
	{
		std::cout << "Voc� falhou!";
	}
}