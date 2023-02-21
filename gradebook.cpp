#include <iostream>

using namespace std;

class GradeBook
{
public:
    void displayMessage()
    {
        cout << "Welcome to the grade book!" << endl;
    }

    void sum(int number1, int number2)
    {
        cout << "The sum is : " << number1 + number2 << endl;
    }
};

int main()
{
    int number1, number2;

    GradeBook myGradeBook;
    myGradeBook.displayMessage();

    cout << "Enter two numbers to sum: " << endl;
    cin >> number1 >> number2;

    myGradeBook.sum(number1, number2);
}