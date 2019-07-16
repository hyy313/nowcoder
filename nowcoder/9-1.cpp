//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//	int jumpFloor(int number) {
//
//		int a = 1;
//		int b = 2;
//
//		if (number < 1)
//			return 0;
//
//		if (number == 1)
//			return a;
//
//		if (number == 2)
//			return b;
//
//		for (int i = 3; i <= number; i++) {
//			int temp = b;
//			b += a;
//			a = temp;
//		}
//
//		return b;
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
//		cout << "jumpFloor(n):" << s.jumpFloor(n) << endl;
//
//		cout << "ÊäÈën:";
//		cin >> n;
//	}
//}