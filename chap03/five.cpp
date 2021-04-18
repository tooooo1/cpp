#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random {
    public:
    Random();
    int next();
    int nextInRange(int n1,int n2);
};

Random::Random() {
    srand((unsigned)time(0));
}
int Random::next() {
    return rand();
}
int Random::nextInRange(int x,int y) {
    return rand() % (y - x+1) + x;
}
int main() {
    Random r;
    cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--\n";
    for (int i = 0; i < 10; ++i) {
        int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ����
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10 �� --\n";
    for (int i = 0; i < 10; ++i) {
        int n = r.nextInRange(2, 4); //2���� 4 ������ ������ ����
        cout << n << ' ';
    }
    cout << '\n';
}