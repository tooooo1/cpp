#include <iostream>
#include <string>
using namespace std;


int main() {
    int count;
    bool flag=true;
    cout <<"***** 승리장에 오신 것을 환영합니다. *****\n";
    
    while(true){
    cout<< "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
    cin >> count;

    switch (count)
    {
    case 1:
        cout << "몇인분?";
        cin >> count;
        cout << "짬뽕 " <<count<< "인분 나왔습니다.\n";
        break;
    case 2:
        cout << "몇인분?";
        cin >> count;
        cout << "짜장 " <<count<< "인분 나왔습니다.\n";
        break;
    case 3:
        cout << "몇인분?";
        cin >> count;
        cout << "군만두 " <<count<< "인분 나왔습니다.\n";
        break;
    case 4:
        cout << "오늘 영업은 끝났습니다.";
        flag=false;
        break;
    default:
        cout <<"다시 주문하세요!!\n";
        break;
    }
    
    if(flag==false) {
        break;
    }


    }
}