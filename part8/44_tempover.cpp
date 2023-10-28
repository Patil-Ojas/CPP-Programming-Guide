

#include <iostream>
using namespace std;

template <class T>
class hairy
{
    public:
    int data;

    hairy(T a)
    {
        data = a;
    }
    void display()
    {
        cout<<"inside class "<<data<<endl;
    }
    void display1();
};

template <class T>
void hairy<T>::display1()
{
    cout<<"first temp fn "<<data<<endl;
}

void func(int a)
{
    cout<<"non temp fn "<<a<<endl;
}

// if above func wasnt there then this will be called
template <class T>
void func(T a)
{
    cout<<"temp fn "<<a<<endl;
}

int main()
{
    // hairy<int> h1(5);
    // h1.display();
    // cout<<"outside calss "<<h1.data<<endl;
    // h1.display1();

    func(5);
    return 0;    
}