#include <iostream>
using namespace std;

class Tower {
    private:
    int height;
    public:
    Tower() {height =1;}
    Tower(int high);
    int getHeight();
};

Tower::Tower(int high) {
    height = high;
}

int Tower::getHeight() {
    return height;
}



int main() {
    Tower myTower;
    Tower seoulTower(100);
    cout << "높이는 " <<myTower.getHeight() <<"미터\n";
    cout << "높이는 " <<seoulTower.getHeight() <<"미터\n";

}