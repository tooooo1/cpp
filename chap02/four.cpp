#include <iostream>
using namespace std;
 
int main() {
    double max, num[5];
    cout << "5���� �Ǽ��� �Է��϶�>>";
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
    }
    for (int i = 0; i < 4; i++) {
        num[i] < num[i + 1] ? max = num[i + 1] : max = num[i];
    }
    cout << "���� ū �� = " << max;
}