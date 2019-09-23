//#include<iostream>
//
//using namespace std;
//
//
//struct RandomListNode {
//	int label;
//	struct RandomListNode* next, * random;
//	RandomListNode(int x) :
//		label(x), next(NULL), random(NULL) {
//	}
//};
//
//void show(RandomListNode* pHead) {
//
//	RandomListNode* op = pHead;
//
//	while (op) {
//		cout << op->label;
//		if (op->random)
//			cout << " random:" << op->random->label;
//		cout << endl;
//		op = op->next;
//	}
//}
//
//class Solution {
//public:
//	RandomListNode* Clone(RandomListNode* pHead) {
//
//		if (pHead) {
//			Copy(pHead);
//			show(pHead);
//			Op(pHead);
//			show(pHead);
//			return Get(pHead);
//		}
//
//		return NULL;
//	}
//
//	RandomListNode* Copy(RandomListNode* pHead) {
//
//		RandomListNode* op = pHead;
//
//		while (op) {
//			RandomListNode* p = op->next;
//			op->next = new RandomListNode(op->label);
//			op->next->next = p;
//			op = p;
//		}
//
//		return pHead;
//	}
//
//	RandomListNode* Op(RandomListNode* pHead) {
//
//		RandomListNode* op = pHead;
//
//		while (op) {
//
//			if (op->random)
//				op->next->random = op->random->next;
//
//			op = op->next->next;
//		}
//
//		return pHead;
//	}
//
//	RandomListNode* Get(RandomListNode* pHead) {
//
//		RandomListNode* op = pHead;
//		RandomListNode* res, * p;
//		res = op->next;
//		p = res;
//
//		while (op) {
//
//			p = op->next;
//			p = p->next;
//
//			op->next = op->next->next;
//			op = op->next;
//		}
//
//		return res;
//	}
//
//	RandomListNode* Clone1(RandomListNode* pHead) {
//
//		if (!pHead) return NULL;
//
//		RandomListNode* op = pHead;
//		while (op) {
//			RandomListNode* p = op->next;
//			op->next = new RandomListNode(op->label);
//			op->next->next = p;
//			op = p;
//		}
//
//		op = pHead;
//		while (op) {
//
//			if (op->random)
//				op->next->random = op->random->next;
//
//			op = op->next->next;
//		}
//		
//		op = pHead;
//		RandomListNode* res, * p;
//		res = op->next;
//		/*p = res;*/
//
//		while (op) {
//
//			p = op->next;
//			p = p->next;
//
//			op->next = op->next->next;
//			op = op->next;
//		}
//
//		return res;
//
//	}
//
//	RandomListNode* Clone2(RandomListNode* pHead)
//	{
//		if (!pHead) return NULL;
//		RandomListNode* currNode = pHead;
//		while (currNode) {
//			RandomListNode* node = new RandomListNode(currNode->label);
//			node->next = currNode->next;
//			currNode->next = node;
//			currNode = node->next;
//		}
//		currNode = pHead;
//		while (currNode) {
//			RandomListNode* node = currNode->next;
//			if (currNode->random) {
//				node->random = currNode->random->next;
//			}
//			currNode = node->next;
//		}
//		//²ð·Ö 
//		RandomListNode* pCloneHead = pHead->next;
//		RandomListNode* tmp;
//		currNode = pHead;
//		while (currNode->next) {
//			tmp = currNode->next;
//			currNode->next = tmp->next;
//			currNode = tmp;
//		}
//		return pCloneHead;
//	}
//
//
//};
//
//
//
//int main() {
//	RandomListNode* pHead = new RandomListNode(1);
//	pHead->next = new RandomListNode(2);
//	pHead->next->next = new RandomListNode(3);
//	pHead->next->next->next = new RandomListNode(4);
//	pHead->next->next->next->next = new RandomListNode(5);
//
//	pHead->random = pHead->next->next;
//	pHead->next->random = pHead->next->next->next->next;
//	pHead->next->next->random = NULL;
//	pHead->next->next->next->random = pHead->next;
//	pHead->next->next->next->next->random = NULL;
//
//	RandomListNode* pHead2 = NULL;
//
//	show(pHead);
//
//	Solution s;
//	show(s.Clone1(pHead));
//}