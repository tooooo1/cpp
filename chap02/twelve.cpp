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
    cout << "�� ���� �Է��ϼ���>>";
    cin >> end;
    cout<< "1���� "<< end<< "������ ���� " <<sum(1,end) <<"�Դϴ�.";
}

