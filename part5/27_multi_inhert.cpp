
// student -> exam -> result

// #include <iostream>
// using namespace std;

// class student 
// {
//     protected:
//     int roll_no;

//     public:
//     void set_rollno(int r);
//     void get_rollno();

// };

// void student::set_rollno(int r)
// {
//     roll_no = r;
// }

// void student::get_rollno()
// {
//     cout<<roll_no<<endl;
// }

// class exam : public student
// {
//     protected:
//     float maths;
//     float physics;

//     public:
//     void set_marks(float, float);
//     void get_marks();
// };

// void exam::set_marks(float m1, float m2)
// {
//     maths = m1;
//     physics = m2;
// }

// void exam::get_marks()
// {
//     cout<<"math marks are "<<maths<<endl;
//     cout<<"physics marks are "<<physics<<endl;
// }

// class result : public exam
// {
//     float percentage;

//     public:
//     void display()
//     {
//         get_rollno();
//         get_marks();
//         cout<<"ur percent is "<<(maths+physics)/2<<endl;
//     }
// };

// int main()
// {
//     result bro;
//     bro.set_rollno(24);
//     bro.set_marks(80.00, 60.00);
//     bro.display();

//     return 0;
// }



































//trying using cin
#include <iostream>
using namespace std;

class student 
{
    protected:
    int roll_no;

    public:
    void set_rollno();
    void get_rollno();

};

void student::set_rollno()
{
    // roll_no = r;
    cin>>roll_no;
}

void student::get_rollno()
{
    cout<<"roll no is "<<roll_no<<endl;
}

class exam : public student
{
    protected:
    float maths;
    float physics;

    public:
    void set_marks();
    void get_marks();
};

void exam::set_marks()
{
    // maths = m1;
    // physics = m2;
    cin>>maths;
    cin>>physics;
}

void exam::get_marks()
{
    cout<<"math marks are "<<maths<<endl;
    cout<<"physics marks are "<<physics<<endl;
}

class result : public exam
{
    float percentage;

    public:
    void display()
    {
        get_rollno();
        get_marks();
        cout<<"ur percent is "<<(maths+physics)/2<<endl;
    }
};

int main()
{
    result bro;
    bro.set_rollno();
    bro.set_marks();
    bro.display();

    return 0;
}