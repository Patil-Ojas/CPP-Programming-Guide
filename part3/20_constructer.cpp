
#include <iostream>
using namespace std;

class complex
{
    int a, b;

    public:
        complex(void);
        void printf()
        {
            cout<<a<<" + "<<b<<"i";
        }
};

complex::complex(void)
{
    a = 0;        //any val
    b = 0;
}

int main()
{
    complex c1;
    c1.printf();

    return 0;
}