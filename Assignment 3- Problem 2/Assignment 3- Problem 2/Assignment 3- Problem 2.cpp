// Assignment 3- Problem 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;


class studentType

{
private:
	string firstName;
	string lastName;
	int studentID;
	char grade;

public:
	void setStudentInfo(string fName, string lName, int ID, char g)
	{
		firstName = fName;
		lastName = lName;
		studentID = ID;
		grade = g;
	}
	void setGrade(char g)
	{
		grade = g;
	}

	void printStudentInfo() const
	{
		cout << "Student Name: " << firstName << " " << lastName << endl;
		cout << "Student ID: " << studentID << endl;
		cout << "Grade: " << grade << endl;
	}
};

int main()
{
	studentType student1, student2;

	student1.setStudentInfo("Annika", "Koons", 1111, 'A');
	student2.setStudentInfo("Abby", "Branaman", 2222, 'A');

	cout << "Student 1 Information: " << endl;
	cout << "----------------------" << endl;
	student1.printStudentInfo();
	cout << endl << endl;;

	cout << "Student 2 Information: " << endl;
	cout << "----------------------" << endl;
	student2.printStudentInfo();
	cout << endl;
}