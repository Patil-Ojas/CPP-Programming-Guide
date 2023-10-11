
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
    cout<<"Enter data: ";
    cin>>x>>y;
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
    complex cno1, cno2, cno3;
    cno1.getdata();
    cno2.getdata();

    cno3.adddata(cno1, cno2);
    cno3.showdata();
    return 0;   
}