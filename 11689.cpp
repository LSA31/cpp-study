//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	long n;
//	cin >> n;
//
//	long ret = n;
//	for (long i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0) // i�� ���μ����� Ȯ��
//		{
//			ret = ret - ret / i; // �ᱣ�� ������Ʈ
//
//			while (n % i == 0) // �ش� ���μ� �����
//				n /= i;
//		}
//	}
//	if (n > 1) // ���� ���μ� ������ �����ִ� ���
//		ret = ret - ret / n;
//
//	cout << ret;
//}