#include <iostream>
#include <string>
using namespace std;

int main() {
    int end;
    int sum=0;

    cout << "�� ���� �Է��ϼ���>>";
    cin >> end;

    for(int i=1; i<=end;i++) {
        sum +=i;
    }

    cout<< "1���� "<< end<< "������ ���� " <<sum<<"�Դϴ�.";
}
