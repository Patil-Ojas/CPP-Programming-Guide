
#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    public:
        void readdata();
        void check_bin();
        void ones_comp();
        void display();
};

void binary::readdata()
{
    cout<<"enter num: ";
    cin>>s;
}

void binary::check_bin()
{
    for (int i=0; i<s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"invalid"<<endl;
            exit(0);
        }
    }
    cout<<"This number is valid"<<endl;
}

void binary::ones_comp()
{
    for (int i=0; i<s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i)=='1')
        {
            s.at(i) = '0';
        }
    }
}

void binary::display()
{
    cout<<"ones complement is: "<<s;
}

int main()
{
    binary bruh;
    bruh.readdata();
    bruh.check_bin();
    bruh.ones_comp();
    bruh.display();
    return 0;
}