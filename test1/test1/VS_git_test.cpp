#include<iostream>
#include<string>
using namespace std;

void main()
{
	string s = "liu,long,fei!!!";

	for (auto &c : s)      //����ʹ��������ʽ���ܸ���ֵ
		toupper(c);
	cout << s << endl;
}