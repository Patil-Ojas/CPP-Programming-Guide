// virtual functions wooooooo

#include <iostream>
using namespace std;

class base
{
    public:
    int var_b;

        virtual void display()    //tells compiler to not tun base class fn but run the derv class fn
    {
        cout<<"in base class "<<var_b;
    }
};

class derived : public base
{
    public:
    int var_d = 10;

    void display()
    {
        cout<<"in derv class "<<var_b<<endl;
        cout<<"in derv calss "<<var_d<<endl;
    }
};

int main()
{
    base b1;
    derived d1;
    
    base *ptr_b;
    ptr_b = &d1;
    
    ptr_b->var_b = 2;
    ptr_b->display();

    return 0;
}