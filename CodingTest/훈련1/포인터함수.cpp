#include <iostream>
#include <cstring>
using namespace std;

void bbq(int* a, int* b) {
	int arr[5];
	int max, min;
	for (int i = 0; i < 5; i++) cin >> arr[i];

	max = 0;
	min = 9;
	for (int i = 0; i < 5; i++)
	{
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}

	*a = max;
	*b = min;
}

int main() {
	int a, b;
	bbq(&a, &b);
	cout << "a=" << a << endl
		<< "b=" << b;
	return 0;
}