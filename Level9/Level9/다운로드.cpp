#include <iostream>
using namespace std;


int main() {
	struct FileDown {
		int dn1, dn2;
	};

	FileDown n1, n2;
	cin >> n1.dn1 >> n2.dn2;

	int t, d;
	d = 0;
	if (n1.dn1 > n2.dn2) { t = n2.dn2; }
	else { t = n1.dn1; }

	while (t < 100) {
		d++;
		t++;
	}

	cout << d;

	return 0;
}