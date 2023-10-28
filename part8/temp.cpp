
#include <iostream>
using namespace std;

template<class T1>
void sort(int n)
{
    T1 arr[n], temp[n];

    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (arr[i]>arr[j])
            {
                temp[i] = arr[i];
                arr[i] = arr[j];
                arr[j] = temp[i];
            }
        }
    }
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int n, a;
    cin>>n;

    string name;
    cin>>name;

    if (name=="float")
    {
        a = 1;
        cout<<name<<endl;
    }
    else 
    {   
        a= 0;
    }

    switch (a)
    {
        case 1:
        {
            sort <float>(n);
            break;
        }
        case 0:
        {
            sort <int>(n);
            break;
        }
        default:
        {
            cout<<"nruh"<<endl;
            break;
        }
    }

    return 0;
}   