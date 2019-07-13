//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	bool Find(int target, vector<vector<int>> array) {
//
//		int row = array.size();
//		int col = array[0].size();
//
//		if (row == 0 || col == 0 || target < array[0][0] || target > array[row-1][col-1])//�˴������⣬��������Խ�磬����Ӧ�����ж�������ڣ��ٽ��д�С�Ƚ�
//			return false;
//		
//		//�����ǣ�����ԭ�ȶԶ�ά�������½�Ԫ�ر�ʾ����ȷ��ע�������±�Ҫ-1
//
//
//		int x = 0;
//		int y = col - 1;
//
//		while (x <= row - 1 && y >= 0) {
//			if (target == array[x][y]) {
//				return true;
//			}
//			else if (target < array[x][y]) {
//				y--;
//			}
//			else if (target > array[x][y]) {
//				x++;
//			}
//		}
//
//		return false;
//
//	}
//};
//
//int main() {
//	vector<vector<int>> array = { {1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15} };
//
//	Solution sol;
//	int target = 0;
//
//	cout << "��������Ҫ���ҵ���(-1�����˳�)��";
//	cin >> target;
//
//	while (target != -1) {
//
//		if (sol.Find(target, array))
//			cout << "success" << endl;
//		else
//			cout << "fail" << endl;
//
//		cout << "��������Ҫ���ҵ���(-1�����˳�)��";
//		cin >> target;
//
//	}
//
//}