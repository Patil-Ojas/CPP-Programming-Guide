
#include <iostream>
using namespace std;

class calci
{
    protected:
    float n1, n2;

    public:
    void setdata1();
    void calculate();
};

void calci::setdata1()
{
    cin>>n1;
    cin>>n2;
}
void calci::calculate()
{
    cout<<"add is "<<n1+n2<<endl;
    cout<<"sub is "<<n1-n2<<endl;
    cout<<"mul is "<<n1*n2<<endl;
    cout<<"div is "<<n1/n2<<endl;
}

class sci_calci
{
    protected:
    int s1, s2;

    public:
    void setdata2();
    void sci_calculate();
};

void sci_calci::setdata2()
{
    cin>>s1;
    cin>>s2;
}

void sci_calci::sci_calculate()
{
    cout<<"remainder is "<<s1%s2<<endl;
    cout<<"uhh i dunno "<<s1+s1*s1/s2;
}

class operate : public calci, public sci_calci
{
    public:
    void display()
    {
        setdata1();
        calculate();

        setdata2();
        sci_calculate();
    }
};

int main()
{
    operate bruh;
    bruh.display();
    return 0;
}

