#include <iostream>
using namespace std;

int main() {
    int num1,num2,result;
    char op;

    while(true) {
        cout << "? ";
        cin >> num1 >> op >> num2;
            

        switch (op)
        {
        case '+':
            result = num1+num2;
            break;
        case '-':
            result = num1-num2;
            break;
         case '*':
            result = num1*num2;
            break;
        case '/':
            result = num1/num2;
            break;
        case '%':
            result = num1%num2;
            break;
        
        default:
            break;
        }

        
        cout << num1 << ' ' << op << ' ' << num2 << " = " << result << '\n';
        


    }

}