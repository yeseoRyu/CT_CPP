#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int vect[8];
	int bucket[10] = { 0 };
	for (int i = 0; i < 8; i++) cin >> vect[i];
	for (int i = 0; i < 8; i++) bucket[vect[i]]++;

	for (int i = 0; i < 10; i++) {
		if (bucket[i] > 0) {
			for (int x = 0; x < bucket[i]; x++) cout << i << " ";
		}
	}

	return 0;
}