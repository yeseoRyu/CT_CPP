#include <iostream>
using namespace std;

int main() {
	char v[8];
	int i, index, len;

	cin >> v >> index;

	len = 0;
	for (i = 0; i < 8; i++) {
		if (v[i] == '\0')
		{
			len = i;
			break;
		}
	}

	for (i = index; i < len; i++)
	{
		v[i] = v[i + 1];
	}

	// Ãâ·Â
	for (i = 0; i < len - 1; i++) cout << v[i];

	return 0;
}