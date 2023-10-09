
//typedef isnt required in cpp

#include <iostream>
using namespace std;

// typedef struct employee
// {
//     int id;
//     char name;
//     float salary;
// } emp;

// int main()
// {
//     emp harry;
//     harry.id = 105;
//     harry.name = 'h';
//     harry.salary = 1;

//     cout<<harry.id<<endl;
//     cout<<harry.name<<endl;
//     cout<<harry.salary<<endl;

//     return 0;
// }

//UNIONS
// if u wanna use only 1 thing from rice name cost, we use union
// used for memory optimisation
// typedef union money
// {
//     int rice;
//     char name;
//     float cost;
// }moni;

// int main()
// {
//     union money m1;
//     moni m2;
//     m1.rice = 25;
//     m1.cost = 500;
//     //wont work cuz only one at a time
//     cout<<m1.rice<<endl;
//     cout<<m1.cost<<endl;

//     return 0;
// }

//ENUM
//gives values kinda like array
int main()
{
    enum Meal {breakfast, lunch, dinner};

    cout<<breakfast;
    cout<<dinner;

    Meal m1 = lunch;
    cout<<m1;

    return 0;
}

