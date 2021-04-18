#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class EvenRandom {
public:
    EvenRandom();
    int next();
    int nextInRange(int x, int y);
};
EvenRandom::EvenRandom() {
    srand((unsigned)time(0));
}
int EvenRandom::next() {
    int n = rand();
    if (n % 2 == 0) return n;
    else return n - 1;
}
int EvenRandom::nextInRange(int x,int y) {
    int n= rand() % (y - x+1) + x;
    if (n % 2 == 0) return n;
    else return n - 1;
}
int main() {
    EvenRandom r;
    cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--\n";
    for (int i = 0; i < 10; ++i) {
        int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ����
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2���� " << "10 ������ ���� ���� 10 �� --\n";
    for (int i = 0; i < 10; ++i) {
        int n = r.nextInRange(2, 10); //2���� 10 ������ ������ ����
        cout << n << ' ';
    }
    cout << '\n';
}