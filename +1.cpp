#include<iostream>
using namespace std;
void main() {
	double x = 123.456;//����˫���ȸ�����
	cout.width(10);//������Ϊ��������ÿո���
	cout.setf(ios::dec, ios::basefield);//�����ʽΪʮ����
	cout << x << endl;
	cout.setf(ios::left);//��������
	cout << x << endl;
	cout.width(15);//���ÿ��Ϊ��������ÿո���
	cout.setf(ios::right, ios::left);//�����ʽΪ�Ҷ���
	cout << x << endl;
	cout.setf(ios::showpos);//�������
	cout << x << endl;
	cout << -x << endl;
	cout.setf(ios::scientific);//�����ѧ������
	cout << x << endl;
}