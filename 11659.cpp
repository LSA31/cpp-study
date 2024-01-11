//#include <iostream>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, m;
//	int arr[100001] = {}; // 배열의 크기를 100000가 아닌 100001로 설정
//
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) // 배열의 1번째 인덱스부터 입력받기
//	{
//		cin >> arr[i];
//		arr[i] += arr[i - 1]; // 합 배열로 구해주기
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int start, end;
//		cin >> start >> end;
//
//		cout << arr[end] - arr[start - 1] << "\n";
//	}
//}