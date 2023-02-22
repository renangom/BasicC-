#include <iostream>
#include "separatefile.h"
using namespace std;

int main()
{
    GradeBook gradebook1("CS101 Introduction to C++ Programming");
    cout << "gradebook1 created for course: " << gradebook1.getCourseName() << endl;
}