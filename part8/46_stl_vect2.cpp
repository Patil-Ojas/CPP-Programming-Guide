
#include <iostream>
#include <vector>
using namespace std;

//wtffffff
template<class T>
void display(vector<T> v)
{
    for (int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> vec0;                 //0 integer vect (wont shoe anythign as output)
    vector<char> vec1(4);            //4 ele character vector
    vector<char> vec2(vec1);          // 4 ele char vect from vec1
    vector<int> vec3(6, 3);           // 6 ele vect of 3's

    vec1.push_back('C');

    display(vec0);
    display(vec1);
    display(vec2);
    display(vec3);    
    
    return 0;
}