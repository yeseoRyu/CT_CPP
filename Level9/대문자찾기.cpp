#include <iostream>
using namespace std;

char arr[5];

void checkChar(char target) {
	if (isupper(target)) {
		cout << "´ë";
	}
	else {
		cout << "¼Ò";
	}
}

int main() {
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 5; i++) {
		checkChar(arr[i]);
	}
	return 0;
}