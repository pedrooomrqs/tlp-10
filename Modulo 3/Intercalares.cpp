#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int array1[10], array2[10], array3[20], naosei = 0, contador = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "Escolha o " << i + 1 << "º numero para a Array 1 >> ";
		cin >> array1[i];

		cout << "Escolha o " << i + 1 << "º numero para a Array 2 >> ";
		cin >> array2[i];
	}

	for (int i = 0; i < 20; i++)
	{
		array3[i] = array1[naosei];
		i = i + 1;
		array3[i] = array2[naosei];
		naosei = naosei + 1;
	}

	system("cls");
	cout << "Estes são os teus numeros juntos:";

	for (int i = 0; i < 20; i++)
	{
		cout << "\n" << array3[i];
	}
}
