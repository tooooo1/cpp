#include <iostream>
#include <string>
using namespace std;

int main() {
    string yes;

    while(true) {
        cout << "�����ϰ������ yes�� �Է��ϼ���>>";
        getline(cin,yes);
        if(yes=="yes") {
            cout << "�����մϴ�...";
            break;
        }
    }
}