//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	struct TreeNode* left;
//	struct TreeNode* right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//
//vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
//	if (root && expectNumber >= root->val) {
//
//		vector<int> temp = { root->val };
//		vector<vector<int> > v = { temp };
//		expectNumber -= root->val;
//
//		//先判断是不是符合要求的叶节点，否则进入左右子树
//		if (!expectNumber && !root->left && !root->right)
//			return v;
//		else {
//
//			vector<vector<int> > res = {};
//
//			//自下往上构建搜寻的和满足要求的路径
//			vector<vector<int> > left = FindPath(root->left, expectNumber);
//			vector<vector<int> > right = FindPath(root->right, expectNumber);
//
//			for (int i = 0; i < left.size(); i++) {
//				left[i].insert(left[i].begin(), root->val);
//				res.push_back(left[i]);
//			}
//
//			for (int i = 0; i < right.size(); i++) {
//				right[i].insert(right[i].begin(), root->val);
//				res.push_back(right[i]);
//			}
//
//
//			//不用排序
//			/*for (int i = 0; i < res.size(); i++)
//				for (int j = i + 1;j < res.size(); j++) {
//					if (res[j].size() > res[i].size())
//						swap(res[i], res[j]);
//				}*/
//
//			int num = res.size() - 1;
//			cout << num << endl;
//
//
//			//循环僵住因为res.size()返回值是无符号整数型
//			cout << res.size() - 1 << endl;
//			for (int i = 0; i < (res.size() - 1); i++)
//				for (int j = i + 1; j < res.size(); j++) {
//					swap(res[i], res[j]);
//				}
//
//
//			return res;
//		}
//	}
//
//	return {};
//}
//
//int main() {
//
//	TreeNode* root = new TreeNode(10);
//	root->right = new TreeNode(5);
//	root->left = new TreeNode(12);
//	root->right->left = new TreeNode(4);
//	root->right->right = new TreeNode(7);
//
//	vector<vector<int>> v = FindPath(root, 22);
//
//	for (int i = 0; i < v.size(); i++) {
//		for (int j = 0; j < v[i].size(); j++)
//			cout << v[i][j] << " ";
//		cout << endl;
//
//	}
//}
//
