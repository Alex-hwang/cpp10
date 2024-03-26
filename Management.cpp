#include"Management.h"
void Person::setInformation(int age, int num, int sex, string name) {
	m_Age = age;
	m_Number = num;
	m_Sex = sex;
	m_Name = name;
}

void Person::setAge(int age) {
	m_Age = age;
}

void Person::setNumber(int num) {
	m_Number = num;
}

void Person::setSex(int sex) {
	m_Sex = sex;
}

void Person::setName(string name) {
	m_Name = name;
}

int Person::getAge() {
	return m_Age;
}

int Person::getNumber() {
	return m_Number;
}

int Person::getSex() {
	return m_Sex;
}

string Person::getName() {
	return m_Name;
}

string Person::getInformation() {
	string info;
	cout << "Name: " << m_Name << "\t";
	cout << "Sex: " << m_Sex << "\t";
	cout << "Age: " << (m_Age == 1 ? "男" : "女") << "\t";
	cout << "Number: " << m_Number << "\t";
	info = "Name: ";
	info += m_Name;
	info += "\t";
	info += "Sex: ";
	info += (m_Sex == 1 ? "男" : "女");
	info += "\t";
	info += "Age: ";
	info += to_string(m_Age);
	info += "\t";
	info += "Number: ";
	info += to_string(m_Number);
	info += "\t";
	return info;
}

void Teacher::setInformation(int age, int num, int sex, string name, string dep, string per) {
	Person::setInformation(age, num, sex, name);
	m_Department = dep;
	m_Personel = per;
}

void Teacher::setPay(int pay) {
	m_Pay = pay;
}

void Teacher::setDepartment(string dep) {
	m_Department = dep;
}

void Teacher::setPersonel(string per) {
	m_Personel = per;
}

int Teacher::getPay() {
	return m_Pay;
}

string Teacher::getDepartment() {
	return m_Department;
}

string Teacher::getPersonel() {
	return m_Personel;
}

string Teacher::getInformation() {
	string info;
	Person::getInformation();
	info = Person::getInformation();
	cout << "Department: " << m_Department << "\t";
	cout << "Personel: " << m_Personel << "\t";
	info += "Department: ";
	info += m_Department;
	info += "\t";
	info += "Personel: ";
	info += m_Personel;
	info += "\t";
	return info;
}

string Teacher::getInformation(int) {
	string info;
	cout << "Department: " << m_Department << "\t";
	cout << "Personel: " << m_Personel << "\t";
	info += "Department: ";
	info += m_Department;
	info += "\t";
	info += "Personel: ";
	info += m_Personel;
	info += "\t";
	return info;
}

void Professor::setInformation(int age, int num, int sex, string name, string dep, string per) {
	Teacher::setInformation(age, num, sex, name, dep, per);
}

string Professor::getInformation() {
	string info;
	info = Teacher::getInformation();
	return info;
}

void FemaleProfessor::setInformation(int age, int num, int sex, string name, string dep, string per) {
	Professor::setInformation(age, num, 2, name, dep, per);
}

string FemaleProfessor::getInformation() {
	string info;
	info = Professor::getInformation();
	return info;
}

void MaleProfessor::setInformation(int age, int num, int sex, string name, string dep, string per) {
	Professor::setInformation(age, num, 1, name, dep, per);
}

string MaleProfessor::getInformation() {
	string info;
	info = Professor::getInformation();
	return info;
}

void Student::setInformation(int age, int num, int sex, string name, string classno) {
	Person::setInformation(age, num, sex, name);
	m_ClassNo = classno;
}

void Student::setClassNo(string classno) {
	m_ClassNo = classno;
}

string Student::getClassNo() {
	return m_ClassNo;
}

string Student::getInformation() {
	string info;
	/*Person::getInformation();*/
	info = Person::getInformation();
	cout << "ClassNo: " << m_ClassNo << "\t";
	info += "ClassNo: ";
	info += m_ClassNo;
	info += "\t";
	return info;
}

void Graduate::setInformation(int age, int num, int sex, string name, string classno, string sub, string tut) {
	Student::setInformation(age, num, sex, name, classno);
	m_Subject = sub;
	m_Tutor = tut;
}

void Graduate::setSubject(string sub) {
	m_Subject = sub;
}

void Graduate::setTutor(string tut) {
	m_Tutor = tut;
}

string Graduate::getSubject() {
	return m_Subject;
}

string Graduate::getTutor() {
	return m_Tutor;
}

