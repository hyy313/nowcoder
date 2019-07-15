//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//
//
//struct ListNode {
//	int val;
//	struct ListNode* next;
//	ListNode(int x) :
//		val(x), next(NULL) {
//	}
//};
//
//class Solution {
//public:
//	vector<int> printListFromTailToHead(ListNode* head) {
//		stack<int> temp;
//		vector<int> res = {};
//
//		while (head) {
//			temp.push(head->val);
//			head = head->next;
//		}
//
//		while (!temp.empty()) {
//			res.push_back(temp.top());
//			temp.pop();
//		}
//
//		return res;
//	}
//};