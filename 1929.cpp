//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int a, b;
//	cin >> a >> b;
//	
//	vector<int> vect(b + 1);
//
//	for (int i = 2; i <= b; i++)
//	{
//		vect[i] = i;
//	}
//	for (int i = 2; i <= sqrt(b); i++) // �迭�� �����ٱ��� �ݺ�
//	{
//		if (vect[i] == 0)
//			continue;
//
//		for (int j = i + i; j <= b; j += i) // i�� ����� 0 (����)
//		{
//			vect[j] = 0;
//		}
//	}
//	for (int i = a; i <= b; i++)
//	{
//		if (vect[i] != 0)
//			cout << i << '\n';
//	}
//}
////�����佺�׳׽��� ü