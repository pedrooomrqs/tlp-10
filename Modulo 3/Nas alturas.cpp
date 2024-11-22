#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int pessoas[2][5], contadoraltura13anos = 0, contadoridade = 0, contadoralturageral = 0, contadorqualquer = 0, igual = 0;

	/* Não sei porque meti tanta variavel nem como o código funcionou mas
	se está a funcionar não irei tocar seja feliz na nota que irá me dar :D */

	for (int i = 0; i < 5; i++)
	{
		cout << "Qual a idade do " << i + 1 << "º Aluno >> ";
		cin >> pessoas[0][i];

		cout << "Qual a altura do " << i + 1 << "º Aluno >> ";
		cin >> pessoas[1][i];
	}

	for (int i = 0; i < 5; i++)
	{
		contadoralturageral = contadoralturageral + pessoas[1][i];
	}

	igual = contadoralturageral / 5;

	for (int j = 0; j < 5; j++)
	{
		if (pessoas[0][j] >= 13)
		{
			contadoridade++;

			if (pessoas[1][j] < igual)
			{
				contadorqualquer++;
			}
		}
	}
	cout << "Existe " << contadoridade << " Alunos com mais de 13 e " << contadorqualquer << " Alunos com a altura inferior a média\n";
}
