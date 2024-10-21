#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char strs[8];


	int a, b, c, d;
	cin >> strs >> a >> b >> c >> d;
	char* ptrs[4] = { &strs[a], &strs[b], &strs[c], &strs[d] };



	for (int i = 0; i < 4; i++) {
		cout << *ptrs[i];
	}

	return 0;
}