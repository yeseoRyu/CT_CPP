#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char vect[6] = { "GHOST" };
	char arr[11];
	cin >> arr;

	int cnt = 0;
	int len = strlen(arr);

	for (int i = 0; i < len; i++)
	{
		if (arr[i] == vect[cnt]) cnt++;
	}

	if (cnt == 5) cout << "존재";
	else cout << "존재하지 않음";

	return 0;
}