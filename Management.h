#include<string>
#include<iostream>
#include<algorithm>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;

//������Ա��
class Person {
private:
	int m_Age;
	int m_Number;
	int m_Sex;
	string m_Name;

public:
	void setInformation(int, int, int, string);

	void setAge(int);
	void setNumber(int);
	void setSex(int);
	void setName(string);

	int getAge();
	int getNumber();
	int getSex();
	string getName();

	string getInformation();

	Person() {
		//cout << "Person���캯��" << endl;
	}
	~Person() {
		//cout << "Person��������" << endl;
	}
};

//�����ʦ��
class Teacher :virtual private Person {
private:
	string m_Department;
	string m_Personel;
	int m_Pay;
public:
	void setInformation(int, int, int, string, string, string);

	void setPay(int);
	void setDepartment(string);
	void setPersonel(string);

	int getPay();
	string getDepartment();
	string getPersonel();

	string getInformation();
	string getInformation(int);

	Teacher() {
		//cout << "Teacher���캯��" << endl;
	}
	~Teacher() {
		//cout << "Teacher��������" << endl;
	}
};

//���������
class Professor :private Teacher {
public:
	virtual void setInformation(int, int, int, string, string, string);
	virtual string getInformation();

	//���캯��
	Professor() {
	}
	~Professor() {
	}
};

//����Ů������
class FemaleProfessor :private Professor {
public:
	void setInformation(int, int, int, string, string, string);
	string getInformation();
	//���캯��
	FemaleProfessor() {
	}
	~FemaleProfessor() {
	}
};

//�����н�����
class MaleProfessor :private Professor {
public:
	void setInformation(int, int, int, string, string, string);
	string getInformation();
	//���캯��
	MaleProfessor() {
	}
	~MaleProfessor() {
	}
};

//����ѧ����
class Student :private Person {
private:
	string m_ClassNo;
public:
	void setInformation(int, int, int, string, string);
	void setClassNo(string);

	string getClassNo();
	string getInformation();

	Student() {
		//cout << "Student���캯��" << endl;
	}
	~Student() {
		//cout << "Student��������" << endl;
	}
};

//�����о�����
class Graduate : virtual private Student {
public:
	string m_Subject;
	string m_Tutor;
public:
	void setInformation(int, int, int, string, string, string, string);
	void setSubject(string);
	void setTutor(string);

	string getSubject();
	string getTutor();
	string getInformation();

	Graduate() {
		//cout << "Graduate���캯��" << endl;
	}
	~Graduate() {
		//cout << "Graduate��������" << endl;
	}
};

//����������
class TeacherAssistant :private Graduate, private Teacher {
private:
	string m_RA;
public:
	void setInformation(int, int, int, string, string, string, string, string, string, string);
	void setRA(string);

	string getRA();
	string getInformation();

	TeacherAssistant() {
		//cout << "TeacherAssistant���캯��" << endl;
	}
	~TeacherAssistant() {
		//cout << "TeacherAssistant��������" << endl;
	}
};

//�ļ�������
class FileManagement {
public:
	//�½��ļ�
	void createFile();
	//д���ļ�
	void writeFile();
	//��ȡ�ļ�
	void readFile();
	//�����ļ�
	//����ѧ����Ϣ
	void saveFile(Student& s);
	//�����ʦ��Ϣ
	void saveFile(Teacher& t);
	//������0������Ϣ
	void saveFile(MaleProfessor& mp);
	//����Ů������Ϣ
	void saveFile(FemaleProfessor& fp);
	//�����о�����Ϣ
	void saveFile(Graduate& g);
	//����������Ϣ
	void saveFile(TeacherAssistant& ta);

	//
	//ɾ���ļ�
	void deleteFile();
};

//���������
class Management {
public:
	int showMenu();
	int addPerson();
	int showPerson();
	void modifyPerson();
	int searchPerson();
	void startSystem();
};