string Graduate::getInformation() {
	string info;
	/*Student::getInformation();*/
	info = Student::getInformation();
	cout << "Subject: " << m_Subject << "\t";
	cout << "Tutor: " << m_Tutor << "\t";
	info += "Subject: ";
	info += m_Subject;
	info += "\t";
	info += "Tutor: ";
	info += m_Tutor;
	info += "\t";
	return info;
}

void TeacherAssistant::setInformation(int age, int num, int sex, string name, string classno, string sub, string tut, string dep, string per, string mra) {
	Graduate::setInformation(age, num, sex, name, classno, sub, tut);
	Teacher::setInformation(age, num, sex, name, dep, per);
	m_RA = mra;
}

void TeacherAssistant::setRA(string mra) {
	m_RA = mra;
}

string TeacherAssistant::getRA() {
	return m_RA;
}

string TeacherAssistant::getInformation() {
	string info;
	/*Graduate::getInformation();*/
	info = Graduate::getInformation();
	Teacher::getInformation(1);
	info += Teacher::getInformation(1);
	cout << "RA: " << m_RA << "\t";
	info += "RA: ";
	info += m_RA;
	info += "\t";
	return info;
}

int Management::showMenu() {
	cout << "……………………………………………………………………………………………………………………" << endl;
	cout << "……………………………………………………………………………………………………………………" << endl;
	cout << "…………………………欢迎使用学生信息管理系统…………………………" << endl;
	cout << "……………………………………………………………………………………………………………………" << endl;
	cout << "…………………………    请输入您的选择    ……………………………" << endl;
	cout << "…………………………  1.输入信息          ……………………………" << endl;
	cout << "…………………………  2.查找信息          ……………………………" << endl;
	cout << "…………………………  3.修改信息          ……………………………" << endl;
	cout << "…………………………  4.删除信息          ……………………………" << endl;
	cout << "…………………………  5.显示信息          ……………………………" << endl;
	cout << "…………………………  0.退出系统          ……………………………" << endl;
	cout << "……………………………………………………………………………………………………………………" << endl;
	cout << "……………………………………………………………………………………………………………………" << endl;
	int choice = 0;
	cin >> choice;
	return choice;
}

int Management::addPerson() {
	cout << "………………请输入要添加的人员类型：………………" << endl;
	cout << "………………………… 1.教师 …………………………" << endl;
	cout << "………………………… 2.教授 …………………………" << endl;
	cout << "………………………… 3.学生 …………………………" << endl;
	cout << "………………………… 4.研究生 ………………………" << endl;
	cout << "………………………… 5.助教 …………………………" << endl;
	cout << "……………………… 0.返回上级 ………………………" << endl;
	cout << "………………………………………………………………" << endl;
	int choice = 0;
	cin >> choice;
	switch (choice) {
	case 1: {
		Teacher t;
		int age, num, sex;
		string name, dep, per;
		cout << "请输入教师的姓名：";
		cin >> name;
		cout << "请输入教师的年龄：";
		cin >> age;
		cout << "请输入教师的工号：";
		cin >> num;
		cout << "请输入教师的性别（1.男	2.女）：";
		cin >> sex;
		cout << "请输入教师的部门：";
		cin >> dep;
		cout << "请输入教师的职称：";
		cin >> per;
		t.setInformation(age, num, sex, name, dep, per);
		FileManagement fm;
		fm.saveFile(t);
		break;
	}
	case 2: {
		int sex;
		cout << "1.男教授	2.女教授" << endl;
		cin >> sex;
		while (true) {
			if (sex == 1) {
				MaleProfessor mp;
				int age, num;
				string name, dep, per;
				cout << "请输入教授的姓名：";
				cin >> name;
				cout << "请输入教授的年龄：";
				cin >> age;
				cout << "请输入教授的工号：";
				cin >> num;
				cout << "请输入教授的部门：";
				cin >> dep;
				cout << "请输入教授的职称：";
				cin >> per;
				mp.setInformation(age, num, 1, name, dep, per);
				FileManagement fm;
				fm.saveFile(mp);
				break;
			}
			else if (sex == 2) {
				FemaleProfessor fp;
				int age, num;
				string name, dep, per;
				cout << "请输入教授的姓名：";
				cin >> name;
				cout << "请输入教授的年龄：";
				cin >> age;
				cout << "请输入教授的工号：";
				cin >> num;
				cout << "请输入教授的部门：";
				cin >> dep;
				cout << "请输入教授的职称：";
				cin >> per;
				fp.setInformation(age, num, 2, name, dep, per);
				FileManagement fm;
				fm.saveFile(fp);
				break;
			}
			else {
				cout << "输入错误,请重新输入！" << endl;
				system("pause");
				system("cls");
			}
		}
	}
	case 3: {
		Student s;
		int age, num, sex;
		string name, classno;
		cout << "请输入学生的姓名：";
		cin >> name;
		cout << "请输入学生的年龄：";
		cin >> age;
		cout << "请输入学生的学号：";
		cin >> num;
		cout << "请输入学生的性别（1.男	2.女）：";
		cin >> sex;
		cout << "请输入学生的班级：";
		cin >> classno;
		s.setInformation(age, num, sex, name, classno);
		FileManagement fm;
		fm.saveFile(s);
		break;
	}
	case 4: {
		Graduate g;
		int age, num, sex;
		string name, classno, sub, tut;
		cout << "请输入研究生的姓名：";
		cin >> name;
		cout << "请输入研究生的年龄：";
		cin >> age;
		cout << "请输入研究生的学号：";
		cin >> num;
		cout << "请输入研究生的性别（1.男	2.女）：";
		cin >> sex;
		cout << "请输入研究生的班级：";
		cin >> classno;
		cout << "请输入研究生的专业：";
		cin >> sub;
		cout << "请输入研究生的导师：";
		cin >> tut;
		g.setInformation(age, num, sex, name, classno, sub, tut);
		FileManagement fm;
		fm.saveFile(g);
		break;
	}
	case 5: {
		TeacherAssistant ta;
		int age, num, sex;
		string name, classno, sub, tut, dep, per, mra;
		cout << "请输入助教的姓名：";
		cin >> name;
		cout << "请输入助教的年龄：";
		cin >> age;
		cout << "请输入助教的学号：";
		cin >> num;
		cout << "请输入助教的性别（1.男	2.女）：";
		cin >> sex;
		cout << "请输入助教的班级：";
		cin >> classno;
		cout << "请输入助教的专业：";
		cin >> sub;
		cout << "请输入助教的导师：";
		cin >> tut;
		cout << "请输入助教的部门：";
		cin >> dep;
		cout << "请输入助教的职称：";
		cin >> per;
		cout << "请输入助教的等级：";
		cin >> mra;
		ta.setInformation(age, num, sex, name, classno, sub, tut, dep, per, mra);
		FileManagement fm;
		fm.saveFile(ta);
		break;
	}
	case 0: {
		return 0;
	}
	}
	return choice;
}

