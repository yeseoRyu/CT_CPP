#include <iostream>
using namespace std;

int main() {
	int a, b;
	char t;

	cin >> a >> b >> t;

	for (int y = 0; y < a; y++)
	{
		for (int x = 0; x < b; x++)
		{
			cout << t;
		}
		cout << endl;
	}
	cout << endl;
	for (int y = 0; y < a; y++)
	{
		for (int x = 0; x < b; x++)
		{
			cout << t;
		}
		cout << endl;
	}

	return 0;
}