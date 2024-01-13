//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//struct compare {
//	bool operator()(int a, int b)
//	{
//		int A = abs(a);
//		int B = abs(b);
//
//		if (A == B)
//			return a > b;
//		else
//			return A > B;
//	}
//};
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	priority_queue<int, vector<int>, compare> Q; // 자료형, 구현체, 비교 함수명
//
//	for (int i = 0; i < n; i++)
//	{
//		int ret;
//		cin >> ret;
//
//		if (ret == 0)
//		{
//			if (Q.empty())
//				cout << "0\n";
//			else
//			{
//				cout << Q.top() << '\n';
//				Q.pop();
//			}
//		}
//		else
//			Q.push(ret);
//	}
//}