//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//
//class Solution {
//public:
//
//	//我的方法
//	//以temp为循环条件，若输入序列遍历完还没退出就返回失败，正常退出是成功。
//	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
//		//错误输入
//		if (pushV.size() != popV.size() || !pushV.size())
//			return false;
//
//		stack<int> temp;
//
//		int tag1 = 0;
//		int tag2 = 0;
//		temp.push(pushV[tag1++]);
//
//		while (!temp.empty()) {
//			//三分枝if-else，正好保证弹出时直到不等才插入，输入序列遍历完还在循环返回失败
//			if (temp.top() == popV[tag2]) {
//				temp.pop();
//				tag2++;
//			}
//			else if (tag1 == pushV.size() )
//				return false;
//			else if (tag1 < pushV.size())
//				temp.push(pushV[tag1++]);
//		}
//
//
//		return true;
//
//	}
//
//	//方法2
//	//对输出序列遍历，临时栈不等或为空，插入；否则弹出；若输入序列遍历结束则返回失败。
//	bool IsPopOrder2(vector<int> pushV, vector<int> popV) {
//		stack<int> st;
//		int id = 0;
//		for (int i = 0; i < popV.size(); ++i) {
//			while (st.empty() || st.top() != popV[i]) {
//				st.push(pushV[id++]);
//				if (id > pushV.size()) {
//					return false;
//				}
//			}
//			st.pop();
//		}
//		/*if (st.empty())
//			return true;
//		else
//			return false;*/
//		//改进，能退出循环必然是成功！
//		return true;
//	}
//
//	//方法3
//	//stack换成vector
//	//压入输入序列，一旦临时栈栈顶与输出序列当前指向相同就弹出，直至输入序列全部插入。如果临时栈空，证明全部弹出，成功；否则，失败。
//	bool IsPopOrder3(vector<int> pushV, vector<int> popV) {
//		if (pushV.size() == 0) return false;
//		vector<int> stack;
//		for (int i = 0, j = 0; i < pushV.size();) {
//			stack.push_back(pushV[i++]);
//			while (j < popV.size() && stack.back() == popV[j]) {
//				stack.pop_back();
//				j++;
//			}
//		}
//		return stack.empty();
//	}
//};
//
//int main() {
//	vector<int> v = { 1,2,3,4,5 };
//	vector<int> o = { 1,2,3,4,5 };
//
//	Solution s;
//	cout << s.IsPopOrder(v, o) << endl;
//}