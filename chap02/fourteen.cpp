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

    cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";

    while (total<20000) {
        cout << "주문>>";
        cin>> order >> count;
        
        if (order == "아메리카노") {
            cout << americano*count <<"원입니다. 맛있게 드세요\n";
            total +=americano*count;
        }
        if (order == "에스프레소") {
            cout << espresso*count <<"원입니다. 맛있게 드세요\n";
            total +=espresso*count;
        }
        if (order == "카푸치노") {
            cout << cappuccino*count <<"원입니다. 맛있게 드세요\n";
            total +=cappuccino*count;
        }
    }
    cout << "오늘 " << total <<"원을 판매하여 카페를 닫습니다. 내일 봐요~~~";

}