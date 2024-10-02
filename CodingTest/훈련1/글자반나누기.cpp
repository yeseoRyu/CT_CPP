#include <iostream>
#include <cstring>
using namespace std;

char a[6], b[6];

int isSame(int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i])return 0;
	}
	return 1;
}

int main() {
	char arr[11];
	cin >> arr;
	int len = strlen(arr);
	int index = len / 2;	//3
	int result = 0;


	for (int i = 0; i < index; i++)	a[i] = arr[i];//3
	for (int i = 0; i < len - index; i++) b[i] = arr[index + i];//4

	result = isSame(len - index);
	if (result == 1) cout << "동일한문장";
	else cout << "다른문장";
	return 0;
}