#include <iostream>
#include <locale.h>

void main () 
{
	/*	
		KMA -> KM Antes
		KMD -> KM Depois
		LGastos -> Litros Gastos
	*/
	int KMA, KMD, LGastos;
	setlocale(LC_ALL, "Portuguese");

	std::cout << "Quantos KM você tinha antes? >> ";
	std::cin >> KMA;
	std::cout << "Quantos KM você tem agora? >> ";
	std::cin >> KMD;
	std::cout << "Quantos Litros gastaste? >> ";
	std::cin >> LGastos;

	std::cout << "Você gasta " << LGastos*100 / (KMD-KMA) << " Litros a cada 100 KM";
}