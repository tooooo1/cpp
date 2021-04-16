#include <iostream>
int main() {
	int total = 0;
	for (int i = 0; i <= 10; i++) {
		total += i;
	}
	std::cout << "1에서 10까지 더한 결과는 " << total << "입니다.";
}