//#include<iostream>
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
///*
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//			val(x), left(NULL), right(NULL) {
//	}
//};*/
//class Solution {
//public:
//	/*bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
//	{
//		if (pRoot1 == NULL || pRoot2 == NULL)
//			return false;
//
//		if (pRoot1->val == pRoot2->val) {
//
//			if (!pRoot2->left && !pRoot2->right)
//				return true;
//			else if (pRoot2->left && pRoot2->right && HasSubtree(pRoot1->left, pRoot2->left) && HasSubtree(pRoot1->right, pRoot2->right))
//				return true;
//			else if (pRoot2->right && HasSubtree(pRoot1->right, pRoot2->right))
//				return true;
//			else if (pRoot2->left && !pRoot2->right && HasSubtree(pRoot1->left, pRoot2->left))
//				return true;
//
//			return false;
//		}
//
//		HasSubtree(pRoot1->left, pRoot2);
//		HasSubtree(pRoot1->right, pRoot2);
//		return false;
//
//	}*/
//
//	bool search(TreeNode* pRoot1, TreeNode* pRoot2) {
//
//		if (pRoot1 == NULL || pRoot2 == NULL)
//			return false;
//
//		if (pRoot1->val == pRoot2->val) {
//			
//			if (!pRoot2->left && !pRoot2->right)
//				return true;
//
//			bool l, r;
//			l = r = true;
//
//			//若子树还有左右子树，需继续判断是否相等，否则返回true
//			if (pRoot2->left) {
//				l = search(pRoot1->left, pRoot2->left);
//			}
//			if (pRoot2->right) {
//				r = search(pRoot1->right, pRoot2->right);
//			}
//
//			return l & r;
//
//		}
//
//		return false;
//	}
//
//	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
//	{
//		if (pRoot1 == NULL || pRoot2 == NULL)
//			return false;
//
//		if (search(pRoot1, pRoot2))
//			return true;
//
//		if (HasSubtree(pRoot1->left, pRoot2))
//			return true;
//		else if (HasSubtree(pRoot1->right, pRoot2))
//			return true;
//
//		return false;
//	}
//};
//
//int main() {
//	TreeNode* r1, * r2;
//
//	r1 = new TreeNode(8);
//	r1->left = new TreeNode(8);
//	r1->right = new TreeNode(7);
//	r1->left->left = new TreeNode(9);
//	r1->left->right = new TreeNode(2);
//	r1->left->right->left = new TreeNode(4);
//	r1->left->right->right = new TreeNode(7);
//
//	r2 = new TreeNode(8);
//	r2->left = new TreeNode(9);
//	r2->right = new TreeNode(2);
//
//	Solution s;
//
//	cout << s.HasSubtree(r1, r2);
//
//
//}
//
////{8,8,7,9,2,#,#,#,#,4,7},{8,9,2}