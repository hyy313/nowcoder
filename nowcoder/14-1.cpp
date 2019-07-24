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
//		int tag = 0;
//
//		for (int i = 0; i <= array.size(); i++) {
//
//			if (array[i] % 2 == 0) {
//
//				//用于初始化限定vector大小
//				/*int temp = array[i];
//				array.erase(begin(array) + i);
//				array.push_back(temp);*/
//
//				array.push_back(array[i]);
//				array.erase(begin(array) + i);
//
//				tag++;
//				i--;//nowcoder oj中此句注释掉报错：段错误:您的程序发生段错误，可能是数组越界，堆栈溢出（比如，递归调用层数太多）等情况引起
//				//报错是因为，删除了之后i要减1
//			}
//
//			if (i + tag == array.size() - 1)
//				break;
//
//		}
//		return;
//
//	}
//};
//
//int main() {
//
//	vector<int> a = { 2,4,6,1,3,5,7 };
//
//	vector<int> b;
//
//	for (int i = 0; i < 7; i++) {
//		b.push_back(i+1);
//	}
//
//	Solution s;
//	s.reOrderArray(a);
//	s.reOrderArray(b);
//
//	for (int i = 0; i < a.size(); i++) {
//		cout << a[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < b.size(); i++) {
//		cout << b[i] << " ";
//	}
//	cout << endl;
//
//}