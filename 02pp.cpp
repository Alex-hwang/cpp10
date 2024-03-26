#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
	// 写入数据到字符串流
	stringstream strout;
	strout << "你好世界！" << endl;

	// 从字符串流中读取数据
	string data = strout.str();
	cout << "读取到的数据：" << data << endl;

	// 将数据写入到二进制文件
	ofstream binaryFile("output.bin", ios::binary);
	binaryFile.write(data.c_str(), data.size());
	binaryFile.close();

	return 0;
}