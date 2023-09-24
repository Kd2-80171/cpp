
#include<iostream>
#include<string>
using namespace std;
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
int main()
{
    int choice;
    Student s1;
    do
    {
        printf("1.Default Details\n2.Print Details of student\n3.Accept Details of Students\n0.Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                    s1.initStudent();
                    s1.printStudentOnConsole();
                    break;
            case 2:
                    s1.printStudentOnConsole();
                    break;
            case 3:
                    s1.acceptStudentFromConsole();
                    break;
        }
    } while (choice!=0);
    return 0;    

}