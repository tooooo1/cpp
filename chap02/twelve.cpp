#include <iostream>
#include <string>
using namespace std;


int sum(int a,int b) {
    int k, res =0;
    for(k=a; k<=b; k++) {
        res +=k;
    }
    return res;
}


int main() {
    int end;
    cout << "끝 수를 입력하세요>>";
    cin >> end;
    cout<< "1에서 "<< end<< "까지의 합은 " <<sum(1,end) <<"입니다.";
}

