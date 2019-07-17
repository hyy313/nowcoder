//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//	double Power(double base, int exponent) {
//
//		double res;
//		bool tag = true;//���ָ������
//
//		if (exponent < 0) {
//			tag = false;
//			exponent = -exponent;
//		}
//
//		if (base == 0)
//			return 0;
//
//		if (exponent == 0) {
//			return 1;
//		}
//
//		if (exponent == 1) {
//			return base;
//		}
//
//		if (exponent & 1) {
//			res = Power(base, (exponent - 1) >> 1);
//			res *= res;
//			res *= base;
//		}
//		else {
//			res = Power(base, exponent >> 1);
//			res *= res;
//		}
//
//		if (!tag)
//			return 1 / res;
//
//		return res;
//	}
//
//	//��������if-else�жϴ���
//	/*double Power2(double base, int exponent) {
//		if (exponent > 0)
//		{
//			if (exponent == 1)
//				return base;
//			if (exponent % 2 == 0)
//				return Power2(base, exponent / 2) * Power2(base, exponent / 2);
//			else
//				return Power2(base, exponent / 2) * Power2(base, exponent / 2 + 1);
//		}
//		else if (exponent == 0)
//		{
//			return 1;
//		}
//		else
//		{
//			return 1 / Power2(base, 0 - exponent);
//		}
//	}*/
//
//	//���õݹ�
//	/*double Power3(double base, int exponent) {
//		long long p = abs((long long)exponent);
//		double r = 1.0;
//		while (p) {
//			if (p & 1)
//				r *= base;
//			base *= base;
//			p >>= 1;
//		}
//		return (exponent > 0) ? r : 1 / r;
//	}*/
//
//};
//
//int main() {
//	Solution s;
//
//	int x, n;
//
//	cout << "����x��n(xΪ-10�˳�):";
//	cin >> x >> n;
//
//	while (x != -10) {
//		cout << "Power(x,n):" << s.Power(x, n) << endl;
//
//		cout << "����x��n:";
//		cin >> x >> n;
//	}
//}