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
//	int sum = 1, count = 1;
//	int start = 1, end = 1;
//
//	cin >> n;
//
//	while (end != n)
//	{
//		if (sum > n)
//		{
//			sum -= start;
//			start++;
//		}
//		else if (sum < n)
//		{
//			end++;
//			sum += end;
//		}
//		else if (sum == n)
//		{
//			end++;
//			sum += end;
//			count++;
//		}
//	}
//	cout << count;
//}