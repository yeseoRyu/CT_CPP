#include <iostream>
using namespace std;

int getLen(char arr[10]) {
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == '\0') return i;
	}
	return 0;
}

int main() {
	char arr[3][10];
	int i, len1, len2, len3;

	for (i = 0; i < 3; i++) cin >> arr[i];
	len1 = getLen(arr[0]);
	len2 = getLen(arr[1]);
	len3 = getLen(arr[2]);

	cout << arr[0][len1 - 1] << arr[1][len2 - 1] << arr[2][len3 - 1];

	return 0;
}