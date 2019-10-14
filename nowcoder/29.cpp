//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution
//{
//public:
//	int partition(vector<int>& numbers, int start, int end)
//	{
//		int index = start;
//		swap(numbers[index], numbers[end]);
//
//		int small = start - 1;
//		for (index = start; index < end; index++)
//		{
//			if (numbers[index] < numbers[end])
//			{
//				small++;
//				if (small != index)
//					swap(numbers[index], numbers[small]);
//			}
//		}
//
//		small++;
//		swap(numbers[small], numbers[end]);
//
//		return small;
//	}
//
//	int MoreThanHalfNum_Solution(vector<int> numbers)
//	{
//		if (numbers.size() > 0)
//		{
//			int mid = numbers.size() >> 1;
//			int temp = partition(numbers, 0, numbers.size() - 1);
//
//			while (temp != mid)
//			{
//				if (temp > mid)
//					temp = partition(numbers, 0, temp - 1);
//				else
//					temp = partition(numbers, temp + 1, numbers.size() - 1);
//			}
//
//			int times = 0;
//			for (int i = 0; i < numbers.size(); i++) {
//				if (numbers[i] == numbers[mid])
//					times++;
//			}
//
//			if (times > mid)
//				return numbers[mid];
//		}
//		return 0;
//	}
//};
//
//int main() {
//	vector<int> t1 = {};
//	vector<int> t2 = { 1,2,3,2,2,3,2 };
//	vector<int> t3 = { 2,1,2 };
//
//	Solution s;
//	cout << s.MoreThanHalfNum_Solution(t1) << " " << s.MoreThanHalfNum_Solution(t2) << " " << s.MoreThanHalfNum_Solution(t3) << endl;
//
//}