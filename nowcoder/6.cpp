#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
		
		TreeNode* temp = NULL;
		vector<int> left = {};
		vector<int> left_pre = {};
		vector<int> right = {};
		vector<int> right_pre = {};

		int tag = false;

		if (pre.size() == 0 || vin.size() == 0)
			return temp;

		//����ǰ�������ҵ����ڵ�
		temp = new TreeNode(pre[0]);//�������ڵ�

		//���ݸ��ڵ�,�������������ҵ�����������
		for (int i = 0; i < vin.size(); i++) {
			if (vin[i] == pre[0]) {
				tag = true;
			}
			else if(!tag) {
				left.push_back(vin[i]);
				left_pre.push_back(pre[i + 1]);
			}
			else if (tag) {
				right.push_back(vin[i]);
				right_pre.push_back(pre[i]);
			}
		}

		temp->left = reConstructBinaryTree(left_pre,left);//����������

		temp->right = reConstructBinaryTree(right_pre,right);//����������

		return temp;		
	}
};