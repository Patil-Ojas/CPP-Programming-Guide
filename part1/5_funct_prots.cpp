
// if we declare a function after int main then we get error
// to overcome this use use function prototype
#include <iostream>
using namespace std;

int sum(int a, int b);    //fn prot
void gm(void);            //optional to write 2nd void

int main()
{
    int a, b;
    cin>>a;
    cin>>b;

    cout<<sum(a, b)<<endl;
    gm();
    return 0;
}

int sum (int a, int b)
{
    return a+b;
}

void gm()
{
    cout<<"gm";
}