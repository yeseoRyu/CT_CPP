#include <iostream>
using namespace std;

char arr[6];

void run(int i) {
	if (i == 5) {
		cout << endl;
		return;
	}
	cout << arr[i];
	run(i + 1);
	cout << arr[i];
}

int main() {
	cin >> arr;
	run(0);
	return 0;
}