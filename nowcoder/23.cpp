//#include<iostream>
//#include<vector>
//#include<queue>
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
//class Solution {
//public:
//	vector<int> PrintFromTopToBottom(TreeNode* root) {
//		vector<int> res;
//		queue<TreeNode*> temp;
//
//		temp.push(root);
//
//		while (!temp.empty()) {
//			TreeNode* p = temp.front();
//			temp.pop();
//
//			if (p) {
//				res.push_back(p->val);
//				if (p->left)
//					temp.push(p->left);
//				if (p->right)
//					temp.push(p->right);
//			}
//		}
//
//		return res;
//	}
//};
//
//int main() {
//
//	TreeNode* root = NULL;
//	/*TreeNode* root = new TreeNode(1);*/
//	/*root->left = new TreeNode(2);
//	root->right = new TreeNode(3);
//	root->left->right = new TreeNode(4);
//	root->right->left = new TreeNode(5);*/
//
//	Solution s;
//	vector<int> res = s.PrintFromTopToBottom(root);
//
//	for (int i = 0; i < res.size(); i++) {
//		cout << res[i] << " ";
//	}
//
//	cout << endl;
//
//	//system("pause");
//
//}