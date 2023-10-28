#include <iostream>
using namespace std;

template <class T>
void find()
{
    int n;
    cin>>n;
    
    T arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    int loc1, loc2;
    
    T grade;
    cin>>grade;
    
    int k;
    cin>>k;
    // int k1 = 2;
    
    for (int i=0; i<n; i++)
    {
        if (arr[i] == grade)
        {
            loc1 = i;
        }
    }
    
    int dist1, dist2, dist3;
    dist1 = grade + k ;
    dist2 = loc1 - grade - k;
    
    cout<<arr[loc1-dist1]<<" "<<arr[loc1-dist2]<<" "<<arr[loc1+dist2]<<endl;
    cout<<loc1-dist1<<" "<<loc1-dist2<<" "<<loc1+dist2<<endl;
}

int main()
{
    find <int>();
    find <char>();
    
    return 0;
}