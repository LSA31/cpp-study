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
//	vector<vector<int>> vect(n + 1, vector<int>(n + 1, 0));
//	vector<vector<int>> sum(n + 1, vector<int>(n + 1, 0));
//
//	for (int y = 1; y <= n; y++)
//	{
//		for (int x = 1; x <= n; x++)
//		{
//			cin >> vect[y][x];
//
//			sum[y][x] = sum[y][x - 1] + sum[y - 1][x] - sum[y - 1][x - 1] + vect[y][x];
//		} // 합 벡터 구하기
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//
//		int ret = sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1];
//		cout << ret << "\n";
//	}
//}