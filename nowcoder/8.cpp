//#include<iostream>
//#include<vector>
//using namespace std;
//
////��ǰ��������bug
////{ 1,0,1,1,1,1,1,1,1 },ʧ��
////���������ʱӦʹ��˳�����
////����ʱҪȫ��
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
//			//�����˶�l,mid,r������ȵ��ж�,һ�����,��Сֵ�Ͳ�֪�������ĸ�����,��ʹ�ñ�����
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
//		//�ж��Ƕ��ֲ��һ��Ǳ��������Ľ��
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