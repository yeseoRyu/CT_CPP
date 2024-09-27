#include <iostream>
using namespace std;

int main() {
	int arr[4] = { 3, 5, 4, 2 };
	int bit[4];
	int sum;

	for (int i = 0; i < 4; i++) cin >> bit[i];

	sum = 0;
	for (int i = 0; i < 4; i++)
	{
		if (bit[i] == 1)
		{
			sum += arr[i];
		}
	}

	cout << sum;
	return 0;
}