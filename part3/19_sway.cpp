
#include <iostream>
using namespace std;

class b;

class a
{
    int num1;
    friend void exchange(a &, b &);
    
    public:
        void getval(int val)
        {
            num1 = val;
        }
        void display()
        {
            cout<<num1<<" ";
        }

};

class b
{
    int num2;
    friend void exchange(a &, b &);

    public:
        void getval(int val)
        {
            num2 = val;
        }
        void display()
        {
            cout<<num2<<endl;
        }

};

void exchange(a & a1, b & b1)
{
    int temp = b1.num2;
    b1.num2 = a1.num1;
    a1.num1 = temp;
}

int main()
{
    a a1;
    b b1;

    a1.getval(3);
    b1.getval(5);

    a1.display();
    b1.display();
    
    exchange(a1, b1);
    
    a1.display();
    b1.display();

    return 0;
}   