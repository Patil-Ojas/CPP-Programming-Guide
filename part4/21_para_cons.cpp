
#include <iostream>
using namespace std;

class complex
{
    int a, b;

    public:
        complex(int, int);
        void printf()
        {
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

complex::complex(int x, int y)
{
    a = x;        //any val
    b = y;
}

int main()
{   
    //implicit call
    complex c1(4, 6);

    //explicit call
    complex c2 = complex(5, 11);
    c1.printf();
    c2.printf();

    return 0;
}