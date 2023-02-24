#include <iostream>
#include "./Gradebook.h"
using namespace std;

GradeBook::GradeBook(string name)
{
    setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
    if (name.length() <= 25)
        courseName = name;
    else
    {
        courseName = name.substr(0, 25);
        cout << "Name \"" << name << "\" exceeds maximum length (25). \n"
             << "Limiting courseName to first 25 characters. \n"
             << endl;
    }
}

string GradeBook::getCourseName()
{
    return courseName;
}

void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for \n"
         << getCourseName() << "!\n"
         << endl;
}
void GradeBook::determineClassAvarage()
{
    int total;
    int gradeCounter;
    int grade;
    int avarage;

    total = 0;
    gradeCounter = 1;

    while (gradeCounter <= 10)
    {
        /* code */
        cout << "Enter grade: ";
        cin >> grade;
        total += grade;
        gradeCounter++;
    }

    avarage = total / 10;

    cout << "\n Total of all 10 grades is " << total << endl;
    cout << "Class avarage is " << avarage << endl;
}