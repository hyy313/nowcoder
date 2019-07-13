#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	void replaceSpace(char* str, int length) {

		int space = 0;
		int len = 0;

		for (int i = 0; i < length; i++) {
			len++;

			if (str[i] == ' ') {
				space++;
			}

			if (str[i] == '\0') {
				break;
			}
		}

		if (len + space * 2 > length)
			return;

		for (int j = len + space * 2, i = len; j >= 0; j--, i--) {
			if (str[i] == ' ') {
				str[j--] = '0';
				str[j--] = '2';
				str[j] = '%';
			}
			else {
				str[j] = str[i];
			}
		}

	}
};

int main() {
	char* str;

	Solution sol;
	int len = 0;

	cout << "输入你想要操作的字符串的长度(-1代表退出)：";
	cin >> len;

	str = new char[len];

	cin.get();

	cout << "输入你想要操作的字符串：";
	cin.get(str,len);

	sol.replaceSpace(str, len);

	cout << str << endl;

	system("pause");

}