#include <iostream>
#include <cstring>
using namespace std;

char vect[10] = { "MINCODING" };

int main() {
	char dat[100] = { 0 };
	char t[50];
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) cin >> t[i];
	for (int i = 0; i < 10; i++) dat[vect[i]] = 1;

	for (int i = 0; i < n; i++)
	{
		if (dat[t[i]] == 1) cout << "O";
		else cout << "X";
	}

	return 0;
}