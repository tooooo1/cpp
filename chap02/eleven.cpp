#include <iostream>
#include <string>
using namespace std;

int main() {
    int end;
    int sum=0;

    cout << "끝 수를 입력하세요>>";
    cin >> end;

    for(int i=1; i<=end;i++) {
        sum +=i;
    }

    cout<< "1에서 "<< end<< "까지의 합은 " <<sum<<"입니다.";
}
