
#include <iostream>
using namespace std;

class emp
{
    int id;
    int salary;

    public:
        void setdata();
        void getdata();
};

void emp::setdata()
{
    salary = 100;
    cout << "Enter ID: ";
    cin >> id;
}

void emp::getdata()
{
    cout << id<<endl;
}

int main()
{
    // emp e1, e2, e3;

    // e1.setdata();
    // e1.getdata();

    emp ebay[3];

    for (int i = 0; i < 3; i++)
    {
        ebay[i].setdata();
    }

    for (int i = 0; i < 3; i++)
    {
        ebay[i].getdata();
    } 
    return 0;
}
