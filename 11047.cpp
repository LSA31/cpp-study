//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, sum;
//	cin >> n >> sum;
//
//	vector<int> vect(n, 0);
//	for (int i = 0; i < n; i++)
//		cin >> vect[i];
//
//	int cnt = 0;
//	for (int i = n - 1; i >= 0; i--) // 최솟값을 찾기 위해 큰 금액부터 반복
//	{
//		if (vect[i] <= sum)
//		{
//			cnt += (sum / vect[i]); // 사용된 동전 개수 갱신
//			sum %= vect[i]; // 남은 목표 금액
//		}
//	}
//	cout << cnt;
//}