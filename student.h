#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
using namespace std;

class student
{

        private:

                 string m_first;
                 string m_last;
        public: 

                void    setName(string , string);
                string  fullName();

};
#endif
