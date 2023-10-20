
#include <iostream>
using namespace std;

int main()
{
    int p = 4;
    int *ptr = &p;

    cout<<*ptr<<endl;

    //new (dynamic initialization)
    // int *ptr1 = new int (4);
    float *ptr1 = new float (44.23);
    cout<<*ptr1<<endl; 

    //delete
    int *arr = new int[3];
    arr[0] = 4;
    arr[1] = 1;
    arr[2] = 7;

    for (int i = 0; i<3; i++)
    cout<<arr[i]<<endl;

    delete[] arr;

    for (int i = 0; i<3; i++)
    cout<<arr[i]<<endl;

    return 0;
}