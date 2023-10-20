
#include <iostream>
using namespace std;

class base1
{
    public:
    void greet()
    {
        cout<<"how are u?"<<endl;
    }
};

class base2
{
    public:
    void greet()
    {
        cout<<"how are u bro?"<<endl;
    }
};

class base3
{
    public:
    void greet()
    {
        cout<<"how are u bruh?"<<endl;
    }
};

class derv : public base1, public base2, public base3
{
    public:

    //ambiguity 
    // void display()
    // {
    //     greet();
    // }

    //solution
    void greet()
    {
        base1::greet();
        base2::greet();
        base3::greet();
    }
};

int main()
{   
    derv b;
    // b.display();  //amb
    b.greet(); 
    return 0;
}