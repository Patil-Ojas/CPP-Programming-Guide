//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
#include <iostream>
using namespace std;

class complex;

class calculator
{
    public:
        int complex_real_add(complex, complex);
        int complex_img_add(complex, complex);
};

class complex
{
    int a;
    int b;
    friend int calculator::complex_real_add(complex n1, complex n2);
    friend int calculator::complex_img_add(complex n1, complex n2);

    //or we can declare the class as friend
    // friend class calcultor;

    public:
        void setdata(int n1, int n2)
        {
            a = n1;
            b = n2;
        }
        void printdata()
        {
            cout<<a<<" + "<<b<<"i";
        }
};

int calculator::complex_real_add(complex n1, complex n2)
{
    return (n1.a+n2.a);
}

int calculator::complex_img_add(complex n1, complex n2)
{
    return (n1.b+n2.b);
}

int main()
{
    complex o1, o2;
    o1.setdata(1, 4);
    o2.setdata(5, 9);

    int res1, res2;
    calculator calc;
    res1 = calc.complex_real_add(o1, o2);
    res2 = calc.complex_img_add(o1, o2);
    
    cout<<res1<<" + "<<res2<<"i";
    return 0;
}