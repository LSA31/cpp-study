//#include <iostream>
//#include <string>
//using namespace std;
//
//int checkarr[4]; // �Է¹��� 'ACGT'�� ����
//int myarr[4]; // ���� ���������� 'ACGT'�� ����
//int check = 0; // �� ���� ���ڿ� ���� ������ �����ϴ� �� Ȯ��
//
//void Add(char c)
//{
//	switch (c)
//	{
//	case 'A':
//		myarr[0]++;
//		if (myarr[0] == checkarr[0])
//			check++;
//		break;
//	case 'C':
//		myarr[1]++;
//		if (myarr[1] == checkarr[1])
//			check++;
//		break;
//	case 'G':
//		myarr[2]++;
//		if (myarr[2] == checkarr[2])
//			check++;
//		break;
//	case 'T':
//		myarr[3]++;
//		if (myarr[3] == checkarr[3])
//			check++;
//		break;
//	}
//}
//void Remove(char c)
//{
//	switch (c)
//	{
//	case 'A':
//		if (myarr[0] == checkarr[0])
//			check--;
//		myarr[0]--;
//		break;
//	case 'C':
//		if (myarr[1] == checkarr[1])
//			check--;
//		myarr[1]--;
//		break;
//	case 'G':
//		if (myarr[2] == checkarr[2])
//			check--;
//		myarr[2]--;
//		break;
//	case 'T':
//		if (myarr[3] == checkarr[3])
//			check--;
//		myarr[3]--;
//		break;
//	}
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, m;
//	string str;
//
//	cin >> n >> m >> str;
//	for (int i = 0; i < 4; i++)
//	{
//		cin >> checkarr[i];
//
//		if (checkarr[i] == 0)
//			check++;
//	} // ���� checkarr[i]==0�̸� �̹� �ش� ���ڿ� �κ��� �����ϴ� ��
//	for (int i = 0; i < m; i++)
//		Add(str[i]);
//
//	int ret = 0;
//	if (check == 4)
//		ret++;
//
//	for (int i = m; i < n; i++) // �����̵�������
//	{
//		int j = i - m;
//		Add(str[i]);
//		Remove(str[j]);
//
//		if (check == 4)
//			ret++;
//	}
//	cout << ret;
//}