int Management::searchPerson() {
	cout << "………………请输入要查找的人员信息：………………" << endl;
	cout << "………………………… 1.姓名 …………………………" << endl;
	cout << "………………………… 2.工号 …………………………" << endl;
	cout << "………………………………………………………………" << endl;
	int choice = 0;
	cin >> choice;
	switch (choice) {
	case 1: {
		string name;
		cout << "请输入要查找的姓名：";
		cin >> name;
		//打开文件，查找信息
		ifstream ifs("Person.txt", ios::out);//读取文件，文件不存在则创建，读取模式为只读
		//判断文件是否存在
		if (!ifs.is_open()) {
			cout << "文件不存在" << endl;
			return 0;
		}
		//判断文件是否为空
		char ch;
		ifs >> ch;
		if (ch == EOF) {
			cout << "文件为空" << endl;
			ifs.close();
			return 0;
		}
		//文件不为空
		ifs.putback(ch);//将读取的字符放回去
		string info;
		while (getline(ifs, info)) {
			if (info.find(name) != string::npos) {
				cout << info << endl;
			}
		}
		ifs.close();
		return 1;
	}
	case 2: {
		int num;
		cout << "请输入要查找的工号：";
		cin >> num;
		//打开文件，查找信息
		ifstream ifs("Person.txt", ios::out);//读取文件，文件不存在则创建，读取模式为只读
		//判断文件是否存在
		if (!ifs.is_open()) {
			cout << "文件不存在" << endl;
			return 0;
		}
		//判断文件是否为空
		char ch;
		ifs >> ch;
		if (ch == EOF) {
			cout << "文件为空" << endl;
			ifs.close();
			return 0;
		}
		//文件不为空
		ifs.putback(ch);//将读取的字符放回去
		string info;
		while (getline(ifs, info)) {
			if (info.find(to_string(num)) != string::npos) {
				cout << info << endl;
			}
		}
		ifs.close();
		return 1;
	}
	}
}

