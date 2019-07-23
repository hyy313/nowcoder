//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//
//	//�δ���,��Ϊû���Ǵ������ϵ�ʱ��ɾ��Խ�磬Ҳ�����ظ���������ظ�ɾ��
//	vector<int> printMatrix(vector<vector<int> > matrix) {
//		//�洢�������
//		vector<int> res = {};
//		vector<vector<int>> m = matrix;
//
//		if (matrix.size() < 1)
//			return res;
//
//		//��ȡ�кź��к�
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
//		//��������
//		for (int i = 0; i < col; i++)
//			res.push_back(matrix[0][i]);
//
//		m.erase(m.begin());
//
//		//��������
//		for (int i = 1; i < row; i++) {
//			res.push_back(matrix[i][col - 1]);
//			m[i - 1].erase(m[i - 1].end() - 1);
//		}
//
//
//		//��������
//		if (row > 1) {
//			for (int i = col - 2; i >= 0; i--)
//				res.push_back(matrix[row - 1][i]);
//
//			m.erase(m.end() - 1);
//		}
//
//
//		//��������
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
//		start = 0;//�±�
//		endRow = matrix.size();//����
//		endCol = matrix[0].size();//����
//
//		//�Ƚ�ʱע�⣺�±�Ҫ��1����������������
//
//		if (!endRow || !endCol)
//			return res;
//
//		while (start + 1 <= endRow && start + 1 <= endCol) {
//			//��������
//			for (int i = start; i < endCol; i++)
//				res.push_back(matrix[start][i]);
//
//			//��������
//			for (int i = start + 1; i < endRow; i++)
//				res.push_back(matrix[i][endCol - 1]);
//
//			//Ϊ�˱����ظ��������������ʹ������϶���Ҫ�����ж�
//			if (start + 1 < endRow) {
//				//��������
//				for (int i = endCol - 2; i >= start; i--)
//					res.push_back(matrix[endRow - 1][i]);
//			}
//
//			if (start + 1 < endCol) {
//				//��������
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
////��һ������
////{ {1, 2} }
//
////�ڶ�������
////{ {1},{2} }
//
////����������
////{ 
////  {1, 2, 3, 4},
////  {5, 6, 7, 8},
////  {9, 10, 11, 12}
////}
//
////����Ҫ���ǵĳ�һ��
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
