// at the end all data is gonna be priv

#include <iostream>
using namespace std;

class base
{
    int data1;  //since its priv, its not inheritable

    public:
    int data2;
    void setdata();
    int getdata1();      //helps access data1
    int getdata2();
};

class derived : public base
{
    int data3;

    public:
    void process();
    void display();
};

void base::setdata()
{
    data1 = 10;
    data2 = 20;
}

int base::getdata1()
{
    return data1;
}

int base::getdata2()
{
    return data2;
}

void derived::process()
{
    setdata();
    data3 = data2*getdata1();
}

void derived::display()
{
    cout<<"data 1 is "<<getdata1()<<endl;
    cout<<"data 2 is "<<data2<<endl;
    cout<<"data 3 is "<<data3<<endl;
}

int main()
{
    derived der;
    // der.setdata();    wont work now since priv
    der.process();
    der.display();

    return 0;
}