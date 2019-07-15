//#include<iostream>
//#include<vector>
//using namespace std;
//
////当前方法存在bug
////{ 1,0,1,1,1,1,1,1,1 },失败
////当三者相等时应使用顺序查找
////举例时要全面
//class Solution {
//public:
//	int min(vector<int> rotateArray) {
//		for (int i = 0; i < rotateArray.size() - 1; i++) {
//			if (rotateArray[i] > rotateArray[i + 1]) {
//				return rotateArray[i + 1];
//			}
//		}
//	}
//
//	int minNumberInRotateArray(vector<int> rotateArray) {
//		int res = -1;
//
//		if (rotateArray.size() == 0)
//			return 0;
//
//		int l = 0;
//		int r = rotateArray.size() - 1;
//		int mid = (l + r) / 2;		
//
//		while (l + 1 != r) {
//			//增加了对l,mid,r三者相等的判断,一旦相等,最小值就不知道落在哪个区间,得使用遍历法
//			if (rotateArray[l] == rotateArray[r] && rotateArray[l] == rotateArray[mid]){
//				res = min(rotateArray);
//				break;
//			}
//			else if (rotateArray[mid] >= rotateArray[l])
//				l = mid;
//			else if (rotateArray[mid] <= rotateArray[r])
//				r = mid;
//
//			mid = (l + r) / 2;
//		}
//
//		//判断是二分查找还是遍历搜索的结果
//		if (res != -1)
//			return res;
//		else
//			return rotateArray[r];
//
//	}
//};
//
//int main() {
//
//	Solution s;
//
//	vector<int> v = { 1,0,1,1,1,1,1,1,1 };
//
//	cout << s.minNumberInRotateArray(v) << endl;
//
//}