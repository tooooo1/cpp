#include <iostream>
#include <string>
using namespace std;


int main() {
    int total =0;
    int count;
    int americano = 2300;
    int espresso = 2000;
    int cappuccino = 2500;
    string order="";

    cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";

    while (total<20000) {
        cout << "�ֹ�>>";
        cin>> order >> count;
        
        if (order == "�Ƹ޸�ī��") {
            cout << americano*count <<"���Դϴ�. ���ְ� �弼��\n";
            total +=americano*count;
        }
        if (order == "����������") {
            cout << espresso*count <<"���Դϴ�. ���ְ� �弼��\n";
            total +=espresso*count;
        }
        if (order == "īǪġ��") {
            cout << cappuccino*count <<"���Դϴ�. ���ְ� �弼��\n";
            total +=cappuccino*count;
        }
    }
    cout << "���� " << total <<"���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~";

}