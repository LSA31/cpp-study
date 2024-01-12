//#include <iostream>
//#include <deque>
//using namespace std;
//
//typedef pair<int, int> Node;
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
//	deque<Node> D;
//	for (int i = 0; i < n; i++)
//	{
//		int now;
//		cin >> now;
//
//		while (D.size() && D.back().first > now) // D에 있는 값들 중 now보다 큰 값들 모두 제거
//			D.pop_back();
//
//		D.push_back(Node(now, i));
//
//		if (D.front().second <= i - m) // 범위에서 벗어난 값 제거
//			D.pop_front();
//		
//		cout << D.front().first << ' '; // D에 맨 앞에 값이 최솟값임 (정렬돼있기 때문)
//	}
//}