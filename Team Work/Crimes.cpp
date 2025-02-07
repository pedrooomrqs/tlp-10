#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

void main()
{
	int 
		quantos, 
		horascrimei, 
		horascrimef, 
		horasalibi1, 
		horasalibi2;

	string 
		alibi[100];

	setlocale(LC_ALL, "Portuguese");

	cin >> quantos;
	cout << "\n";

	for (int i = 0; i < quantos; i++)
	{
		cin >> horascrimei;
		cin >> horascrimef;
		cout << "\n";
		cin >> horasalibi1;
		cin >> horasalibi2;
		cout << "\n";

		if ((horasalibi1 <= horascrimei) && (horasalibi2 >= horascrimef))
		{
			alibi[i] = "Com alibi";
		}

		else
		{
			alibi[i] = "Sem alibi";
		}
	}

	for (int i = 0; i < quantos; i++)
	{
		cout << alibi[i] << "\n";
	}
}