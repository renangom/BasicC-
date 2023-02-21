#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
public:
    void setCourseName(string name)
    {
        courseName = name;
    }

    string getCourseName()
    {
        return courseName;
    }

    void displayMessage()
    {
        cout << "Welcome to the grade book for \n " << getCourseName() << "!" << endl;
    }

private:
    string courseName;
};

int main()
{
    string nameOfCourse;
    GradeBook gradeBook;

    cout << "Initial course name is: " << gradeBook.getCourseName() << endl;

    cout << "\n Please, enter the course name: " << endl;
    getline(cin, nameOfCourse);
    gradeBook.setCourseName(nameOfCourse);

    cout << endl;

    gradeBook.displayMessage();
}