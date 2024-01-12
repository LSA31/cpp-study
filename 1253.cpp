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
//
//	cin >> n;
//
//	vector<int> vect(n, 0);
//	for (int i = 0; i < n; i++)
//		cin >> vect[i];
//
//	sort(vect.begin(), vect.end());
//
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int find = vect[i];
//		int start = 0, end = n - 1;
//
//		while (start < end)
//		{
//			if (vect[start] + vect[end] == find) // 합이 find(찾는 수)일 때
//			{
//				if (start != i && end != i) // 투 포인터가 같은 수가 아닐 때
//				{
//					count++;
//					break;
//				}
//				else if (end == i) // 다른 수를 사용해도 find와 같은 지 확인하기 위함
//					end--;
//				else if (start == i)
//					start++;
//			}
//			else if (vect[start] + vect[end] < find)
//				start++;
//			else
//				end--;
//		}
//	}
//	cout << count;
//}