#include<iostream>
#include<string>
using namespace std;

void main()
{
	string s = "liu,long,fei!!!";

	for (auto &c : s)      //必须使用引用形式才能更改值
		toupper(c);
	cout << s << endl;
}