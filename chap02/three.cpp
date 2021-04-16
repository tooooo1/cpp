#include <iostream>
using namespace std;
 
int main() {
    int a, b;
    int max;
    cout << "두 수를 입력하라>>";
    cin >> a >> b;
    a < b ? max = b : max = a;
    cout << "큰 수 = " << max << endl;
}