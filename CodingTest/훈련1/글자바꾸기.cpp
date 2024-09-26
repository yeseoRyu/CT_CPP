#include <iostream>
using namespace std;

int main() {
	char arr[11];
	char a, b;
	cin >> arr >> a >> b;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == '\0') break;
		if (arr[i] == a)
		{
			arr[i] = b;
		}
		cout << arr[i];

	}

	return 0;
}