#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    char input[10000];
    int alphabet[26]= {0};
    int num;

    cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�. �ؽ�Ʈ�� ���� ;�Դϴ�. 10000������ �����մϴ�.\n";
	cin.getline(input, 10000, ';');
	cout << "�� ���ĺ� �� " << strlen(input) << '\n';

    for (int i=0; i< strlen(input) ; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z')
		{
			num = (int)(input[i] - 'A');
			alphabet[num]++;
		}
		else if (input[i] >= 'a' && input[i] <= 'z')
		{
			num = (int)(input[i] - 'a');
			alphabet[num]++;
		}
    }

    for (int i = 0; i < 26; i++)
	{
		cout << (char)('a' + i) << " ("<<alphabet[i]<<")\t : ";
		for (int j = 0; j < alphabet[i]; j++)
		{
			cout << "*";
		}
		cout<<"\n";
    }

}