//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//	int  NumberOf1(int n) {
//
//		int cnt = 0;
//		int temp = 1;
//
//		while (temp) {
//			if (temp & n)
//				cnt++;
//			temp = temp << 1;
//			cout << temp << endl;
//		}
//
//		return cnt;
//
//	}
//};
//
//int main() {
//	Solution s;
//	
//	int n;
//
//	cout << "ÊäÈën:";
//	cin >> n;
//
//	while (n != -1) {
//		cout << "NumberOf1(n):" << s.NumberOf1(n) << endl;
//
//		cout << "ÊäÈën:";
//		cin >> n;
//	}
//}