//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//
//	//段错误,因为没考虑从下往上的时候，删除越界，也就是重复输出导致重复删除
//	vector<int> printMatrix(vector<vector<int> > matrix) {
//		//存储输出序列
//		vector<int> res = {};
//		vector<vector<int>> m = matrix;
//
//		if (matrix.size() < 1)
//			return res;
//
//		//获取行号和列号
//		int row = matrix.size();
//		int col = matrix[row - 1].size();
//
//		if (row < 1 || col < 1)
//			return res;
//
//		if (row == 1 && col == 1) {
//			res.push_back(matrix[0][0]);
//			return res;
//		}
//
//		//从左往右
//		for (int i = 0; i < col; i++)
//			res.push_back(matrix[0][i]);
//
//		m.erase(m.begin());
//
//		//从上往下
//		for (int i = 1; i < row; i++) {
//			res.push_back(matrix[i][col - 1]);
//			m[i - 1].erase(m[i - 1].end() - 1);
//		}
//
//
//		//从右往左
//		if (row > 1) {
//			for (int i = col - 2; i >= 0; i--)
//				res.push_back(matrix[row - 1][i]);
//
//			m.erase(m.end() - 1);
//		}
//
//
//		//从下往上
//		if (col > 1) {
//			for (int i = row - 2; i > 0; i--) {
//				res.push_back(matrix[i][0]);
//				m[i - 1].erase(m[i - 1].begin());
//			}
//		}
//
//		vector<int> temp = printMatrix(m);
//
//		res.insert(res.end(), temp.begin(), temp.end());
//
//		return res;
//	}
//
//	vector<int> printMatrix2(vector<vector<int> > matrix) {
//
//		vector<int> res;
//
//		int start, endRow, endCol;
//
//		start = 0;//下标
//		endRow = matrix.size();//行数
//		endCol = matrix[0].size();//列数
//
//		//比较时注意：下标要加1才能与行数列数比
//
//		if (!endRow || !endCol)
//			return res;
//
//		while (start + 1 <= endRow && start + 1 <= endCol) {
//			//从左往右
//			for (int i = start; i < endCol; i++)
//				res.push_back(matrix[start][i]);
//
//			//从上往下
//			for (int i = start + 1; i < endRow; i++)
//				res.push_back(matrix[i][endCol - 1]);
//
//			//为了避免重复输出，从右往左和从下往上都需要加以判断
//			if (start + 1 < endRow) {
//				//从右往左
//				for (int i = endCol - 2; i >= start; i--)
//					res.push_back(matrix[endRow - 1][i]);
//			}
//
//			if (start + 1 < endCol) {
//				//从下往上
//				for (int i = endRow - 2; i > start; i--)
//					res.push_back(matrix[i][start]);
//			}
//
//			start++;
//			endRow--;
//			endCol--;
//
//		}
//
//		return res;
//
//	}
//};
//
//int main() {
//	vector<vector<int>> m = { {1},{2},{3} };
//	vector<int> res;
//
//	Solution s;
//	res = s.printMatrix(m);
//
//	for (int i = 0; i < res.size(); i++)
//		cout << res[i] << " ";
//
//	cout << endl;
//
//}
//
////第一个用例
////{ {1, 2} }
//
////第二个用例
////{ {1},{2} }
//
////第三个用例
////{ 
////  {1, 2, 3, 4},
////  {5, 6, 7, 8},
////  {9, 10, 11, 12}
////}
//
////用例要考虑的长一点
//
////case2:
////{{1,2,3,4,5}}
//
////case3:
////{{1},{2},{3},{4},{5}}
//
////case4:
////{
////	{1,2,3,4}
////	{5,6,7,8}
////	{9,10,11,12}
////	{13,14,15,16}
////}
