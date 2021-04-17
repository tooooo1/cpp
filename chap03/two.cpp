#include <iostream>
#include <string>
using namespace std;

class Date {
    int year,month,day;
    string s;
    public:
    Date(int a, int b, int c) { year = a;
    month = b;
    day = c;}

    Date(string s) {year = stoi(s.substr(0,4));
    month = stoi(s.substr(5,1)); day =stoi(s.substr(7,2));}

    void show();
    int getYear() {return year;}
    int getMonth(){return month;}
    int getDay(){return day;}

};

void Date::show() {
    cout << year << "³â" << month << "¿ù" <<day<<"ÀÏ\n";
}

int main() {
    Date birth(2014,3,20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() <<"," << birth.getMonth() << ',' << birth.getDay() <<'\n';

}