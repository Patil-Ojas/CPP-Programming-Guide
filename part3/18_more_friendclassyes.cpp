
#include <iostream>
using namespace std;

class y;

class x
{
    int data;
    friend void add(x, y);
    
    public:
        void setvalue(int value)
        {
            data = value;
        }
};

class y
{
    int num;
    friend void add(x, y);

    public:
        void setvalue(int value)
        {
            num = value;
        }
};

void add(x o1, y o2)
{
    cout<<"sum is "<<o1.data+o2.num;
}

int main()
{
    x a;
    a.setvalue(9);

    y b;
    b.setvalue(8);
 
    add(a, b);
    
    return 0;
}