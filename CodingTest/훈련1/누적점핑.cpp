#include <iostream>
using namespace std;

int main() {
	int arr[6] = { 0 };
	int i;

	cin >> arr[0] >> arr[1];

	for (i = 2; i <= 5; i++)
	{
		arr[i] = arr[i - 2] * arr[i - 1];
	}

	cout << arr[5];
	return 0;
}