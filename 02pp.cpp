#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
	// д�����ݵ��ַ�����
	stringstream strout;
	strout << "������磡" << endl;

	// ���ַ������ж�ȡ����
	string data = strout.str();
	cout << "��ȡ�������ݣ�" << data << endl;

	// ������д�뵽�������ļ�
	ofstream binaryFile("output.bin", ios::binary);
	binaryFile.write(data.c_str(), data.size());
	binaryFile.close();

	return 0;
}