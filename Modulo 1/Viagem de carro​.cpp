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

	std::cout << "Quantos KM voc� tinha antes? >> ";
	std::cin >> KMA;
	std::cout << "Quantos KM voc� tem agora? >> ";
	std::cin >> KMD;
	std::cout << "Quantos Litros gastaste? >> ";
	std::cin >> LGastos;

	std::cout << "Voc� gasta " << LGastos*100 / (KMD-KMA) << " Litros a cada 100 KM";
}