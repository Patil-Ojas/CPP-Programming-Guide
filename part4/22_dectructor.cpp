
//skipped c++ vids from 30.5-34 temp
//rip

#include <iostream>
using namespace std;

class num
{   
    public:
        int count = 0;
        num()
        {
            count ++;
            cout<<"inside constructor"<<count<<endl;
        }

        ~num()
        {
            cout<<"inside destructor"<<count<<endl;
            count --;
        }
};

int main()
{
    cout<<"in int main"<<endl;
    cout<<"creating block";
    num n1;
    {
        cout<<"entering block"<<endl;
        num n2, n3;
        cout<<"exiting block"<<endl;
    }
    cout<<"back into int main"<<endl;
    return 0;
}