void Management::modifyPerson() {
	int idToModify;
	string newName;
	cout << "请输入要修改的工号：";
	cin >> idToModify;
	cout << "请输入新的姓名：";
	cin >> newName;

	ifstream ifs("Person.txt");
	string line;
	string fileContents;

	// 逐行处理文件
	while (getline(ifs, line)) {
		// 找到包含工号的行
		if (line.find("Number: " + to_string(idToModify)) != string::npos) {
			// 用空格分割行信息
			istringstream iss(line);
			vector<string> words;
			string word;
			while (iss >> word) {
				words.push_back(word);
			}
			// 更新姓名
			if (words.size() >= 2) {
				words[1] = newName;
			}
			// 重新构造行信息
			line = "";
			for (const auto& w : words) {
				line += (w + " ");
			}
			// 去除结尾的空格
			line = line.substr(0, line.size() - 1);
			// 添加到文件内容
			fileContents += line + "\n";
		}
		else {
			fileContents += line + "\n";
		}
	}
	ifs.close();

	// 将修改后的内容写回到文件
	ofstream ofs("Person.txt");
	ofs << fileContents;
	ofs.close();
}

int Management::showPerson() {
	//打开文件，显示信息
	ifstream ifs("Person.txt", ios::out);//读取文件，文件不存在则创建，读取模式为只读
	//判断文件是否存在
	if (!ifs.is_open()) {
		cout << "文件不存在" << endl;
		return 0;
	}
	//判断文件是否为空
	char ch;
	ifs >> ch;
	if (ch == EOF) {
		cout << "文件为空" << endl;
		ifs.close();
		return 0;
	}
	//文件不为空
	ifs.putback(ch);//将读取的字符放回去
	string info;
	while (getline(ifs, info)) {
		cout << info << endl;
	}
	ifs.close();
	return 1;
}

void FileManagement::createFile() {
	ofstream ofs;
	ofs.open("Person.txt", ios::in);//打开文件，文件不存在则创建，写入模式为只写
	ofs.close();
}

void FileManagement::readFile() {
	ifstream ifs("Person.txt", ios::out);//读取文件，文件不存在则创建，读取模式为只读
	//判断文件是否存在
	if (!ifs.is_open()) {
		cout << "文件不存在" << endl;
		return;
	}
	//判断文件是否为空
	char ch;
	ifs >> ch;
	if (ch == EOF) {
		cout << "文件为空" << endl;
		ifs.close();
		return;
	}
	//文件不为空
	ifs.putback(ch);//将读取的字符放回去
}

void FileManagement::writeFile() {
	ofstream ofs("Person.txt", ios::app);//写入文件，文件不存在则创建，写入模式为追加
	ofs.close();
}

void FileManagement::deleteFile() {
	if (remove("Person.txt") == 0) {
		cout << "文件删除成功" << endl;
	}
	else {
		cout << "文件删除失败" << endl;
	}
}

void FileManagement::saveFile(Student& s) {
	ofstream ofs("Person.txt", ios::app);//写入文件，文件不存在则创建，写入模式为追加
	ofs << s.getInformation() << endl;
}

void FileManagement::saveFile(Teacher& t) {
	ofstream ofs("Person.txt", ios::app);//写入文件，文件不存在则创建，写入模式为追加
	ofs << t.getInformation() << endl;
}

void FileManagement::saveFile(MaleProfessor& mp) {
	ofstream ofs("Person.txt", ios::app);//写入文件，文件不存在则创建，写入模式为追加
	ofs << mp.getInformation() << endl;
}

void FileManagement::saveFile(FemaleProfessor& fp) {
	ofstream ofs("Person.txt", ios::app);//写入文件，文件不存在则创建，写入模式为追加
	ofs << fp.getInformation() << endl;
}

void FileManagement::saveFile(Graduate& g) {
	ofstream ofs("Person.txt", ios::app);//写入文件，文件不存在则创建，写入模式为追加
	ofs << g.getInformation() << endl;
}

void FileManagement::saveFile(TeacherAssistant& ta) {
	ofstream ofs("Person.txt", ios::app);//写入文件，文件不存在则创建，写入模式为追加
	ofs << ta.getInformation() << endl;
}

void Management::startSystem() {
	FileManagement fm;
	fm.createFile();
	int choice = 0;
	while (true) {
		choice = showMenu();
		switch (choice) {
		case 1: {
			system("cls");
			addPerson();
			break;
		}
		case 2: {
			system("cls");
			searchPerson();
			break;
		}
		case 3: {
			system("cls");
			modifyPerson();
			break;
		}
		case 4: {
			system("cls");
			fm.deleteFile();
			break;
		}
		case 5: {
			system("cls");
			showPerson();
			break;
		}
		case 0: {
			system("cls");
			cout << "欢迎下次使用，再见！" << endl;
			return;
		}
		default: {
			system("cls");
			cout << "输入错误，请重新输入" << endl;
			break;
		}
		}
	}
}