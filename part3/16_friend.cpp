

#include <iostream>
using namespace std;

class complex
{
    int x;
    int y;

    public:
        void setdata(int n1, int n2);
        friend complex addata(complex c1, complex c2);
        void showdata();
};

void complex::setdata(int n1, int n2)
{
   x = n1;
   y = n2;
}

// we dont need to :: it
complex addata(complex c1, complex c2)
{
    // x = c1.x + c2.x;       //cant use x and y cuz priv 
    // y = c1.y + c2.y;

    complex c3;
    // c3.setdata((c1.x+c2.x), (c1.y+c2.y));
    c3.x = c1.x+c2.x;
    c3.y = c1.y+c2.y;
    return c3;
}

void complex::showdata()
{
    cout<<x<<" + "<<y<<"i";
}
int main()
{
    complex c1, c2, c3;
    
    c1.setdata(2, 5);
    c2.setdata(3, 5);

    c3 = addata(c1, c2);
    c3.showdata();

    return 0;
}