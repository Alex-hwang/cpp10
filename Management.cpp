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
	cout << "Age: " << (m_Age == 1 ? "��" : "Ů") << "\t";
	cout << "Number: " << m_Number << "\t";
	info = "Name: ";
	info += m_Name;
	info += "\t";
	info += "Sex: ";
	info += (m_Sex == 1 ? "��" : "Ů");
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
	cout << "����������������������������������������������������������������������������������������" << endl;
	cout << "����������������������������������������������������������������������������������������" << endl;
	cout << "����������������������ӭʹ��ѧ����Ϣ����ϵͳ��������������������" << endl;
	cout << "����������������������������������������������������������������������������������������" << endl;
	cout << "��������������������    ����������ѡ��    ����������������������" << endl;
	cout << "��������������������  1.������Ϣ          ����������������������" << endl;
	cout << "��������������������  2.������Ϣ          ����������������������" << endl;
	cout << "��������������������  3.�޸���Ϣ          ����������������������" << endl;
	cout << "��������������������  4.ɾ����Ϣ          ����������������������" << endl;
	cout << "��������������������  5.��ʾ��Ϣ          ����������������������" << endl;
	cout << "��������������������  0.�˳�ϵͳ          ����������������������" << endl;
	cout << "����������������������������������������������������������������������������������������" << endl;
	cout << "����������������������������������������������������������������������������������������" << endl;
	int choice = 0;
	cin >> choice;
	return choice;
}

