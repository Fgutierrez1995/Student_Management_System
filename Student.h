#ifndef STUDENT_H
#define STUDENT_H
#include "Teacher.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Student 
{
	private:
		int m_studentID{0};
		string m_phoneNum{""};
		string m_studentName{""};

	
	public:
		vector<bool> assignDone;
		vector<bool> testDone;
		double m_studentGrade{0};

		
	public:
		//constructor
		Student(int studentID, string name, string num);
		//default constructor
		Student();
		//deconstructor
		~Student();
		
		//display students private mem variables
		void displayStudent();
		//allows student to update m_studentName
		string updateName(string newName);
		//allows student to update m_phoneNum
		string updateNumber(string newNum);
		//pushes true or false to vector<bool> assignDone while iterating through teacher class assignments (vector<string> assignment)
		void assignmentComplete(const Teacher &t);
		//pushes true or false to vector<bool> testDone while iterating through teacher class test (vector<string> test)
		void testComplete(const Teacher &t);
		
		

};

#endif