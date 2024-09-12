#include <iostream>
using namespace std;

int main() {
	char vect[8], big[8], small[8];
	int i, a, b;

	for (i = 0; i < 8; i++) {
		cin >> vect[i];
	}

	a = 0;
	b = 0;
	for (i = 0; i < 8; i++) {
		if (isupper(vect[i])) {
			big[a] = vect[i];
			a++;
		}
		else {
			small[b] = vect[i];
			b++;
		}
	}

	// Ãâ·Â
	cout << "big=";
	for (i = 0; i < a; i++) {
		cout << big[i];
	}
	cout << endl << "small=";
	for (i = 0; i < b; i++) {
		cout << small[i];
	}
	return 0;
}