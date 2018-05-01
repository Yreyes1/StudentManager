#include "student.h"
#include <string>
using namespace std;

void student::setName(string first, string last)
{
    m_first = first;
    m_last = last;
}

string student::fullName()
{
    string name = m_first;
    name.append(" ");
    name.append(m_last);
    return name;
}
