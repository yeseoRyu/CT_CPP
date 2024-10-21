#include <iostream>
#include <cstring>
using namespace std;

struct Node {
	int x;
	Node* next;
};

int main() {
	Node a, b, c;

	a.x = 3;
	a.next = &b;

	b.x = 5;
	b.next = &c;

	c.x = 4;
	c.next = NULL;

	return 0;
}