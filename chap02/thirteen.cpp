#include <iostream>
#include <string>
using namespace std;


int main() {
    int count;
    bool flag=true;
    cout <<"***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";
    
    while(true){
    cout<< "«��:1, ¥��:2, ������:3, ����:4>>";
    cin >> count;

    switch (count)
    {
    case 1:
        cout << "���κ�?";
        cin >> count;
        cout << "«�� " <<count<< "�κ� ���Խ��ϴ�.\n";
        break;
    case 2:
        cout << "���κ�?";
        cin >> count;
        cout << "¥�� " <<count<< "�κ� ���Խ��ϴ�.\n";
        break;
    case 3:
        cout << "���κ�?";
        cin >> count;
        cout << "������ " <<count<< "�κ� ���Խ��ϴ�.\n";
        break;
    case 4:
        cout << "���� ������ �������ϴ�.";
        flag=false;
        break;
    default:
        cout <<"�ٽ� �ֹ��ϼ���!!\n";
        break;
    }
    
    if(flag==false) {
        break;
    }


    }
}