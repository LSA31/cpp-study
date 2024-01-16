//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> vect;
//vector<int> temp;
//long result;
//
//void mergesort(int start, int end)
//{
//	if (end - start < 1)
//		return;
//
//	int mid = start + (end - start) / 2;
//
//	mergesort(start, mid);
//	mergesort(mid + 1, end);
//
//	for (int i = start; i <= end; i++)
//		temp[i] = vect[i];
//
//	int k = start;
//	int index1 = start;
//	int index2 = mid + 1;
//	while (index1 <= mid && index2 <= end)
//	{
//		if (temp[index1] > temp[index2])
//		{
//			vect[k] = temp[index2];
//			k++;
//			index2++;
//
//			result += index2 - k; // 뒤쪽 데이터가 작아 선택되는 경우 결괏값 업데이트
//		}
//		else
//		{
//			vect[k] = temp[index1];
//			k++;
//			index1++;
//		}
//	}
//	while (index1 <= mid)
//	{
//		vect[k] = temp[index1];
//		k++;
//		index1++;
//	}
//	while (index2 <= end)
//	{
//		vect[k] = temp[index2];
//		k++;
//		index2++;
//	}
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	vect = vector<int>(n + 1, 0);
//	temp = vector<int>(n + 1, 0);
//
//	for (int i = 1; i <= n; i++)
//		cin >> vect[i];
//
//	mergesort(1, n);
//
//	cout << result;
//}