//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution
//{
//public:
//    int FindGreatestSumOfSubArray(vector<int> array)
//    {
//        if (array.size() > 0)
//        {
//            int sum = array[0];
//            int max = sum;
//            for (int i = 1; i < array.size(); i++)
//            {
//                if (sum < 0)
//                {
//                    sum = array[i];
//                    if (sum > max)
//                        max = sum;
//                }
//                else
//                {
//                    sum += array[i];
//                    if (sum > max)
//                        max = sum;
//                }
//            }
//            return max;
//        }
//        return -1;
//    }
//
//	//DP
//	//F（i）：以array[i]为末尾元素的子数组的和的最大值，子数组的元素的相对位置不变
//	//F（i） = max（F（i - 1） + array[i] ， array[i]）
//	//res：所有子数组的和的最大值
//	//res = max（res，F（i））
//    int FindGreatestSumOfSubArray2(vector<int> array)
//    {
//        if (array.size() > 0)
//        {
//            int cursum = array[0];
//            int res = cursum;
//            for (int i = 1; i < array.size(); i++)
//            {
//                cursum = max(cursum + array[i], array[i]);
//                res = max(res, cursum);
//            }
//            return res;
//        }
//        return -1;
//    }
//};
//
//int main()
//{
//    vector<int> a = {6, -3, -2, 7, -15, 1, 2, 2};
//    Solution s;
//    cout << s.FindGreatestSumOfSubArray2(a);
//}