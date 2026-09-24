#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string textParell = "Parell";
	string textSenar = "Senar";

	bool* elMeuVector = new bool[10];

	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0)
		{
			elMeuVector[i] = true;
		}
		else
		{
			elMeuVector[i] = false;
		}
	}

	while (true)
	{
		int numero;
		cout << "Introdueix un digit del 0 al 9: ";
		cin >> numero;

		if (numero >= 0 && numero <= 9) {
			if (elMeuVector[numero] == true) {
				cout << "\nEl digit " << numero << " es " << textParell << ".\n" << endl;
			}
			else {
				cout << "\nEl digit " << numero << " es " << textSenar << ".\n" << endl;
			}
		}
		else {
			cout << "\nError: Introdueix un numero valid del 0 al 9.\n" << endl;
		}

	}

	delete[] elMeuVector;

}