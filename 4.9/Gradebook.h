#include <iostream>
using namespace std;

class GradeBook
{
public:
    GradeBook(string);
    void setCourseName(string);
    string getCourseName();
    void displayMessage();
    void determineClassAvarage();

private:
    string courseName;
}