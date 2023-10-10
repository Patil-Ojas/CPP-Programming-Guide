
#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;   //doesnt need to be intitialized, auto initialized to 0

    public:
        void setdata()
        {   
            cout<<"enter id of "<<count+1<<": "; 
            cin>>id;
            count ++;
        }
        void getdata()
        {
            cout<<"id of "<<count<<" is "<<id<<endl;
        }
        static void getcount()
        {
            cout<<"count is "<<count<<endl;
        }
};

int Employee:: count;

int main()
{
    Employee e1, e2;

    Employee::getcount();

    e1.setdata();
    e1.getdata();

    Employee::getcount();

    e2.setdata();
    e2.getdata();

    Employee::getcount();

    return 0;
}