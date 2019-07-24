//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//
//class Solution {
//public:
//
//	//�ҵķ���
//	//��tempΪѭ�����������������б����껹û�˳��ͷ���ʧ�ܣ������˳��ǳɹ���
//	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
//		//��������
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
//			//����֦if-else�����ñ�֤����ʱֱ�����ȲŲ��룬�������б����껹��ѭ������ʧ��
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
//	//����2
//	//��������б�������ʱջ���Ȼ�Ϊ�գ����룻���򵯳������������б��������򷵻�ʧ�ܡ�
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
//		//�Ľ������˳�ѭ����Ȼ�ǳɹ���
//		return true;
//	}
//
//	//����3
//	//stack����vector
//	//ѹ���������У�һ����ʱջջ����������е�ǰָ����ͬ�͵�����ֱ����������ȫ�����롣�����ʱջ�գ�֤��ȫ���������ɹ�������ʧ�ܡ�
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