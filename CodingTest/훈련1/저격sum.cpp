#include <iostream>
using namespace std;

int arr[11] = { 3, 4, 1, 1, 2, 6, 8, 7, 8, 9, 10 };

void getSum(int index) {
	int sum = 0;
	for (int i = index; i < index + 5; i++)
	{
		sum += arr[i];
	}
	cout << sum;
}

int main() {
	int t;
	cin >> t;
	getSum(t);
	return 0;
}