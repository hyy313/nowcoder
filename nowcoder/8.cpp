#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {

		if (rotateArray.size() == 0)
			return 0;

		int l = 0;
		int r = rotateArray.size() - 1;
		int mid = (l + r) / 2;

		while (l + 1 != r) {
			if (rotateArray[mid] >= rotateArray[l])
				l = mid;
			else if (rotateArray[mid] <= rotateArray[r])
				r = mid;

			mid = (l + r) / 2;
		}

		return rotateArray[r];

	}
};

int main() {

	Solution s;

	vector<int> v = { 1,0,1,1,1,1,1,1,1 };

	cout << s.minNumberInRotateArray(v) << endl;

}