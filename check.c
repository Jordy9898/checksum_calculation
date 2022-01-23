#include <iostream>
using namespace std;
#define MAX_VECT 200

int main()
{
	unsigned int a[MAX_VECT];
	unsigned int size = 0;
	unsigned int check = 0;
	cout << "CALCOLO CHECKSUM" << "\n";
	cout << "IL CHECKSUM CALCOLATO: FA PRIMA LA SOMMA DI TUTTI I BYTE,\nPRENDE IL BYTE MENO SIGNIFICATIVO NE FA IL COMPLEMENTO E AGGIUNGE 1" << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	do {

		cout << "MI DAI IL NUMERO DI BYTE DA CALCOLARE" << "\n";
		cout << "MAX NUM DI BYTE E' 200" << "\n";
		cin >> size;
		cout << "\n";

	} while (size > MAX_VECT);

	cout << "OKAY, ADESSO MI DAI I " << size << " BYTE DA CALCOLARE" << "\n";

	for (unsigned int i = 0; i < size; i++)
	{

		cin >> hex >> a[i];
		cout << "\n";
	}

	for (unsigned int i = 0; i < size; i++)
	{

		check += a[i];

	}

	
	check = ~check;
	check = check % 256+1;

	cout << "Ecco il checksum calcolato " << hex << check << "\n";
	cout << "Arrivederci \n";

}
