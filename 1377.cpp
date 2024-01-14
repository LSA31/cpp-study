//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	vector<pair<int, int>> vect(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> vect[i].first;
//		vect[i].second = i;
//	}
//
//	sort(vect.begin(), vect.end());
//
//	int Max = 0;
//	for (int i = 0; i < n; i++)
//	{
//		vect[i].second -= i;
//
//		if (Max < vect[i].second)
//			Max = vect[i].second;
//	}
//	cout << Max + 1;
//}