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
		dat[arr[i]]++;
	}

	for (int i = 0; i < 100; i++)
	{
		if (dat[i] > 0)
		{
			cout << (char)i << ":" << (int)dat[i] << endl;
		}
	}
	return 0;
}