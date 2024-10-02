#include <iostream>
using namespace std;

int arr[] = { 3, 7, 4, 1, 9, 4, 6, 2 };

void run(int index) {
	cout << arr[index] << " ";
	if (index == 0) return;

	run(index - 1);
	cout << arr[index] << " ";
}


int main() {
	int index;
	cin >> index;

	run(index);
	return 0;
}