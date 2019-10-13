//#include <iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	vector<string> res = {};
//
//	vector<string> Permutation(string str) {
//		if (str != "") {
//			Permutation(str, 0);
//		}
//		sort(res.begin(), res.end());
//		res.erase(unique(res.begin(), res.end()), res.end());
//		return res;
//	}
//
//	void Permutation(string str, int tag) {
//		int n = str.length();
//
//		if (tag == n) {
//			res.push_back(str);
//			return;
//		}
//
//		for (int i = tag; i < n; i++) {
//			if (str[tag] != str[i]) {
//				char temp = str[tag];
//				str[tag] = str[i];
//				str[i] = temp;
//			}			
//			Permutation(str, tag + 1);
//		}
//	}
//};
//
//int main() {
//	Solution s;
//
//	string str = "aa";
//
//	vector<string> res = s.Permutation(str);
//
//	for (int i = 0; i < res.size(); i++) {
//		for (int j = 0; j < res[i].size(); j++)
//			cout << res[i][j];
//		cout << endl;
//	}
//}