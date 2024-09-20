#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int a[4];

	a[0] = t / 1000;
	a[1] = t % 1000 / 100;
	a[2] = t % 100 / 10;
	a[3] = t % 10 / 1;

	for (int i = 0; i < 4; i++) {
		cout << "¼ýÀÚ" << a[i] << endl;
	}

	return 0;
}