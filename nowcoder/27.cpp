//#include<iostream>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//			val(x), left(NULL), right(NULL) {
//	}
//};
//
//void showTree(TreeNode* root) {
//	if (root) {
//		showTree(root->left);
//		cout << root->val << "->";
//		showTree(root->right);
//	}
//}
//
//void show(TreeNode* root) {
//	if (root) {
//		cout << root->val << "->";
//		show(root->right);
//	}
//}
//
//class Solution {
//public:
//
//	TreeNode* root = NULL;
//	TreeNode* pri = NULL;
//
//	TreeNode* Convert(TreeNode* pRootOfTree)
//	{
//		Op(pRootOfTree);
//		return root;
//	}
//
//	void Op(TreeNode* pRootOfTree) {
//		if (pRootOfTree) {
//			Op(pRootOfTree->left);
//			if (!root && !pRootOfTree->left) {
//				root = pRootOfTree;
//				pri = pRootOfTree;
//			}
//			else {
//				pri->right = pRootOfTree;
//				pRootOfTree->left = pri;
//				pri = pRootOfTree;
//			}
//			Op(pRootOfTree->right);
//		}
//	}
//};
//
//int main() {
//	TreeNode* pRoot = new TreeNode(10);
//	pRoot->left = new TreeNode(6);
//	pRoot->right = new TreeNode(14);
//	pRoot->left->left = new TreeNode(4);
//	pRoot->left->right = new TreeNode(8);
//	pRoot->right->left = new TreeNode(12);
//	pRoot->right->right = new TreeNode(16);
//
//	showTree(pRoot);
//
//	Solution s;
//	s.Op(pRoot);
//
//	show(s.root);
//}