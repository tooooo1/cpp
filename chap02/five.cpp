#include <iostream>
#include <string>
using namespace std;

int main() {
    int count =0;
    string input;
    cout << "문자들을 입력하라(100개 미만).\n";
    getline(cin,input);

    for (int i = 0; i<input.length(); i++) {
        input[i] == 'x' ? count++ : NULL;
    }
    cout << "x의 개수는 " << count;
}