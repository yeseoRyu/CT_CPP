#include <iostream>
using namespace std;

int arr[3][3] = {
	3, 5, 9,
	4, 2, 1,
	5, 1, 5
};

int isExist(int t) {
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] == t) return 1;
		}
	}

	return 0;
}

int main() {
	int input[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> input[i];
	}

	for (int i = 0; i < 3; i++)
	{
		cout << input[i] << ":";
		if (isExist(input[i]) == 1) cout << "존재\n";
		else cout << "미발견\n";
	}

	return 0;
}