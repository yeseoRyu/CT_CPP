#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char arr[11];
	char dat[100] = { 0 };

	cin >> arr;

	int len = strlen(arr);

	for (int i = 0; i < len; i++)
	{
		dat[arr[i]] = 1;
	}

	for (int i = 0; i < 100; i++)
	{
		if (dat[i] == 1) cout << (char)i;
	}
	return 0;
}