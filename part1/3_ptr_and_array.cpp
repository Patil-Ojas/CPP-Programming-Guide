
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int* b = &a;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<*b<<endl;

    int** c = &b;
    cout<<&b<<endl;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<**c;
    return 0;
}

// int main()
// {
//     int mark[4] = { 1, 2, 3, 4};
//     cout<<mark[2];

//     mark[2] = 0;
//     cout<<mark[2]<<endl;

//     int* p = mark;
//     cout<<*p<<endl;
//     cout<<*(p+1);

//     return 0;
// }
