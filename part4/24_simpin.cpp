// Simple Inheritance (public mode ex)
// in public visibility-> public members of base class become public members of derived class
// in priv visibility-> public members of base class become priv members of derived class
// we cannot inherit private members under any circumsatnce

#include <iostream>
using namespace std;

// base class
class Employee
{
    public:
    int id;
    float salary;

    Employee(int inid)
    {
        id = inid;
        salary = 34;
    }
    Employee()
    {

    }
};

//default visibility mode is private
class Programmer : public Employee
{

    public:
    int bruh = 5;
    Programmer(int inid)
    {
        id = inid;
    }
    void getdata()
    {
        cout<<bruh<<endl;
        cout<<id<<endl;
    }
};
 
int main()
{
    Employee hari(1), roha(3);
    
    cout<<hari.salary<<endl;
    cout<<roha.salary<<endl;

    Programmer skill(25);
    skill.getdata();
    cout<<skill.bruh<<endl;
    cout<<skill.id;                 //this cant be called in the priv exmple
    
    return 0;
}