
#include <iostream>
using namespace std;

template <class T1, class T2> 
float avg(T1 a, T2 b)
{
    float avg = (a+b)/2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp;
    temp = b;
    b = a;
    a = temp;
}

int main()
{
    float a;
    a = avg(5, 2.8);     
    cout<<a<<endl;
    // printf("%.2f", a);

    int x = 5;
    int y = 3;
    swapp(x, y);
    cout<<x<<" "<<y;
    return 0;
}