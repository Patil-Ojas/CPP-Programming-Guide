
///https://www.cplusplus.com/reference/vector/vector/

#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> v1)
{
    for (int i=0; i<v1.size(); i++)
    {
        // cout<<v1[i]<<" ";
        cout<<v1.at(i)<<" ";           //same as above
    }
    cout<<endl;
}

int main()
{
    vector <int> vec1;  //zero length interger vector
    
    int element;
    int n;
    cin>>n;

    for (int i=0; i<n; i++)
    {
        cout<<"enter ele ";
        cin>>element;
        vec1.push_back(element);     
    }
    display(vec1);

    vec1.pop_back();
    display(vec1);

    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter, 11000);
    display(vec1);

    // vec1.insert(iter+1, 50, 566);
    display(vec1);

    return 0;
}