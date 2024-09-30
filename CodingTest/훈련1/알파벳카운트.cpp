#include <iostream>
#include <cstring>
using namespace std;

int isPattern(int fam[3]) {
	int cnt = 0;
	int lv = 1;

	return 0;
}

int main() {
	char arr[11];
	char dat[100] = { 0 };
	int flag = 0;
	int max = 0;

	cin >> arr;
	int len = strlen(arr);
	for (int i = 0; i < len; i++) dat[arr[i]]++;


	for (int i = 0; i < 100; i++) {

		if (dat[i] > dat[max])
		{
			max = i;
		}
	}

	cout << (char)max;
	return 0;
}