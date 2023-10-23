
//this is a keywoord which is a pointer which points to the object which invokes the member function 
#include <iostream>
using namespace std;

class A
{
    int a;

    public:
    void setdata(int a)
    {
        // a = a;      //gives garbo val, -> fixes it 
        this->a = a;
    }
    void getdata()
    {
        cout<<a<<endl;
    }
};

class B
{
    int b;

    public:
    B & setdata(int b)
    {
        this->b = b;
        return *this;
    }
    void getdata()
    {
        cout<<b<<endl;
    }
};

int main()
{
    A a;
    a.setdata(3);
    a.getdata();

    B b;
    b.setdata(5).getdata();
    return 0;
}
