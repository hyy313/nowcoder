//#include<iostream>
//#include<stack>
//using namespace std;
//
//class Solution {
//public:
//
//	stack<int> sta;
//	stack<int> temp;
//
//	void push(int value) {
//		//һ��Ҫ���ж���û�У����ܻ�ȡtop
//		if (temp.empty() || temp.top() > value)
//			temp.push(value);
//		else
//			temp.push(temp.top());
//		sta.push(value);
//	}
//	void pop() {
//		if (!sta.empty()) {
//			sta.pop();
//			temp.pop();
//		}
//	}
//	int top() {
//		if (!sta.empty())
//			return sta.top();
//		return -1;
//	}
//	int min() {
//		if (!temp.empty())
//			return temp.top();
//		return -1;
//	}
//};