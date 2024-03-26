#include<iostream>
using namespace std;
void main() {
	double x = 123.456;//声明双精度浮点型
	cout.width(10);//输出宽度为，不足的用空格补齐
	cout.setf(ios::dec, ios::basefield);//输出格式为十进制
	cout << x << endl;
	cout.setf(ios::left);//输出左对齐
	cout << x << endl;
	cout.width(15);//设置宽度为，不足的用空格补齐
	cout.setf(ios::right, ios::left);//输出格式为右对齐
	cout << x << endl;
	cout.setf(ios::showpos);//输出正号
	cout << x << endl;
	cout << -x << endl;
	cout.setf(ios::scientific);//输出科学计数法
	cout << x << endl;
}