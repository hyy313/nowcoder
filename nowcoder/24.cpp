//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//class Solution {
//public:
//	bool VerifySquenceOfBST(vector<int> sequence) {
//
//		//������ֹ�������룬��ֹ�������µ�Խ��
//		if (sequence.size() == 0)
//			return false;
//
//		int i = 0, r = 0;
//
//		//ɨ��Ѱ���������������
//		for (; i < sequence.size() - 1; i++)
//			if (sequence[i] > sequence[sequence.size() - 1])
//				break;
//		r = i;
//
//		for (; i < sequence.size() - 1; i++)
//			if (sequence[i] < sequence[sequence.size() - 1])
//				return false;
//
//		//����������ʼ��
//		bool left = true, right = true;
//		vector<int> vl(sequence.begin(), sequence.begin() + i);
//		vector<int> vr(sequence.begin() + r, sequence.end() - 1);
//
//		if (r > 0)
//			left = VerifySquenceOfBST(vl);
//
//		if (r < i)
//			right = VerifySquenceOfBST(vr);
//
//		return left && right;
//
//	}
//};
//
//int main() {
//
//	//vector<int> s = { 5,7,6,9,11,10,8 };
//	vector<int> s = { 7,8 };
//
//	Solution ss;
//	cout << ss.VerifySquenceOfBST(s) << endl;
//
//}