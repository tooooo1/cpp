#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[5];
    string max= "";
    cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���.\n>>";

    for(int i =0; i<5 ; i++) {
        getline(cin,name[i],';');
    }

    for(int i =0; i<5; i++) {
        if(name[i].length()>max.length()) {
            max= name[i];
        }
    }
    
    cout << "���� �� �̸��� " << max;
}
