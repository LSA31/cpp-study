//#include <iostream>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, m;
//	int arr[100001] = {}; // �迭�� ũ�⸦ 100000�� �ƴ� 100001�� ����
//
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) // �迭�� 1��° �ε������� �Է¹ޱ�
//	{
//		cin >> arr[i];
//		arr[i] += arr[i - 1]; // �� �迭�� �����ֱ�
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int start, end;
//		cin >> start >> end;
//
//		cout << arr[end] - arr[start - 1] << "\n";
//	}
//}