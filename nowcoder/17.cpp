//#include<iostream>
//using namespace std;
//
//struct ListNode {
//	int val;
//	struct ListNode* next;
//	ListNode(int x) :
//		val(x), next(NULL) {
//	}
//};
//
///*
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//			val(x), next(NULL) {
//	}
//};*/
//class Solution {
//public:
//	//µÝ¹é
//	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
//	{
//		if (!pHead1)
//			return pHead2;
//		if (!pHead2)
//			return pHead1;
//
//		ListNode* res;
//
//		if (pHead1->val >= pHead2->val) {
//			res = pHead2;
//			res->next = Merge(pHead1, pHead2->next);
//		}
//		else {
//			res = pHead1;
//			res->next = Merge(pHead1->next, pHead2);
//		}
//
//		return res;
//	}
//
//	//Ñ­»·
//	ListNode* Merge2(ListNode* pHead1, ListNode* pHead2)
//	{
//
//		ListNode* p = new ListNode(-1);
//		ListNode* res = p;
//
//		cout << p << p;
//
//		while (pHead1 || pHead2) {
//			if (pHead1 == NULL) {
//				p->next = pHead2;
//				break;
//			}
//			else if (pHead2 == NULL) {
//				p->next = pHead1;
//				break;
//			}
//			else {
//				if (pHead1->val >= pHead2->val) {
//					p->next = new ListNode(pHead2->val);
//					pHead2 = pHead2->next;
//				}
//				else {
//					p->next = new ListNode(pHead1->val);
//					pHead1 = pHead1->next;
//				}
//				p = p->next;
//			}
//		}
//
//		return res->next;
//	}
//};
//
//void printList(ListNode* p) {
//	while (p)
//	{
//		cout << p->val << "->";
//		p = p->next;
//	}
//	cout << "NULL" << endl;
//}
//
//int main() {
//
//	ListNode* res;
//	ListNode* p1, * p2;
//	//p1 = NULL;
//	p1 = new ListNode(2);
//	p2 = new ListNode(1);
//	p2->next = new ListNode(3);
//
//	cout << "p1:";
//	printList(p1);
//
//	cout << "p2:";
//	printList(p2);
//
//	Solution s;
//	res = s.Merge2(p1, p2);
//
//	cout << "res:";
//	printList(res);
//}