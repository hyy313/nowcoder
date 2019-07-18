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
//	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
//
//		ListNode* res = NULL;
//
//		if (k < 1)
//			return res;
//
//		ListNode* head = pListHead;
//		int len = 0;
//
//		while (head) {
//			len++;
//			head = head->next;
//		}
//
//		if (len < k)
//			return res;
//
//		head = pListHead;
//
//		for (int i = 1; i != len - k + 1; i++)
//			head = head->next;
//
//		res = head;
//
//		return res;
//
//	}
//};