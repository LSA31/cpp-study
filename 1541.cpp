//#include <iostream>
//#include <vector>
//#include <string>
//#include <sstream>
//using namespace std;
//
//vector<string> split(string input, char ch) // 특정 문자열을 기준으로 잘라 벡터에 저장하는 함수
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
//	vector<string> vect = split(s, '+'); // '+' 를 기준으로 잘라 벡터에 저장
//
//	for (int i = 0; i < vect.size(); i++)
//		sum += stoi(vect[i]); // 벡터에 저장된 string을 int형으로 변경하여 sum에 더해줌
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
//	vector<string> vect = split(str, '-'); // '-' 를 기준으로 잘라 벡터에 저장
//
//	for (int i = 0; i < vect.size(); i++)
//	{
//		int sum = getSum(vect[i]); // 벡터에 저장된 값들의 총합
//
//		if (i == 0) // 제일 앞 데이터인 경우
//			ret += sum;
//		else
//			ret -= sum;
//	}
//	cout << ret;
//}