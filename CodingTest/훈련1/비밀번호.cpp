#include <iostream>
#include <cstring>
using namespace std;

int vect[4][4] = { 0 };

void password(int t, int n) {
	int cnt = 1;
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (cnt == t) vect[y][x] = n;
			cnt++;
		}
	}
}

int main() {
	int input[4];

	for (int i = 0; i < 4; i++)
	{
		cin >> input[i];
		password(input[i], i + 1);
	}


	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << vect[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}