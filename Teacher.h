#ifndef TEACHER_H
#define TEACHER_H
#include "Student.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Student;

class Teacher {
	private:
		int m_teacherID{0};
		string m_teacherName{""};
		string m_teacherPhone{""};
	public:
		vector<string> assignment;
		vector<string> test;
	public:
		//constructor
		Teacher(int ID, string name, string num);
		//default constructor
		Teacher();
		//deconstructor
		~Teacher();
		
		//displays assignments in vector<string> assignment
		void displayAssignments();
		//displays test in vector<string> test
		void displayTests();
		//displays private mem variables
		void displayProfile();
		//adds assignments to vector<string> assignment
		vector<string> addAssignment();
		//adds test to vector<string> test
		vector<string> addTest();
		//grades student object assignments using vector<bool> assignDone in Student class
		void gradeAssignment(Student &s);
		//grades student object test using vector<bool> testDone in Student class
		void gradeTest(Student &s);
};

#endif