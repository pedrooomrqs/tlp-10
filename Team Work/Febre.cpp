#include <iostream>
using namespace std;

// Com Tomas Dias

void main()
{
	int febreinicial[2], febrefinal[2], i;

	cin >> febreinicial[0];
	cin >> febreinicial[1];
	cin >> febrefinal[0];
	cin >> febrefinal[1];

	if (febrefinal[0] <= 36)
	{
		cout << "A febre nao existe ";
	}

	else
	{
		if (febreinicial[0] == febrefinal[0])
		{

			if ((febrefinal[0] >= 37) && (febreinicial[1] == febrefinal[1]))
			{
				cout << "\nA febre se manteve";
			}
		}

		if (febrefinal[0] == febreinicial[0])
		{
			if (febrefinal[1] > febreinicial[1])
			{
				cout << "\nA febre aumentou";
			}

			else if (febrefinal[1] < febreinicial[1])
			{
				cout << "\nA febre diminuiu";
			}
		}
	}
}
