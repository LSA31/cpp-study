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
//	int n;
//	cin >> n;
//
//	vector<int> vect(n, 0);
//	for (int i = 0; i < n; i++)
//		cin >> vect[i];
//
//	for (int i = 1; i < n; i++)
//	{
//		int index = i; 
//		int value = vect[i];
//		for (int j = i - 1; j >= 0; j--)
//		{
//			if (vect[j] < vect[i])
//			{
//				index = j + 1; // ���� ������ ���� ���̸� �� ������ ����
//				break;
//			}
//			if (j == 0) // ���� ������ ���� ���� ������(= ���� ���� ���� �ּڰ�) �� ������ ����
//				index = 0;
//		}
//		for (int j = i; j > index; j--)
//			vect[j] = vect[j - 1];
//
//		vect[index] = value;
//	}
//	for (int i = 1; i < n; i++) // �� �迭 �����
//		vect[i] += vect[i - 1];
//
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//		sum += vect[i];
//
//	cout << sum;
//}