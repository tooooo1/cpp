#include <iostream>
#include <string>
using namespace std;

int main() {
    int count =0;
    string input;
    cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";
    getline(cin,input);

    for (int i = 0; i<input.length(); i++) {
        input[i] == 'x' ? count++ : NULL;
    }
    cout << "x�� ������ " << count;
}