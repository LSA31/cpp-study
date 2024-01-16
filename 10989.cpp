//#include <iostream>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n;
//	int count[10001] = {};
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		int t;
//		cin >> t;
//
//		count[t]++;
//	}
//	int k = 0;
//	while (k <= 10000)
//	{
//		if (count[k] != 0)
//		{
//			cout << k << '\n';
//			count[k]--;
//		}
//		else
//			k++;
//	}
//}