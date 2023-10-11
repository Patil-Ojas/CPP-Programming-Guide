
#include <iostream>
using namespace std;

class complex
{
    int x;
    int y;

    public:
        void getdata();
        void adddata(complex c1, complex c2);
        void showdata();
};

void complex::getdata()
{
    cout<<"enter real part of complex no: ";
    cin>>x;
    cout<<"enter real part of complex no: ";
    cin>>y;
}

void complex::adddata(complex c1, complex c2)
{
    x = c1.x + c2.x;
    y = c1.y + c2.y;
}

void complex::showdata()
{
    cout<<x<<" + "<<y<<"i";
}

int main()
{
    complex c1, c2, c3;
    
    c1.getdata();
    c2.getdata();

    c3.adddata(c1, c2);
    c3.showdata();

    return 0;
}