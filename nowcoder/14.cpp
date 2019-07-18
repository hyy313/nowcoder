//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	void reOrderArray(vector<int>& array) {
//
//		if (array.size() <= 1)
//			return;
//
//		int even = 0;
//		int odd = array.size() - 1;
//		
//		while (even < odd) {
//			if (array[even] & 1) {
//				even++;
//			}
//
//			odd--;
//			if (array[odd+1] & 1) {
//				odd++;
//
//				if (array[even] % 2 == 0) {
//					swap(array[odd], array[even]);
//					odd--;
//					even++;
//				}
//
//			}
//
//		}
//		
//		return;
//
//	}
//};
//
//int main() {
//
//	vector<int> a = { 1,2,3,4,5,6,7 };
//
//	Solution s;
//	s.reOrderArray(a);
//
//	for (int i = 0; i < a.size(); i++) {
//		cout << a[i] << " ";
//	}
//
//	cout << endl;
//
//}