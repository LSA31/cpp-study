//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> vect;
//vector<int> temp;
//
//void mergesort(int start, int end)
//{
//	if (end - start < 1) // 그룹에 1개 미만의 값이 있을 때
//		return;
//
//	int mid = start + (end - start) / 2; // 중간점
//
//	mergesort(start, mid);
//	mergesort(mid + 1, end); 
//
//	for (int i = start; i <= end; i++) // 임시 배열에 값 저장
//		temp[i] = vect[i];
//
//	int k = start; // 정렬된 값 vect에 저장시 사용하는 인덱스 변수
//	int index1 = start;
//	int index2 = mid + 1;
//
//	while (index1 <= mid && index2 <= end) // 두 그룹 병합
//	{
//		if (temp[index1] > temp[index2])
//		{
//			vect[k] = temp[index2]; // 더 작은 값 저장(= 오름차순)
//			k++;
//			index2++;
//		}
//		else
//		{
//			vect[k] = temp[index1];
//			k++;
//			index1++;
//		}
//	}
//	while (index1 <= mid) // 남아있는 값들 정리
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
//	for (int i = 1; i <= n; i++)
//		cout << vect[i] << '\n';
//}