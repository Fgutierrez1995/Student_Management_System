#include <iostream>
#include "Student.h"
#include "Teacher.h"
using namespace std;

int main() {
	
	//creating class objects
	Student student1(1, "Bob Ross", "9459991234");
	Student student2(2, "Vicky Snix", "9815551699");
	Teacher teacher(1, "Mrs. Smith", "9034568811");
	
	//displaying student and teacher profile
	student1.displayStudent();
	student2.displayStudent();
	teacher.displayProfile();
	
	//adding assignments and test for student
	teacher.addAssignment();
	teacher.addTest();
	
	//bool value asking if student completed test
	student1.assignmentComplete(teacher);
	student1.testComplete(teacher);
	student2.assignmentComplete(teacher);
	student2.testComplete(teacher);
	
	//grading student object assignments and grade
	teacher.gradeAssignment(student1);
	teacher.gradeAssignment(student2);
	teacher.gradeTest(student1);
	teacher.gradeTest(student2);
	
	//displaying student profile
	student1.displayStudent();
	student2.displayStudent();


	return 0;
}