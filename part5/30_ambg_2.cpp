
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

class derv : public base1
{
    public:
    void greet()
    {
        cout<<"bruh";
    }
};

int main()
{   
    base1 b;
    b.greet();

    derv d;
    d.greet(); 

    //if derv class hasnt defined greet then base1 greet will be used
    return 0;
}