
#include <iostream>
using namespace std;

class shop
{
    int id[100];
    int price[100];
    int counter;

    public:
        void thecounter()
        {
            counter = 0;
        }
        void setPrice();
        void displayPrice();
};

void shop::setPrice()
{
    cout<<"enter id of item no "<<counter+1<<":";
    cin>>id[counter];
    cout<<"enter price of item no "<<counter+1<<":";
    cin>>price[counter];
    counter ++;
}

void shop::displayPrice()
{
    for (int i=0; i<counter; i++)
    {
        cout<<id[i]<<" has price "<<price[i]<<endl;
    }
}

int main()
{
    shop ebay;
    ebay.thecounter();
    ebay.setPrice();
    ebay.setPrice();
    ebay.setPrice();
    ebay.displayPrice();

    return 0;
}