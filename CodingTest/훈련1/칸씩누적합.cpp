#include <iostream>
using namespace std;

int main() {
	int arr[6];
	int i;

	for (i = 0; i < 6; i++) cin >> arr[i];
	for (i = 0; i < 5; i++)
	{
		arr[i + 1] = arr[i] + arr[i + 1];
	}
	for (i = 0; i < 6; i++) cout << arr[i] << " ";
	return 0;
}