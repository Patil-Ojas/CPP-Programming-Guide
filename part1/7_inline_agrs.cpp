
//inline funct are used to save time, compiler treats it as a line as a funct to save time
//we only use them for smaller funciton codes 
//if we use them for big fn codes then we end up using more space and memory/
// never use inline fn when recurson, static vars are in use
// inline is a req to compiler, the final decision lies in the hands of the compiler
 
//static vars are declared only once; compiler ignores their call later on

#include <iostream>
using namespace std;

// inline int product(int a, int b)
// {
//     return a*b;
// }
// int main()
// {
//     int a = 5;
//     int b = 9;
//     cout<<product(a, b);

//     return 0;
// }

//default args
//defalut ones must be at the end 

//const args are used in paramenter, the are used to make sure the val of 
// the original parameter doesnt change

float moneyrec(int money, float factor = 1)
{
    return money*factor; 
}

int main()
{
    int money = 100000;

    cout<<"deafult receive:"<<moneyrec(money)<<endl;
    cout<<"arg used: "<<moneyrec(money, 1.1)<<endl;

    return 0;
}
