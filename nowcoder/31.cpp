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
//	//F��i������array[i]ΪĩβԪ�ص�������ĺ͵����ֵ���������Ԫ�ص����λ�ò���
//	//F��i�� = max��F��i - 1�� + array[i] �� array[i]��
//	//res������������ĺ͵����ֵ
//	//res = max��res��F��i����
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