
#include <iostream>
using namespace std;

class base1
{
    protected:
    int base1int;

    public:
    void set_base1int();
    void get_base1int();
};

void base1::set_base1int()
{
    cin>>base1int;
}
void base1::get_base1int()
{
    cout<<base1int<<endl;
}

class base2
{
    protected:
    int base2int;

    public:
    void setbase2_int();
    void getbase2_int();
};

void base2::setbase2_int()
{
    cin>>base2int;
}

void base2::getbase2_int()
{
    cout<<base2int<<endl;
}

class derived : public base1, public base2
{   
    protected:
    int derv;

    public:
    void set_derv()
    {
        cin>>derv;
    }
    void get_derv()
    {
        cout<<derv<<endl;
    }
    void show()
    {
        set_base1int();
        setbase2_int();
        set_derv();
        cout<<endl;
        get_base1int();
        getbase2_int();
        get_derv();
    }
};

int main()
{
    derived bruh;
    bruh.show();
    return 0;
}