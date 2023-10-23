//polymorphism - multiple forms
// poly - compile time (fo, oo) & run time (vf)
//eg- functions overloading, operatior overloading, virtual functions

// RUN TIME POLY

#include <iostream>
using namespace std;

class base
{
    public:
    int var_b;

    public:
    void display()
    {
        cout<<"in base class, "<<var_b<<endl;
    }
};

class derived : public base
{
    public:
    int var_d;

    public:
    void display()
    {
        cout<<"in derived class "<<var_b<<endl;
        cout<<"in derived class "<<var_d<<endl;
    }
};  

int main()
{
    base b1;
    derived d1;
    base *base_ptr;
    base_ptr = &d1;

    base_ptr->var_b = 5;
    base_ptr->display();

    //LATE BINDING  
    //ok so here we have a base class
    //pointer pointing to a derived class obj and calling a
    // function which has same name in both base and derived class.
    //in this case, only the base class fn gets compiled.

    derived d2;
    base b2;
    derived *derived_ptr;
    derived_ptr = &d2;
    derived_ptr->var_d = 10;
    derived_ptr->var_b = 15;
    derived_ptr->display();

    // derived_ptr = &b2;
    return 0;
}