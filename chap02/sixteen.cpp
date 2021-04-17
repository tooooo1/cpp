#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    char input[10000];
    int alphabet[26]= {0};
    int num;

    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다. 텍스트의 끝은 ;입니다. 10000개까지 가능합니다.\n";
	cin.getline(input, 10000, ';');
	cout << "총 알파벳 수 " << strlen(input) << '\n';

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