// Assignment 2- Problem 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip> //for set width
using namespace std;

//Assignment 2- Problem 2, Student test score
/*
Your program must contain at least the following functions:
A. A function to read the students' data into the array.
B. A function to assign the relevant grade to each student.
C. A function to find the highest test score.
D. A function to print the names of the students having the highest test score.
*/

 //define student structure
struct studentType
{
	string studentFName;
	string studentLName;
	int testScore;
	char grade;
};

//declare functions
void readData(studentType students[], int size);
void assignGrades(studentType students[], int size);
int findHighestScore(studentType students[], int size);
void printHighestScorers(studentType students[], int size, int highestScore);
void printAllStudents(studentType students[], int size); 

int main()
{
    //declare variables
	const int classSize = 5;
    studentType students[classSize]; //defining the function as an array of size 5

    readData(students, classSize);
    assignGrades(students, classSize);
    printAllStudents(students, classSize);

    int highestScore = findHighestScore(students, classSize);

    //display highest test scores
    cout << "Highest Test Score: " << highestScore << endl;
    cout << "Student(s) with the highest score:"<<endl;
    printHighestScorers(students, classSize, highestScore); //prints line???

    return 0;
}

// A. Read student data
//call on readData
void readData(studentType students[], int size)
{
//prompt user to enter data for 5 students
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter data for student " << i + 1 << endl;

        cout << "First Name: ";
        cin >> students[i].studentFName;

        cout << "Last Name: ";
        cin >> students[i].studentLName;

        cout << "Test Score (0-100): ";
        cin >> students[i].testScore;
    }
}

// B. Assign grades
//call on assignGrades
void assignGrades(studentType students[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (students[i].testScore >= 90)
            students[i].grade = 'A';
        else if (students[i].testScore >= 80)
            students[i].grade = 'B';
        else if (students[i].testScore >= 70)
            students[i].grade = 'C';
        else if (students[i].testScore >= 60)
            students[i].grade = 'D';
        else
            students[i].grade = 'F';
    }
}

// Print all students
void printAllStudents(studentType students[], int size)
{
    cout << "\nStudent List:\n\n";

    cout << left << setw(20) << "Name"
        << setw(10) << "Score"
        << setw(5) << "Grade" << endl;

    cout << "-------------------------------------\n";

    for (int i = 0; i < size; i++)
    {
        string fullName = students[i].studentLName + ", " + students[i].studentFName;

        cout << left << setw(20) << fullName
            << setw(10) << students[i].testScore
            << setw(5) << students[i].grade << endl;
    }
}

// C. Find highest score
int findHighestScore(studentType students[], int size)
{
    int highest = students[0].testScore;

    for (int i = 1; i < size; i++)
    {
        if (students[i].testScore > highest)
            highest = students[i].testScore;
    }

    return highest;
}

// D. Print students with highest score
void printHighestScorers(studentType students[], int size, int highestScore)
{
    for (int i = 0; i < size; i++)
    {
        if (students[i].testScore == highestScore)
        {
            cout << students[i].studentLName
                << ", "
                << students[i].studentFName
                << endl;
        }
    }
}
