//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//	int Fibonacci(int n) {
//
//		int a = 0;
//		int b = 1;
//
//		if (n <= 0) {
//			return a;
//		}
//
//		if (n == 1) {
//			return b;
//		}
//
//		for (int i = 2; i <= n; i++) {
//			int temp = b;
//			b += a;
//			a = temp;
//		}
//
//		return b;
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
//		cout << "Fibonacci(n):" << s.Fibonacci(n) << endl;
//
//		cout << "ÊäÈën:";
//		cin >> n;
//	}
//}