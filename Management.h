#include<string>
#include<iostream>
#include<algorithm>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;

//定义人员类
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
		//cout << "Person构造函数" << endl;
	}
	~Person() {
		//cout << "Person析构函数" << endl;
	}
};

//定义教师类
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
		//cout << "Teacher构造函数" << endl;
	}
	~Teacher() {
		//cout << "Teacher析构函数" << endl;
	}
};

//定义教授类
class Professor :private Teacher {
public:
	virtual void setInformation(int, int, int, string, string, string);
	virtual string getInformation();

	//构造函数
	Professor() {
	}
	~Professor() {
	}
};

//定义女教授类
class FemaleProfessor :private Professor {
public:
	void setInformation(int, int, int, string, string, string);
	string getInformation();
	//构造函数
	FemaleProfessor() {
	}
	~FemaleProfessor() {
	}
};

//定义男教授类
class MaleProfessor :private Professor {
public:
	void setInformation(int, int, int, string, string, string);
	string getInformation();
	//构造函数
	MaleProfessor() {
	}
	~MaleProfessor() {
	}
};

//定义学生类
class Student :private Person {
private:
	string m_ClassNo;
public:
	void setInformation(int, int, int, string, string);
	void setClassNo(string);

	string getClassNo();
	string getInformation();

	Student() {
		//cout << "Student构造函数" << endl;
	}
	~Student() {
		//cout << "Student析构函数" << endl;
	}
};

//定义研究生类
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
		//cout << "Graduate构造函数" << endl;
	}
	~Graduate() {
		//cout << "Graduate析构函数" << endl;
	}
};

//定义助教类
class TeacherAssistant :private Graduate, private Teacher {
private:
	string m_RA;
public:
	void setInformation(int, int, int, string, string, string, string, string, string, string);
	void setRA(string);

	string getRA();
	string getInformation();

	TeacherAssistant() {
		//cout << "TeacherAssistant构造函数" << endl;
	}
	~TeacherAssistant() {
		//cout << "TeacherAssistant析构函数" << endl;
	}
};

//文件管理类
class FileManagement {
public:
	//新建文件
	void createFile();
	//写入文件
	void writeFile();
	//读取文件
	void readFile();
	//保存文件
	//保存学生信息
	void saveFile(Student& s);
	//保存教师信息
	void saveFile(Teacher& t);
	//保存男0教授信息
	void saveFile(MaleProfessor& mp);
	//保存女教授信息
	void saveFile(FemaleProfessor& fp);
	//保存研究生信息
	void saveFile(Graduate& g);
	//保存助教信息
	void saveFile(TeacherAssistant& ta);

	//
	//删除文件
	void deleteFile();
};

//定义管理类
class Management {
public:
	int showMenu();
	int addPerson();
	int showPerson();
	void modifyPerson();
	int searchPerson();
	void startSystem();
};