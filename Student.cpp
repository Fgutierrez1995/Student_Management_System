#include "Student.h"
#include "Teacher.h"

Student::Student(int studentID, string name, string num) : m_studentID(studentID), m_studentName(name), m_phoneNum(num){
}

Student::Student() {};


Student::~Student(){}



void Student::displayStudent() {
	cout << "Student ID: " << m_studentID << endl;
	cout << "Student Name: " << m_studentName << endl;
	cout << "Student Phone#: " << m_phoneNum << endl;
	cout << "Student Overall Grade: " << m_studentGrade << endl << endl << endl;
}

string Student::updateName(string newName) {
		m_studentName = newName;
		return m_studentName;
}

string Student::updateNumber(string newNum) {
	m_phoneNum = newNum;
	return m_phoneNum;
}

void Student::assignmentComplete(const Teacher &t) {
	string answer;
	for (auto name : t.assignment) {
		cout << m_studentName << " did you complete " << name << "? Y/N" << endl;
		cin >> answer;
		if (answer == "Y") {
			assignDone.push_back(true);
		} else {
			assignDone.push_back(false);
		}
	}
}

void Student::testComplete(const Teacher &t) {
	string answer;
	for (auto name : t.test) {
		cout << m_studentName << " did you complete " << name << "? Y/N" << endl;
		cin >> answer;
		if (answer == "Y") {
			testDone.push_back(true);
		} else {
			testDone.push_back(false);
		}
	}
}


