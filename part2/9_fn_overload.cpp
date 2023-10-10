
#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout<<"f1"<<endl;
    return a+b;
}

int sum(int a, int b, int c)
{
    cout<<"f2"<<endl;
    return a+b+c;
}   

int main()
{
    int a = 3;
    int b = 5;
    int c = 6;

    cout<<"using f1 "<<sum(a, b)<<endl;
    cout<<"using f2 "<<sum(a, b, c)<<endl;

    return 0;
}