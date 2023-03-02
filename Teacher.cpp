#include "Student.h"
#include "Teacher.h"


Teacher::Teacher(int ID, string name, string num) : m_teacherID(ID), m_teacherName(name), m_teacherPhone(num){}

Teacher::Teacher(){
};

Teacher::~Teacher(){}

void Teacher::displayProfile() {
	cout << "Teacher ID: " << m_teacherID << endl;
	cout << "Teacher Name: " << m_teacherName << endl;
	cout << "Teacher Phone#: " << m_teacherPhone << endl;
}

vector<string> Teacher::addTest() {
	cout << "Enter 0 to quit" << endl;
	string name;
	do {
		cout << "Enter Test name" << endl;
		cin >> name;
		if (name != "0") {
			test.push_back(name);
		} else {
			break;
		}
	}
	while(name != "0");	
	
	return test;
}

vector<string> Teacher::addAssignment() {
	cout << "Enter 0 to quit" << endl;
	string name;
	do {
		cout << "Enter assignment name" << endl;
		cin >> name;
		if (name != "0") {
			assignment.push_back(name);
		} else {
			break;
		}
	}
	while(name != "0");	
	
	return assignment;
}

void Teacher::displayAssignments() {
	for (auto& name : assignment) {
		cout << name << ", " << flush;
	}
}

void Teacher::displayTests() {
	for (auto& name : test) {
		cout << name << ", " << flush;
	}
}

void Teacher::gradeAssignment(Student &s) {
	vector<double> grade;
	string answer;
	double count = 0;
	for (auto name : s.assignDone) {
		if (name == 1){
			cout << m_teacherName << ", Please enter Grade for student assignment" << endl;
			cin >> answer;
			grade.push_back(stod(answer));
		}
	}
	for (auto &value : grade) {
		s.m_studentGrade += value;
		count++;
	}
	s.m_studentGrade  = s.m_studentGrade / count;
}

void Teacher::gradeTest(Student &s) {
	vector<double> grade;
	string answer;
	double count = 1;
	for (auto name : s.testDone) {
		if (name == 1){
			cout << m_teacherName << ", Please enter Grade for students test" << endl;
			cin >> answer;
			grade.push_back(stod(answer));
		}
	}
	for (auto &value : grade) {
		s.m_studentGrade += value;
		count++;
	}
	s.m_studentGrade  = s.m_studentGrade / count;
}
