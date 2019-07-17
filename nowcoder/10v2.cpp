//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//	int  NumberOf1(int n) {
//
//		int cnt = 0;
//
//		while (n) {
//			cnt++;
//			n = (n - 1) & n;
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