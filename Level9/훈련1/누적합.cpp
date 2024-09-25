#include <iostream>
using namespace std;

void input(int v[4]) {
	for (int i = 0; i < 4; i++)
	{
		cin >> v[i];
	}
}

int main() {
	int a[4];
	int b[4];
	int result[4] = { 0 };
	int i, t;

	input(a);
	input(b);

	t = 3;
	for (i = 0; i < 4; i++)
	{
		result[i] = a[i] + b[t--];
		cout << result[i] << " ";
	}

	return 0;
}