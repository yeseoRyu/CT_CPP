#include <iostream>
using namespace std;

int main() {
	char arr[10];
	char vec[10];
	int i, len1, len2;
	cin >> arr >> vec;

	for (i = 0; i < 10; i++) {
		if (arr[i] == '\0') {
			len1 = i; break;
		}
	}
	for (i = 0; i < 10; i++) {
		if (vec[i] == '\0') {
			len2 = i; break;
		}
	}

	cout << len1 << " " << len2;

	return 0;
}