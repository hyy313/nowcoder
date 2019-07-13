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
//		if (row == 0 || col == 0 || target < array[0][0] || target > array[row-1][col-1])//此处有问题，容易数组越界，所以应该先判断数组存在，再进行大小比较
//			return false;
//		
//		//并不是，而是原先对二维数组右下角元素表示不正确，注意数组下标要-1
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
//	cout << "输入你想要查找的数(-1代表退出)：";
//	cin >> target;
//
//	while (target != -1) {
//
//		if (sol.Find(target, array))
//			cout << "success" << endl;
//		else
//			cout << "fail" << endl;
//
//		cout << "输入你想要查找的数(-1代表退出)：";
//		cin >> target;
//
//	}
//
//}