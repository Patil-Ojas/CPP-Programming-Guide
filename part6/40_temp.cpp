
#include <iostream>
using namespace std;

template <class T>
class vector
{
    public:
    int size;
    T *arr;

    public:
    vector(int m)
    {
        size = m;   
        arr = new T[size];
    }

    T dotproduct(vector &v)
    {
        T d = 0;

        for (int i=0; i<size; i++)
        {
            d = d + this->arr[i]*v.arr[i];
        }
        return d;
    }

    //withput this->
    // T dotproduct(vector v)
    // {
    //     T d = 0;

    //     for (int i=0; i<size; i++)
    //     {
    //         d = d + arr[i]*v.arr[i];
    //     }
    //     return d;
    // }
};

int main()
{
    //for int (v1, v2)
    vector <int>v1(3);
    v1.arr[0] = 5;
    v1.arr[1] = 4;
    v1.arr[2] = 1;

    vector <int>v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;
    
    //5*1 + 4*0 + 1*1 = 6
    int a;
    a = v1.dotproduct(v2);
    cout<<a<<endl;

    //for float(v3, v4)
    vector <float>v3(3);
    v3.arr[0] = 5.5;
    v3.arr[1] = 4.2;
    v3.arr[2] = 1.7;

    vector <float>v4(3);
    v4.arr[0] = 1;
    v4.arr[1] = 0;
    v4.arr[2] = 1;

    float b = v3.dotproduct(v4);
    cout<<b<<endl;
    return 0;
}