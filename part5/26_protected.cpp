
/*imp table
                        	Public Derivation      	Private Derivation    	Protected Derivation
Private members           	 Not Inherited             Not Inherited            Not Inherited              
Protected members              Protected                 Private                  Protected                    
Public members           	    Public  	             Private                  Protected      
*/

#include <iostream>
using namespace std;

class base
{
    protected:              //kinda like a priv var but it can be inherited 
    int a;          

    private:
    int b;

};

class derived : public base
{

};

int main()
{
    base b;
    derived d;
    // cout<<d.a;   will not work cuz a is piotected in  both base and derved class
    return 0;
}