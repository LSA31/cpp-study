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
//	vector<long> vect(n + 1, 0);
//	vector<long> remainder(m, 0);
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> vect[i];
//
//		vect[i] += vect[i - 1];
//	} // �� �迭 ���ϱ�
//	long sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		vect[i] %= m;
//
//		remainder[vect[i]]++; // ������ �� ����, ���� ����
//		if (vect[i] == 0)  // �������� 0�̸� sum++
//			sum++;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		if (remainder[i] > 1) // ���� ������ ������ ���� 2�� �̻��� ���
//			sum += (remainder[i] * (remainder[i] - 1) / 2);
//	} // �������� ���� �ε��� �� 2���� �̴� ����� ���� sum�� ������
//	cout << sum;
//}