
#include <iostream>
using namespace std;
 
//call by val
void fake_swap(int a, int b)
{
    int temp = b;
    b = a;
    a = temp;
}

//call by ref
void real_swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

//call by c++ ref
void better_swap(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}

int main()
{
    int a = 4;
    int b  = 5;
    fake_swap(a, b);
    cout<<a<<endl;
    cout<<b<<endl;

    real_swap(&a, &b);
    cout<<a<<endl;
    cout<<b<<endl;

    //ooooooooooooooooooooooooooooooooo
    better_swap(a, b);
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}