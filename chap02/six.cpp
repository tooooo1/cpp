#include <iostream>
#include <string>
using namespace std;

int main() {
    string password, password_;
    cout << "�� ��ȣ�� �Է��ϼ���>>";
    getline(cin, password);
    cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
    getline(cin, password_);

    if(password==password_) {
        cout << "�����ϴ�";
    } else {
        cout << "�ٸ��ϴ�";
    }
}