#include <iostream>
#include "interface.h"
using namespace std;

int main()
{
    GradeBook gradebook1("CS101 Programming Testing");

    cout << "gradebook1 created for course " << gradebook1.getCourseName() << endl;
}