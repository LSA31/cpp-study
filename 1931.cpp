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
//	for (int i = 0; i < n; i++) // ���� �ð��� ���� �켱���� �ϱ� ���� second:���� �ð�/first:���� �ð�
//	{
//		cin >> vect[i].second;
//		cin >> vect[i].first;
//	}
//	sort(vect.begin(), vect.end());
//
//	int cnt = 0, end = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (vect[i].second >= end) // ���� ȸ�� ���� �ð��� �տ� ȸ�� ���� �ð� �̻��̸�
//		{
//			cnt++;
//			end = vect[i].first;
//		}
//	}
//	cout << cnt;
//}