//#include<iostream>
//#include<vector>
//using namespace std;
//
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
//class Solution {
//public:
//	vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
//		if (root && expectNumber >= root->val) {
//
//			vector<int> temp = { root->val };
//			vector<vector<int> > res = { temp };
//			expectNumber -= root->val;
//
//			//先判断是不是符合要求的叶节点，否则进入左右子树
//			if (!expectNumber && !root->left && !root->right)
//				return res;
//			else {
//
//				vector<vector<int> > res = {};
//
//				//自下往上构建搜寻的和满足要求的路径
//				vector<vector<int> > left = FindPath(root->left, expectNumber);
//				vector<vector<int> > right = FindPath(root->right, expectNumber);
//
//				for (int i = 0; i < left.size(); i++) {
//					left[i].insert(left[i].begin(), root->val);
//					res.push_back(left[i]);
//				}
//
//				for (int i = 0; i < right.size(); i++) {
//					right[i].insert(right[i].begin(), root->val);
//					res.push_back(right[i]);
//				}
//
//				
//				//不用排序
//				/*for (int i = 0; i < res.size(); i++) 
//					for (int j = i + 1;j < res.size(); j++) {
//						if (res[j].size() > res[i].size())
//							swap(res[i], res[j]);
//					}*/
//
//				return res;
//			}
//		}
//
//		return {};
//	}
//
//};
//
////采用全局变量，不用自底向上保存
//class Solution2 {
//public:
//	vector<vector<int> > buffer;
//	vector<int> tmp;
//	vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
//		if (root == NULL)
//			return buffer;
//		tmp.push_back(root->val);
//		if ((expectNumber - root->val) == 0 && root->left == NULL && root->right == NULL)
//		{
//			buffer.push_back(tmp);
//		}
//		FindPath(root->left, expectNumber - root->val);
//		FindPath(root->right, expectNumber - root->val);
//		if (tmp.size() != 0)
//			tmp.pop_back();
//		return buffer;
//	}
//};
//
//int main() {
//
//	TreeNode* root = new TreeNode(10);
//	root->right = new TreeNode(5);
//	root->left = new TreeNode(12);
//	root->right->left = new TreeNode(4);
//	root->right->right = new TreeNode(7);
//
//	Solution2 s;
//
//	vector<vector<int>> v = s.FindPath(root, 22);
//
//	for (int i = 0; i < v.size(); i++) {
//		for (int j = 0; j < v[i].size(); j++)
//			cout << v[i][j] << " ";
//		cout << endl;
//	}
//	cout << endl;
//}