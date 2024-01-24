//#include <iostream>
//#include <vector>
//using namespace std;
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
//	vector<int> vect(n, 0);
//	
//	int start = 0, end = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> vect[i];
//
//		if (start < vect[i]) // ���� �ε���: ���� �ִ�
//			start = vect[i];
//		end += vect[i]; // ���� �ε���: �����ð� ����
//	}
//	while (start <= end)
//	{
//		int mid = (start + end) / 2;
//		int sum = 0, count = 0; // �����ð� ��, ����� ��緹�� ����
//
//		for (int i = 0; i < n; i++)
//		{
//			if (sum + vect[i] > mid) // ���簪�� ������ �� �߰������� ũ�� ���ο� ��緹�̷� ��ü
//			{
//				count++;
//				sum = 0;
//			}
//			sum += vect[i]; 
//		}
//		if (sum != 0)
//			count++;
//		if (count > m)
//			start = mid + 1;
//		else
//			end = mid - 1;
//	}
//	cout << start;
//}