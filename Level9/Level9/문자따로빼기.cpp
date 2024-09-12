#include <iostream>

using namespace std;

int main() {
	char arr[9] = { 'D', 'A', 'T', 'A', 'P', 'O', 'W', 'E', 'R' };
	char v[9] = { 0 };
	int a, b, n;

	cin >> a >> b;

	n = 0;
	for (int i = a; i <= b; i++) {
		v[n] = arr[i];
		n++;
	}

	for (int i = 0; i < n; i++) {
		cout << v[i];
	}

	return 0;
}