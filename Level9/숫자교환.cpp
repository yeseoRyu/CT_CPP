#include <iostream>
using namespace std;
int main() {
	int arr[6] = { 3,4,2,5,7,9 };
	int index1, index2;
	int temp;

	cin >> index1 >> index2;
	temp = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = temp;

	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}