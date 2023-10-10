
#include <iostream>
using namespace std;

class Employee
{
    //cant be accessed by main
    private:
        int a, b, c;

    //can be accessed
    public:
        int d, e;
        
        //two types of using fn in class
        void setdata(int a1, int b1, int c1);
        void getdata()
        {
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
            cout<<d<<endl;
            cout<<e<<endl;
        }
};

void Employee::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee harry;
    // harry.a = 12;   //wont work cuz a is priv
    harry.d = 10;
    harry.e = 45;

    harry.setdata(70, 80, 90);
    harry.getdata();
    return 0;
}
