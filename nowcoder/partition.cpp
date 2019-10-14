//#include <iostream>
//#include <ctime>
//
//class sort {
//	int RandomInRange(int start, int end)
//	{
//		srand(time(NULL));
//		return start + rand() % (end - start + 1);
//	}
//
//	void Swap(int* elem1, int* elem2)
//	{
//		int temp = *elem1;
//		*elem1 = *elem2;
//		*elem2 = temp;
//	}
//
//	int Partition(int data[], int length, int start, int end)
//	{
//		if (data == NULL || length < 0 || start < 0 || end > length)
//			throw new std::exception("Invalid Parameters");
//
//		int index = RandomInRange(start, end);
//		Swap(&data[index], &data[end]);
//
//		int small = start - 1;
//		for (index = start; index < end; index++)
//		{
//			if (data[index] < data[end])
//			{
//				small++;
//				if (small != index)
//					Swap(&data[small], &data[index]);
//			}
//		}
//
//		small++;
//		Swap(&data[small], &data[end]);
//
//		return small;
//	}
//};
