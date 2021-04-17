#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[5];
    string max= "";
    cout << "5명의 이름을 ';'으로 구분하여 입력하세요.\n>>";

    for(int i =0; i<5 ; i++) {
        getline(cin,name[i],';');
    }

    for(int i =0; i<5; i++) {
        if(name[i].length()>max.length()) {
            max= name[i];
        }
    }
    
    cout << "가장 긴 이름은 " << max;
}
