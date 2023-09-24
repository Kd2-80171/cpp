#include <iostream>
using namespace std;
namespace Nstudent
{
 class Student
 {
   private:

    int rollno;
    string name;
    int marks;



     public:

      void initStudent()
            {
                this->rollno=0;
                this->name="";
                this->marks=0;
            }
            void acceptStudentFromConsole()
            {
                cout<<"Enter roll number of student:";
                cin>>this->rollno;
                cout<<"Enter name of student:";
                cin>>this->name;
                cout<<"Enter marks of student:";
                cin>>this->marks;
            }
            void printStudentOnConsole()
            {
                cout<<"Roll no  : "<<this->rollno<<"\nName of Student   :"<<this->name<<"\nMarks  :"<<this->marks<<endl;
            }
 };
}
using namespace Nstudent;
int main()
{
    Student s1;
    s1.initStudent();
    s1.printStudentOnConsole();
    s1.acceptStudentFromConsole();
    s1.printStudentOnConsole();
}