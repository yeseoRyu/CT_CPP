#include <iostream>
using namespace std;

int main() {
	int vect[7] = { 3, 5, 4, 2, 6, 6, 5 };
	int bit[7];
	int i;


	for (i = 0; i < 7; i++)
	{
		cin >> bit[i];
	}

	for (i = 0; i < 7; i++)
	{
		if (bit[i] == 0)
		{
			vect[i] = 0;
			cout << 0;
		}
		else cout << 7;
	}


	return 0;
}