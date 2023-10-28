#include <iostream>
using namespace std;

class yt
{
    protected:
    int n1, n2;
    int n3, n4;

    public: 
    void getdata()
    {
        cin>>n1>>n2>>n3>>n4;
    }
};

class ty : public yt
{
    protected:
    int temp1;
    int temp2;

    public:
    void calculate()
    {
        getdata();

        temp1 = (n1+n2)/2;
        temp2 = (n3+n4)/2;

        void display()
        {
            cout<<temp1<<endl<<temp2<<endl;
        }
    }
};

int main()
{
    ty y1;
    y1.calculate();
    return 0;
}   