//#include <iostream>
//#include <vector>
//#include <string>
//#include <sstream>
//using namespace std;
//
//vector<string> split(string input, char ch) // Ư�� ���ڿ��� �������� �߶� ���Ϳ� �����ϴ� �Լ�
//{
//	vector<string> result;
//	stringstream mystream(input);
//	string splitdata;
//
//	while (getline(mystream, splitdata, ch))
//		result.push_back(splitdata);
//
//	return result;
//}
//int getSum(string s)
//{
//	int sum = 0;
//	vector<string> vect = split(s, '+'); // '+' �� �������� �߶� ���Ϳ� ����
//
//	for (int i = 0; i < vect.size(); i++)
//		sum += stoi(vect[i]); // ���Ϳ� ����� string�� int������ �����Ͽ� sum�� ������
//
//	return sum;
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	string str;
//	cin >> str;
//
//	int ret = 0;
//	vector<string> vect = split(str, '-'); // '-' �� �������� �߶� ���Ϳ� ����
//
//	for (int i = 0; i < vect.size(); i++)
//	{
//		int sum = getSum(vect[i]); // ���Ϳ� ����� ������ ����
//
//		if (i == 0) // ���� �� �������� ���
//			ret += sum;
//		else
//			ret -= sum;
//	}
//	cout << ret;
//}