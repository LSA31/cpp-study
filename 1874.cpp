//#include <iostream>
//#include <vector>
//#include <stack>
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
//	vector<int> vect(n, 0);
//	for (int i = 0; i < n; i++)
//		cin >> vect[i];
//
//	vector<char> ret; // ��°�
//	stack<int> st; // ����
//	int temp = 1; // �ڿ���
//	bool cnt = true;
//	for (int i = 0; i < n; i++)
//	{
//		if (vect[i] >= temp)
//		{
//			while (vect[i] >= temp)
//			{
//				st.push(temp);
//				temp++;
//				ret.push_back('+');
//			}
//			st.pop();
//			ret.push_back('-');
//		}
//		else
//		{
//			int bye = st.top(); // ������ ���� ���� ��
//			st.pop();
//			
//			if (bye > vect[i])
//			{
//				cout << "NO";
//				cnt = false;
//				break;
//			}
//			else
//				ret.push_back('-');
//		}
//	}
//	if (cnt == true)
//	{
//		for (int i = 0; i < ret.size(); i++)
//			cout << ret[i] << '\n';
//	}
//}