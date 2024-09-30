#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char arr[10] = { "ATKPTCABC" };
	char a, b;
	int indexA, indexB;

	cin >> a >> b;

	for (int i = 0; i < 9; i++)
	{
		if (arr[i] == a)
		{
			indexA = i;
			break;
		}
	}

	for (int i = 8; i >= 0; i--)
	{
		if (arr[i] == b)
		{
			indexB = i;
			break;
		}
	}

	if (indexA < indexB) cout << indexB - indexA;
	return 0;
}