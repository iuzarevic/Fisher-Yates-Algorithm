#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main() {
	srand(time(0));
	cout << "Fisher - Yates algoritam (Shuffle): " << endl;
	cout << "------------------------------------" << endl;
	int niz[] = {1,2,3,4,5};
	int duljina_niza = 5;
	int temp, k;
	cout << "Pocetni niz: ";
	for (int i = 0; i < duljina_niza; i++)
		cout << niz[i] << " ";
	cout << endl << endl;
	
	for (int i = duljina_niza-1; i > 0; i--) {
		//system("cls");
		k = rand () % i;
		cout << "Trenutno stanje niza: ";
		for (int j = 0; j < duljina_niza; j++)
			cout << niz[j] << " ";
		cout << endl << endl;
		cout << duljina_niza-i << ". korak: ";
		cout << "Izabran je element na poziciji " << k+1;
		temp = niz[i];
		niz[i] = niz[k];
		niz[k] = temp;
		cout << " -> Zamjena elemenata " << niz[i] << " i " << niz[k] << endl;
		cout << endl;
		cout << "Novo stanje niza: ";
		for (int j = 0; j < duljina_niza;j++)
			cout << niz[j] << " ";
		cout << endl << endl;
		cout << "ENTER ZA NASTAVAK";
		getch();
		cout << endl << endl;
	}
	cout << "Nakon mijesanja: ";
	for (int i = 0; i < duljina_niza; i++) {
		cout << niz[i] << " ";
	}
	return 0;
}

