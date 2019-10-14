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
//					swap(numbers[small], numbers[index]);
//			}
//		}
//
//		small++;
//		swap(numbers[small], numbers[end]);
//
//		return small;
//	}
//
//	vector<int> GetLeastNumbers_Solution(vector<int> input, int k)
//	{
//		vector<int> res = {};
//
//		if (input.size() >= k)
//		{
//			if (input.size() > k) {
//				int temp = partition(input, 0, input.size() - 1);
//				while (temp != k)
//				{
//					if (temp > k)
//						temp = partition(input, 0, temp - 1);
//					else
//						temp = partition(input, temp + 1, input.size() - 1);
//				}
//			}
//
//			for (int i = 0; i < k; i++)
//				res.push_back(input[i]);
//		}
//
//		return res;
//	}
//};
//
//int main()
//{
//	vector<int> input = { 1, 7, 3 };
//
//	Solution s;
//	vector<int> res = s.GetLeastNumbers_Solution(input, 3);
//
//	for (int i = 0; i < res.size(); i++)
//		cout << res[i] << " ";
//}