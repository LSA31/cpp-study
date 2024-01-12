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
//		while (D.size() && D.back().first > now) // D�� �ִ� ���� �� now���� ū ���� ��� ����
//			D.pop_back();
//
//		D.push_back(Node(now, i));
//
//		if (D.front().second <= i - m) // �������� ��� �� ����
//			D.pop_front();
//		
//		cout << D.front().first << ' '; // D�� �� �տ� ���� �ּڰ��� (���ĵ��ֱ� ����)
//	}
//}