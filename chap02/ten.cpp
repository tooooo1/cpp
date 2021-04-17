#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "문자열 입력>>";
    getline(cin,input);

    for(int i=1; i<=input.length();i++) {
        cout << input.substr(0,i) << "\n";
    }
}
