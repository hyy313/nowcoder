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
//
//class Solution {
//public:
//	ListNode* ReverseList(ListNode* pHead) {
//		
//		if (pHead == NULL)
//			return NULL;
//
//		ListNode* rev = pHead->next;
//		ListNode* p = pHead;
//		ListNode* n = NULL;
//		p->next = NULL;
//
//		while (rev) {
//			n = rev->next;
//			rev->next = p;
//			p = rev;
//			rev = n;
//		}
//
//		return p;
//	}
//};