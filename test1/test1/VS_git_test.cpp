#include<iostream>
#include<string>
using namespace std;

void main()
{
	string s = "liu,long,fei!!!";

	for (auto &c : s)      //����ʹ��������ʽ���ܸ���ֵ
		c = toupper(c);
	cout << s << endl;
}