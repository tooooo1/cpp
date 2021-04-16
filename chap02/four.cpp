#include <iostream>
using namespace std;
 
int main() {
    double max, num[5];
    cout << "5개의 실수를 입력하라>>";
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
    }
    for (int i = 0; i < 4; i++) {
        num[i] < num[i + 1] ? max = num[i + 1] : max = num[i];
    }
    cout << "제일 큰 수 = " << max;
}