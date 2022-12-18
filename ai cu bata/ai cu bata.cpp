//4.Se citesc de la tastatura, mai întâi un număr n, apoi un sir de n numere. Scrieți un program
//care, folosind o funcție recursiva, verifica daca valoarea x se numără printre elementele
//șirului, afișând mesajul „da” sau „nu”.
#include <iostream>
using namespace std;

int Apel(int a[],int n,int x) {
	if (a[n] == x) {
		return 1;
	}
	else if (n == 0) {
		return 0;
	}
	else {
		Apel(a, n - 1, x);
	}
		
}

int main()
{
	int n = 5; int x;
	int a[100] = {1, 2 ,3 ,4 ,5};
	cout << "Valoare de cautat x ="; cin >> x;
	if (Apel(a, n, x)) {
		cout << "DA SE AFLA";
	}
	else {
		cout << "NU";
	}
}

