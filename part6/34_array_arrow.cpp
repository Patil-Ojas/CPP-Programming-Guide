
#include <iostream>
using namespace std;

class shop
{
    int id;
    float price;

    public:
    void setdata()
    {
        cin>>id;
        cin>>price;
    }

    void display()
    {
        cout<<id<<endl; 
        cout<<price<<endl;
    }
};

int main()
{
    int n;
    cin>>n;

    shop *ptr = new shop[n]; 
    shop *ptrtemp = ptr; 

    for (int i=0; i<n; i++)
    {
        ptr->setdata();
        ptr++;
    }
    ptr = ptrtemp;
    for (int i=0; i<n; i++)
    {
        ptr->display();
        ptr++;
    }

    return 0;
}