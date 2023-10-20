
#include <iostream>
using namespace std;

class student
{
    protected:
    int roll_no;

    public:
    void setdata()
    {
        cin>>roll_no;
    }
    void getdata()
    {
        cout<<roll_no<<endl;
    }
};

class test : virtual public student
{
    protected:
    float meth, phy;

    public:
    void set_marks()
    {
        cin>>meth;
        cin>>phy;
    }
    void get_marks()
    {
        cout<<meth<<" "<<phy<<endl;
    } 
};

class sports : virtual public student
{
    protected:
    int score;

    public:
    void set_score()
    {
        cin>>score;
    }

    void get_score()
    {
        cout<<score<<endl;
    }
};

class result : public sports, public test
{
    private:
    int total;

    public:
    void display()
    {
        total = meth + phy + score;
        cout<<"rolll no is ";
        getdata();
        cout<<"\nmeth and phy maks are ";
        get_marks();
        cout<<"\npe score is ";
        get_score();
        cout<<"\ntotal is "<<total<<endl;
    }
};

int main()
{
    result r;
    r.setdata();
    r.set_marks();
    r.set_score();
    r.display();
    return 0;
}