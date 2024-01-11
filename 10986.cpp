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
//	int n, m;
//	cin >> n >> m;
//
//	vector<long> vect(n + 1, 0);
//	vector<long> remainder(m, 0);
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> vect[i];
//
//		vect[i] += vect[i - 1];
//	} // 합 배열 구하기
//	long sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		vect[i] %= m;
//
//		remainder[vect[i]]++; // 나머지 값 종류, 개수 저장
//		if (vect[i] == 0)  // 나머지가 0이면 sum++
//			sum++;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		if (remainder[i] > 1) // 같은 종류의 나머지 값이 2개 이상인 경우
//			sum += (remainder[i] * (remainder[i] - 1) / 2);
//	} // 나머지가 같은 인덱스 중 2개를 뽑는 경우의 수를 sum에 더해줌
//	cout << sum;
//}