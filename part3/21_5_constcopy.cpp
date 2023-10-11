
#include <iostream>
using namespace std;

class number
{
    int a;

    public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }
    number (number &obj)
    {
        a = obj.a;
        cout<<"copy constructor called"<<endl;
    }

    //when no copy constructor is found, compiler supplies ita own copy constructor

    void display()
    {
        cout<<"no is "<<a<<endl;
    }
};

int main()
{
    number x, y, z(10);
    x.display();
    y.display();
    z.display();

    number z1(z), z2;           // copy constructor will be called
    z1.display();

    z2 = z;                     // copy constructor is not called here
    z2.display();

    number z3 = z;              // copy constructor will be called
    z3.display();

    return 0;
}