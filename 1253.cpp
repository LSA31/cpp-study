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
//			if (vect[start] + vect[end] == find) // ���� find(ã�� ��)�� ��
//			{
//				if (start != i && end != i) // �� �����Ͱ� ���� ���� �ƴ� ��
//				{
//					count++;
//					break;
//				}
//				else if (end == i) // �ٸ� ���� ����ص� find�� ���� �� Ȯ���ϱ� ����
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