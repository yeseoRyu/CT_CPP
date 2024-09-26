#include <iostream>
using namespace std;

int main() {
	char arr[6];
	int i, index, len;

	cin >> arr >> index;

	len = 0;
	for (i = 0; i < 6; i++)
	{
		if (arr[i] == '\0')
		{
			len = i;
			break;
		}
	}

	for (i = len; i > index; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[index] = 'A';

	for (i = 0; i < len + 1; i++) cout << arr[i];

	return 0;
}