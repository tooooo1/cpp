#include <iostream>
#include <string>
using namespace std;

int main() {
    string password, password_;
    cout << "새 암호를 입력하세요>>";
    getline(cin, password);
    cout << "새 암호를 다시 한 번 입력하세요>>";
    getline(cin, password_);

    if(password==password_) {
        cout << "같습니다";
    } else {
        cout << "다릅니다";
    }
}