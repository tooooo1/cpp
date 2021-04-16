#include <iostream>
using namespace std;

int main() {
	int count = 0;
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << j << 'x' << i << '=' << i * j << '\t';
		}
		cout << '\n';
	}
}