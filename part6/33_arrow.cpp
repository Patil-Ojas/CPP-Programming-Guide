
#include <iostream>
using namespace std;

class complex
{
    int real, img;

    public:
    void setdata()
    {
        cin>>real;
        cin>>img;
    }
    
    void getdata()
    {
        cout<<real<<endl;
        cout<<img<<endl;
    }
};

int main()
{
    complex c1;
    c1.setdata();
    c1.getdata();

    complex *ptr = &c1;
    (*ptr).setdata();
    (*ptr).getdata();
        //same as
    ptr->setdata();
    ptr->getdata();

    //array of obj
    complex *ptr2 = new complex[2];
    ptr2 -> setdata();
    ptr2 -> getdata();

    return 0;
}