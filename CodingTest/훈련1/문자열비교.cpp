#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char id[] = "qlqlaqkq";
	char pass[] = "tkaruqtkf";

	char inputID[10], inputPass[20];

	cin >> inputID >> inputPass;

	int re1 = strcmp(id, inputID);
	int re2 = strcmp(pass, inputPass);

	if (re1 + re2 == 0) cout << "LOGIN";
	else cout << "INVALID";
	return 0;
}