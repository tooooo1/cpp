#include<iostream>
#include<string>
using namespace std;
 
class Account{
    string name;
    int id;
    int money;
public:
    Account(string s,int a, int b);
    void deposit(int a);
    string getOwner();
    int withdraw(int a);
    int inquiry();
    
};
 
Account::Account(string s, int a, int b){
    name = s;
    id = a;
    money = b;
}
 
void Account::deposit(int t){
    money += t;
}
 
string Account::getOwner(){
    return name;
}
 
int Account::withdraw(int t){
    money -= t;
    return t;
}
 
int Account::inquiry(){
    return money;
}
 
int main(){
    Account a("Kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}