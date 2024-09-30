#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char card[16];
	char dat[100] = { 0 };
	int t = 0;

	cin >> card;

	int len = strlen(card);
	for (int i = 0; i < len; i++)
	{
		dat[card[i]]++;
	}

	for (int i = 0; i < 100; i++)
	{
		if (dat[i] > 0) t++;
	}

	cout << t << "°³";
	return 0;
}