int Management::addPerson() {
	cout << "������������������Ҫ��ӵ���Ա���ͣ�������������" << endl;
	cout << "�������������������� 1.��ʦ ��������������������" << endl;
	cout << "�������������������� 2.���� ��������������������" << endl;
	cout << "�������������������� 3.ѧ�� ��������������������" << endl;
	cout << "�������������������� 4.�о��� ������������������" << endl;
	cout << "�������������������� 5.���� ��������������������" << endl;
	cout << "������������������ 0.�����ϼ� ������������������" << endl;
	cout << "������������������������������������������������" << endl;
	int choice = 0;
	cin >> choice;
	switch (choice) {
	case 1: {
		Teacher t;
		int age, num, sex;
		string name, dep, per;
		cout << "�������ʦ��������";
		cin >> name;
		cout << "�������ʦ�����䣺";
		cin >> age;
		cout << "�������ʦ�Ĺ��ţ�";
		cin >> num;
		cout << "�������ʦ���Ա�1.��	2.Ů����";
		cin >> sex;
		cout << "�������ʦ�Ĳ��ţ�";
		cin >> dep;
		cout << "�������ʦ��ְ�ƣ�";
		cin >> per;
		t.setInformation(age, num, sex, name, dep, per);
		FileManagement fm;
		fm.saveFile(t);
		break;
	}
	case 2: {
		int sex;
		cout << "1.�н���	2.Ů����" << endl;
		cin >> sex;
		while (true) {
			if (sex == 1) {
				MaleProfessor mp;
				int age, num;
				string name, dep, per;
				cout << "��������ڵ�������";
				cin >> name;
				cout << "��������ڵ����䣺";
				cin >> age;
				cout << "��������ڵĹ��ţ�";
				cin >> num;
				cout << "��������ڵĲ��ţ�";
				cin >> dep;
				cout << "��������ڵ�ְ�ƣ�";
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
				cout << "��������ڵ�������";
				cin >> name;
				cout << "��������ڵ����䣺";
				cin >> age;
				cout << "��������ڵĹ��ţ�";
				cin >> num;
				cout << "��������ڵĲ��ţ�";
				cin >> dep;
				cout << "��������ڵ�ְ�ƣ�";
				cin >> per;
				fp.setInformation(age, num, 2, name, dep, per);
				FileManagement fm;
				fm.saveFile(fp);
				break;
			}
			else {
				cout << "�������,���������룡" << endl;
				system("pause");
				system("cls");
			}
		}
	}
	case 3: {
		Student s;
		int age, num, sex;
		string name, classno;
		cout << "������ѧ����������";
		cin >> name;
		cout << "������ѧ�������䣺";
		cin >> age;
		cout << "������ѧ����ѧ�ţ�";
		cin >> num;
		cout << "������ѧ�����Ա�1.��	2.Ů����";
		cin >> sex;
		cout << "������ѧ���İ༶��";
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
		cout << "�������о�����������";
		cin >> name;
		cout << "�������о��������䣺";
		cin >> age;
		cout << "�������о�����ѧ�ţ�";
		cin >> num;
		cout << "�������о������Ա�1.��	2.Ů����";
		cin >> sex;
		cout << "�������о����İ༶��";
		cin >> classno;
		cout << "�������о�����רҵ��";
		cin >> sub;
		cout << "�������о����ĵ�ʦ��";
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
		cout << "���������̵�������";
		cin >> name;
		cout << "���������̵����䣺";
		cin >> age;
		cout << "���������̵�ѧ�ţ�";
		cin >> num;
		cout << "���������̵��Ա�1.��	2.Ů����";
		cin >> sex;
		cout << "���������̵İ༶��";
		cin >> classno;
		cout << "���������̵�רҵ��";
		cin >> sub;
		cout << "���������̵ĵ�ʦ��";
		cin >> tut;
		cout << "���������̵Ĳ��ţ�";
		cin >> dep;
		cout << "���������̵�ְ�ƣ�";
		cin >> per;
		cout << "���������̵ĵȼ���";
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
	cout << "������������������Ҫ���ҵ���Ա��Ϣ��������������" << endl;
	cout << "�������������������� 1.���� ��������������������" << endl;
	cout << "�������������������� 2.���� ��������������������" << endl;
	cout << "������������������������������������������������" << endl;
	int choice = 0;
	cin >> choice;
	switch (choice) {
	case 1: {
		string name;
		cout << "������Ҫ���ҵ�������";
		cin >> name;
		//���ļ���������Ϣ
		ifstream ifs("Person.txt", ios::out);//��ȡ�ļ����ļ��������򴴽�����ȡģʽΪֻ��
		//�ж��ļ��Ƿ����
		if (!ifs.is_open()) {
			cout << "�ļ�������" << endl;
			return 0;
		}
		//�ж��ļ��Ƿ�Ϊ��
		char ch;
		ifs >> ch;
		if (ch == EOF) {
			cout << "�ļ�Ϊ��" << endl;
			ifs.close();
			return 0;
		}
		//�ļ���Ϊ��
		ifs.putback(ch);//����ȡ���ַ��Ż�ȥ
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
		cout << "������Ҫ���ҵĹ��ţ�";
		cin >> num;
		//���ļ���������Ϣ
		ifstream ifs("Person.txt", ios::out);//��ȡ�ļ����ļ��������򴴽�����ȡģʽΪֻ��
		//�ж��ļ��Ƿ����
		if (!ifs.is_open()) {
			cout << "�ļ�������" << endl;
			return 0;
		}
		//�ж��ļ��Ƿ�Ϊ��
		char ch;
		ifs >> ch;
		if (ch == EOF) {
			cout << "�ļ�Ϊ��" << endl;
			ifs.close();
			return 0;
		}
		//�ļ���Ϊ��
		ifs.putback(ch);//����ȡ���ַ��Ż�ȥ
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
	cout << "������Ҫ�޸ĵĹ��ţ�";
	cin >> idToModify;
	cout << "�������µ�������";
	cin >> newName;

	ifstream ifs("Person.txt");
	string line;
	string fileContents;

	// ���д����ļ�
	while (getline(ifs, line)) {
		// �ҵ��������ŵ���
		if (line.find("Number: " + to_string(idToModify)) != string::npos) {
			// �ÿո�ָ�����Ϣ
			istringstream iss(line);
			vector<string> words;
			string word;
			while (iss >> word) {
				words.push_back(word);
			}
			// ��������
			if (words.size() >= 2) {
				words[1] = newName;
			}
			// ���¹�������Ϣ
			line = "";
			for (const auto& w : words) {
				line += (w + " ");
			}
			// ȥ����β�Ŀո�
			line = line.substr(0, line.size() - 1);
			// ��ӵ��ļ�����
			fileContents += line + "\n";
		}
		else {
			fileContents += line + "\n";
		}
	}
	ifs.close();

	// ���޸ĺ������д�ص��ļ�
	ofstream ofs("Person.txt");
	ofs << fileContents;
	ofs.close();
}

int Management::showPerson() {
	//���ļ�����ʾ��Ϣ
	ifstream ifs("Person.txt", ios::out);//��ȡ�ļ����ļ��������򴴽�����ȡģʽΪֻ��
	//�ж��ļ��Ƿ����
	if (!ifs.is_open()) {
		cout << "�ļ�������" << endl;
		return 0;
	}
	//�ж��ļ��Ƿ�Ϊ��
	char ch;
	ifs >> ch;
	if (ch == EOF) {
		cout << "�ļ�Ϊ��" << endl;
		ifs.close();
		return 0;
	}
	//�ļ���Ϊ��
	ifs.putback(ch);//����ȡ���ַ��Ż�ȥ
	string info;
	while (getline(ifs, info)) {
		cout << info << endl;
	}
	ifs.close();
	return 1;
}

void FileManagement::createFile() {
	ofstream ofs;
	ofs.open("Person.txt", ios::in);//���ļ����ļ��������򴴽���д��ģʽΪֻд
	ofs.close();
}

void FileManagement::readFile() {
	ifstream ifs("Person.txt", ios::out);//��ȡ�ļ����ļ��������򴴽�����ȡģʽΪֻ��
	//�ж��ļ��Ƿ����
	if (!ifs.is_open()) {
		cout << "�ļ�������" << endl;
		return;
	}
	//�ж��ļ��Ƿ�Ϊ��
	char ch;
	ifs >> ch;
	if (ch == EOF) {
		cout << "�ļ�Ϊ��" << endl;
		ifs.close();
		return;
	}
	//�ļ���Ϊ��
	ifs.putback(ch);//����ȡ���ַ��Ż�ȥ
}

void FileManagement::writeFile() {
	ofstream ofs("Person.txt", ios::app);//д���ļ����ļ��������򴴽���д��ģʽΪ׷��
	ofs.close();
}

void FileManagement::deleteFile() {
	if (remove("Person.txt") == 0) {
		cout << "�ļ�ɾ���ɹ�" << endl;
	}
	else {
		cout << "�ļ�ɾ��ʧ��" << endl;
	}
}

void FileManagement::saveFile(Student& s) {
	ofstream ofs("Person.txt", ios::app);//д���ļ����ļ��������򴴽���д��ģʽΪ׷��
	ofs << s.getInformation() << endl;
}

void FileManagement::saveFile(Teacher& t) {
	ofstream ofs("Person.txt", ios::app);//д���ļ����ļ��������򴴽���д��ģʽΪ׷��
	ofs << t.getInformation() << endl;
}

void FileManagement::saveFile(MaleProfessor& mp) {
	ofstream ofs("Person.txt", ios::app);//д���ļ����ļ��������򴴽���д��ģʽΪ׷��
	ofs << mp.getInformation() << endl;
}

void FileManagement::saveFile(FemaleProfessor& fp) {
	ofstream ofs("Person.txt", ios::app);//д���ļ����ļ��������򴴽���д��ģʽΪ׷��
	ofs << fp.getInformation() << endl;
}

void FileManagement::saveFile(Graduate& g) {
	ofstream ofs("Person.txt", ios::app);//д���ļ����ļ��������򴴽���д��ģʽΪ׷��
	ofs << g.getInformation() << endl;
}

void FileManagement::saveFile(TeacherAssistant& ta) {
	ofstream ofs("Person.txt", ios::app);//д���ļ����ļ��������򴴽���д��ģʽΪ׷��
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
			cout << "��ӭ�´�ʹ�ã��ټ���" << endl;
			return;
		}
		default: {
			system("cls");
			cout << "�����������������" << endl;
			break;
		}
		}
	}
}