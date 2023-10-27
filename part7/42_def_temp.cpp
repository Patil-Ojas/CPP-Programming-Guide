
#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float>
class bruh
{
    public:
    T1 a;
    T2 b;

    bruh(T1 data1, T2 data2)
    {
        a = data1;
        b = data2;
    }

    void display()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
};

int main()
{   
    // <> used to call default
    bruh <>b1(5, 2.45);
    b1.display();

    bruh <float, int>b2(5.2, 7);
    b2.display();

    return 0; 
}