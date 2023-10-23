
// abstract class (cwh) are the ones which contain atleast one pure virtual fn
// designed suck that objects cannot be created of this calss
// they help othera inhertied class to run

#include <iostream>
#include <cstring>
using namespace std;

class cwh
{
    protected:
    string title;
    float rating;

    public:
    cwh(string s, float r)
    {
        title = s;
        rating = r; 
    }
    virtual void display() = 0;         // do-nothing fn = pure virtual function
};

class cwhvid : public cwh
{
    float vidlength;

    public:
    cwhvid(string s, float r, float vl) : cwh(s, r)
    {
        vidlength = vl;
    }
    void display()
    {
        cout<<title<<endl;
        cout<<"in derv class "<<vidlength<<endl;
        cout<<rating<<endl;
    }
};

class cwhtxt : public cwh
{
    int words;

    public:
    cwhtxt(string s, float r, int wc) : cwh(s, r)
    {
        words = wc;
    }
    void display()
    {
        
        cout<<title<<endl;
        cout<<"in derv class "<<words<<endl;
        cout<<"rating is "<<rating<<endl;
    }
};

int main()
{
    string title;
    float rating, vid_l;
    int w_ords;

    title = "bruh momento";
    rating = 5.6;
    vid_l = 43.5;

    cwhvid bruh(title, rating, vid_l);
    // bruh.display();

    title = "aaa word";
    rating = 9.2;
    w_ords = 4784;

    cwhtxt aaaa(title, rating, w_ords);
    // aaaa.display();

    cwh *ptr[2];
    ptr[0] = &bruh;
    ptr[1] = &aaaa;

    ptr[0]->display();
    ptr[1]->display();

    return 0;
}